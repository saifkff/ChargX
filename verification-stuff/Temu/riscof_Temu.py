
import os
import re
import shutil
import subprocess
import shlex
import logging
import random
import string
from string import Template
import sys

import riscof.utils as utils
import riscof.constants as constants
from riscof.pluginTemplate import pluginTemplate

logger = logging.getLogger()

class Temu(pluginTemplate):
    __model__ = "Temu"
    __version__ = "1.0"  # Updated version for your DUT

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        config = kwargs.get('config')

        # Raise error if config is missing or empty
        if config is None:
            print("Please enter input file paths in configuration.")
            raise SystemExit(1)

        # Path to the Verilator-based simulation directory (e.g., your core path)
        self.dut = os.path.abspath(config['PATH'] if 'PATH' in config else "/home/ousaif/Five-Stages-RISC-V-")

        # Number of parallel jobs
        self.num_jobs = str(config['jobs'] if 'jobs' in config else 1)

        # Plugin path
        self.pluginpath = os.path.abspath(config['pluginpath'])

        # ISA and platform spec files
        self.isa_spec = os.path.abspath(config['ispec'])
        self.platform_spec = os.path.abspath(config['pspec'])

        # Target run flag
        if 'target_run' in config and config['target_run'] == '0':
            self.target_run = False
        else:
            self.target_run = True

        # Verilator-specific commands
        self.objcopy = 'riscv{0}-unknown-elf-objcopy -O binary {1} {2} --only-section={3}'
        self.hexdump = 'hexdump -v -e \'/1 "%02x"\' {0} > {1}'
        self.verilator_cmd = 'verilator --cc --exe --build --trace --no-timing --top-module core top_tb.cpp main.sv top.sv tracer.sv && {}obj_dir/Vcore'

    def initialise(self, suite, work_dir, archtest_env):
        self.work_dir = work_dir
        self.suite_dir = suite

        # Compile command for generating ELF
        self.compile_cmd = 'riscv{1}-unknown-elf-gcc -march={0} ' \
                          '-static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g ' \
                          '-T ' + self.pluginpath + '/env/link.ld ' \
                          '-I ' + self.pluginpath + '/env/ ' \
                          '-I ' + archtest_env + ' {2} -o {3} {4}'

    def build(self, isa_yaml, platform_yaml):
        ispec = utils.load_yaml(isa_yaml)['hart0']
        self.xlen = ('64' if 64 in ispec['supported_xlen'] else '32')
        self.isa = 'rv' + self.xlen
        if "I" in ispec["ISA"]:
            self.isa += 'i'
        if "M" in ispec["ISA"]:
            self.isa += 'm'
        if "F" in ispec["ISA"]:
            self.isa += 'f'
        if "D" in ispec["ISA"]:
            self.isa += 'd'
        if "C" in ispec["ISA"]:
            self.isa += 'c'
        self.compile_cmd += ' -mabi=' + ('lp64 ' if 64 in ispec['supported_xlen'] else 'ilp32 ')

    def runTests(self, testList):
        if os.path.exists(os.path.join(self.work_dir, "Makefile." + self.name[:-1])):
            os.remove(os.path.join(self.work_dir, "Makefile." + self.name[:-1]))
        make = utils.makeUtil(makefilePath=os.path.join(self.work_dir, "Makefile." + self.name[:-1]))
        make.makeCommand = 'make -k -j' + self.num_jobs

        for testname in testList:
            testentry = testList[testname]
            test = testentry['test_path']
            test_dir = testentry['work_dir']
            elf = 'my.elf'
            sig_file = os.path.join(test_dir, self.name[:-1] + ".signature")
            compile_macros = ' -D' + " -D".join(testentry['macros'])

            cmd = self.compile_cmd.format(testentry['isa'].lower(), self.xlen, test, elf, compile_macros)

            if self.target_run:
                # Simulation command sequence
                test_name = testentry['work_dir'].split('/')[-2]
                simcmd = '; '.join((
                    self.objcopy.format(self.xlen, elf, 'imem.bin', '.text.init'),
                    self.objcopy.format(self.xlen, elf, 'dmem.bin', '.data'),
                    self.hexdump.format('imem.bin', '/home/ousaif/Five-Stages-RISC-V-/imem.hex'),
                    self.hexdump.format('dmem.bin', '/home/ousaif/Five-Stages-RISC-V-/dmem.hex'),
                    f'cd {self.dut}',
                    self.verilator_cmd.format(self.dut),
                    f'{self.dut}/obj_dir/Vcore',
                    f'cd -',
                    f"cp {self.dut}/file.signature {os.path.join(test_dir, self.name[:-1] + '.signature')}"
                ))
            else:
                simcmd = 'echo "NO RUN"'

            execute = '@cd {0}; {1}; {2};'.format(testentry['work_dir'], cmd, simcmd)
            make.add_target(execute)

        make.execute_all(self.work_dir)

        if not self.target_run:
            raise SystemExit(0)