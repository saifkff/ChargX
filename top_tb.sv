module top_tb;
reg clk;
reg rst;

top uut(
  .clk(clk),
  .rst(rst)
);
always #5 clk = ~clk;

initial begin
  clk = 0;
  rst =1;
  $dumpfile("top_tb.vcd");
  $dumpvars(0,top_tb);
  #15 rst = 0;
  #200 $finish;
end

initial begin
        $monitor("Time: %0t | PC: %d | IF_Inst: %h | ID_Inst: %h | rs1: %d | rs2: %d | rd: %d | rs1_data: %d | rs2_data: %d | ALU_Result: %d | Mem_Read: %d | WB_Data: %d | WB_rd: %d | Stall: %b | Flush: %b | Forward_A: %b | Forward_B: %b",
                 $time,
                 uut.if_pc_out,
                 uut.if_instruction,
                 uut.id_instruction,
                 uut.id_rs1,
                 uut.id_rs2,
                 uut.id_rd,
                 uut.id_rs1_data,
                 uut.id_rs2_data,
                 uut.ex_alu_result,
                 uut.mem_read_data,
                 uut.wb_data,
                 uut.wb_rd,
                 uut.stall,
                 uut.flush,
                 uut.forward_a,
                 uut.forward_b
        );
    end
endmodule