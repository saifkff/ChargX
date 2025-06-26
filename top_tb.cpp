#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vtop.h"

#define MAX_SIM_TIME 100000  // In cycles

int main(int argc, char **argv, char **env) {
	if (false && argc && argv && env) {}

	Verilated::mkdir("logs");

	const std::unique_ptr<VerilatedContext> contextp {new VerilatedContext};
	contextp->commandArgs(argc, argv);
	contextp->traceEverOn(true);

	VerilatedVcdC *tfp = new VerilatedVcdC;

	const std::unique_ptr<Vtop> top {
		new Vtop {contextp.get(), "TOP"}
	};
	top->trace(tfp, 5);

	tfp->open("logs/top.vcd");

	unsigned int sim_time = 0;
	top->clock = 1;
	while (!contextp->gotFinish() && sim_time < MAX_SIM_TIME) {
		top->clock ^= 1;  // Toggle clock
		if (sim_time <= 1) {
		    top->reset = 1;  // Assert reset
		} else {
		    top->reset = 0;  // Deassert reset
		}
		top->eval();  // Evaluate model
		tfp->dump(sim_time);
        printf(
            "Time: %d | PC: %d | IF_Inst: %x | ID_Inst: %x | rs1: %d | rs2: %d | rd: %d | rs1_data: %d | rs2_data: %d | ALU_Result: %d | Mem_Read: %d | WB_Data: %d | WB_rd: %d | Stall: %b | Flush: %b | Forward_A: %b | Forward_B: %b",
            sim_time,
            top->if_pc_out,
            top->if_instruction,
            top->id_instruction,
            top->id_rs1,
            top->id_rs2,
            top->id_rd,
            top->id_rs1_data,
            top->id_rs2_data,
            top->ex_alu_result,
            top->mem_read_data,
            top->wb_data,
            top->wb_rd,
            top->stall,
            top->flush,
            top->forward_a,
            top->forward_b
        )
		++sim_time;
	}
	top->final();
	tfp->close();
	return 0;
}