# Five-Stages-RISC-V-
5-Stage RISC-V Processor
Overview
This project implements a 5-stage pipelined RISC-V processor supporting basic RV32I instructions (e.g., addi, add). The pipeline stages are Instruction Fetch (IF), Instruction Decode (ID), Execute (EX), Memory (MEM), and Write-Back (WB). The design currently handles data hazards (via forwarding) and structural hazards (via separate instruction and data memories), and is in the process of addressing control hazards.
The processor is written in Verilog and can be simulated using tools like Icarus Verilog and viewed with GTKWave. The current implementation focuses on a simple instruction sequence: addi x1, x0, 10; addi x2, x0, 20; add x3, x1, x2.
Pipeline Stages

Instruction Fetch (IF):

Fetches instructions from a predefined instruction memory.
Outputs: if_instruction, if_pc_out.
Module: fetch.


Instruction Decode (ID):

Decodes the instruction, extracts rs1, rs2, rd, and immediate values.
Generates control signals (id_wenb, id_rs2_imm_sel, etc.).
Modules: decoder, control_unit, regfile, immediate_generator.


Execute (EX):

Performs ALU operations, resolves data hazards via forwarding.
Outputs: ex_alu_result, ex_branch_taken.
Modules: alu, forwarding_unit, rs2orimm.


Memory (MEM):

Handles memory operations (currently no loads/stores in test sequence).
Outputs: mem_read_data, mem_alu_result.
Module: data_mem.


Write-Back (WB):

Writes results back to the register file.
Outputs: wb_data, wb_rd.
Modules: mux8to1, priority_encoder_8to3.



Hazard Handling
Data Hazards

RAW (Read After Write): Handled using a forwarding_unit.
Forwards data from MEM (mem_alu_result) or WB (wb_data) to EX (ex_rs1_forwarded, ex_rs2_forwarded).
Example: At t=60ns, add x3, x1, x2 in EX forwards x1=10 from WB and x2=20 from MEM, yielding ex_alu_result=30.
Recent fix: Resolved wb_rd lag by adjusting reset timing in top_tb.sv (deassert rst at t=5ns).



Structural Hazards

Resolved by using separate instruction memory (in fetch) and data memory (data_mem).
IF and MEM stages can access their respective memories simultaneously.



Control Hazards

Work in Progress:
Branches (beq, bne, etc.) and jumps (jal, jalr) are decoded, but the pipeline does not yet handle control hazards.
Current limitation: flush and stall are forced to 0, meaning incorrect instructions are not flushed after a branch.
Next steps: Implement flushing (flush=1 when ex_branch_taken=1) and possibly branch prediction.



Current Status

Working:

Basic RV32I instructions (addi, add).
Data hazard resolution via forwarding.
Structural hazard mitigation.
Simulation runs with correct forwarding at t=60ns (forward_a=2'b01, forward_b=2'b10, ex_alu_result=30).


Issues Fixed:

wb_rd lag: Adjusted testbench reset timing to ensure wb_rd=1 at t=60ns.
mem_wenb/wb_wenb showing red (X) in GTKWave: Added initialization in fetch and ensured control_unit defaults outputs to 0.


Ongoing Work:

Control hazards: Need to implement pipeline flushing for branches.
mem_wenb should go low for non-store instructions (e.g., addi); currently debugging undefined states in waveform.



Files

top.v: Top-level module integrating all pipeline stages.
top_tb.sv: Testbench for simulation, generates top_tb.vcd.
MEM_WB.v: Pipeline register between MEM and WB stages (defines wenb_in, wenb_out).

How to Run

Compile:iverilog -o top_tb top.v top_tb.sv


Simulate:vvp top_tb


View Waveform:gtkwave top_tb.vcd


Check signals at t=60ns: wb_rd=1, mem_wenb=0, wb_wenb=1, ex_alu_result=30.



Limitations

No control hazard handling (flush and stall disabled).
Limited instruction set (only addi, add tested).
No load/store instructions fully tested (mem_wenb should be 0 for current sequence).

Next Steps

Implement control hazard handling (flushing for branches).
Test load/store instructions (lw, sw) to verify mem_wenb behavior.
Add hazard detection unit to dynamically set stall and flush.

Last Updated

May 19, 2025

