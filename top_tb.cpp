#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcore.h"
#include <fstream>
#include <string>
#include <iostream>
/* verilator lint_off PINMISSING */
/* verilator lint_off WIDTHTRUNC */

#define MAX_SIM_TIME 100  // In cycles

int main(int argc, char **argv, char **env) {
    if (false && argc && argv && env) {}

    Verilated::mkdir("logs");

    const std::unique_ptr<VerilatedContext> contextp {new VerilatedContext};
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);

    VerilatedVcdC *tfp = new VerilatedVcdC;

    const std::unique_ptr<Vcore> core {
        new Vcore {contextp.get(), "CORE"}
    };
    core->trace(tfp, 5);

    tfp->open("logs/core.vcd");
    
    // Simulation loop
    unsigned int sim_time = 0;
    core->clk = 1;
    while (!contextp->gotFinish() && sim_time < MAX_SIM_TIME) {
        core->clk ^= 1;  // Toggle clock
        if (sim_time <= 1) {
            core->rst = 1;  // Assert reset
        } else {
            core->rst = 0;  // Deassert reset
        }
        core->eval();  // Evaluate model
        tfp->dump(sim_time);
        printf(
            "Time: %d | valid_pin: %d | Instruction: %x | rs1_add: %d | rs2_add: %d | rs1data: %d | rs2data: %d | rd_add: %d | rd_wdata: %d | pc_rdata: %d | pc_wdata: %d | mem_add: %d | wmask: %d | mem_rdata: %d | mem_wdata: %d\n",
            sim_time,
            core->rvfi_o_valid_0,
            core->rvfi_o_insn_0,
            core->rvfi_o_rs1_addr_0,
            core->rvfi_o_rs2_addr_0,
            core->rvfi_o_rs1_rdata_0,
            core->rvfi_o_rs2_rdata_0,
            core->rvfi_o_rd_addr_0,
            core->rvfi_o_rd_wdata_0,
            core->rvfi_o_pc_rdata_0,
            core->rvfi_o_pc_wdata_0,
            core->rvfi_o_mem_addr_0,
            core->rvfi_o_mem_wmask_0,
            core->rvfi_o_mem_rdata_0,
            core->rvfi_o_mem_wdata_0
        );
        ++sim_time;
    }

    core->final();
    tfp->close();
    return 0;
}