#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vcore.h"
/* verilator lint_off PINMISSING */
/* verilator lint_off WIDTHRUNC */
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
            "Time: %d | PC: %d | IF_Inst: %x | ID_Inst: %x | rs1: %d | rs2: %d | rd: %d | rs1_data: %d | rs2_data: %d | ALU_Result: %d | Mem_Read: %d | WB_Data: %d | WB_rd: %d | Stall: %b | Flush: %b | Forward_A: %b | Forward_B: %b\n",
            sim_time,
            core->if_pc_out,
            core->if_instruction,
            core->id_instruction,
            core->id_rs1,
            core->id_rs2,
            core->id_rd,
            core->id_rs1_data,
            core->id_rs2_data,
            core->ex_alu_result,
            core->mem_read_data,
            core->wb_data,
            core->wb_rd,
            core->stall,
            core->flush,
            core->forward_a,
            core->forward_b
        );
		++sim_time;
	}
	core->final();
	tfp->close();
	return 0;
}