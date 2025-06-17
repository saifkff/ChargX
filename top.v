module top (
    input wire clk,rst
);
    wire [31:0]if_instruction,if_pcplus4,if_pc_out;
    wire [1:0] ex_sel_bit_mux;
    wire [31:0] ex_pc_plus_imm,ex_pc_plus_imm_2,ex_rs1_plus_imm_for_jalr;
    wire [31:0] id_instruction,id_pcplus4;
    wire stall,flush;
    wire [4:0] id_rs1,id_rs2,id_rd,wb_rd,ex_rd,ex_rs1,ex_rs2,mem_rd;
    wire [31:0] id_rs1_data,id_rs2_data,id_imm;
    wire [3:0] id_alu_sel,ex_alu_sel;
    wire id_wenb,id_rs2_imm_sel,id_load_enb,id_jal_enb,id_branch_enb;
    wire id_lui_enb,id_auipc_wenb,id_sb,id_sw,id_sh;
    wire id_in_to_pr;
    wire id_addr, id_sub, id_sllr, id_sltr, id_sltur, id_xorr, id_srlr, id_srar, id_orr, id_andr;
    wire id_addi, id_addi2, id_slli, id_slti, id_sltui, id_xori, id_srli, id_srai, id_ori, id_andi;
    wire id_jal, id_jalr, id_jalreverse, id_beq, id_bne, id_blt, id_bge, id_bltu, id_bgeu;
    wire [31:0] wb_data;
    wire ex_branch_taken,ex_jal_enb,ex_wenb,ex_rs2_imm_sel,ex_branch_enb,ex_lui_enb,ex_auipc_wenb,ex_sb,ex_sh,ex_sw;
    wire [31:0] ex_store_data,ex_alu_result,ex_alu_data_B,ex_rs1_data,ex_rs2_data,ex_imm,ex_pcplus4,ex_rs1_forwarded,ex_rs2_forwarded;
    wire mem_store_enb,ex_store_enb,id_store_enb,wb_load_enb,wb_jal_enb,wb_lui_enb,wb_auipc_wenb,mem_wenb,mem_load_enb,mem_sb,mem_sh,mem_sw;
    wire [1:0] forward_a,forward_b;
    wire [31:0] mem_alu_result,mem_store_data,mem_read_data,wb_mem_data,wb_alu_result;
    wire [31:0] wb_pcplus4,id_rs1_forwarded,id_rs2_forwarded;
    wire [2:0] wb_mux_sel;

    pc_plus_4 pcplus4(
        .pc(fetch.PC.pc_out),
        .pc_plus4(if_pcplus4)
    );
    fetch fetch (
        .clk(clk),
        .rst(rst),
        .instruction(if_instruction),
        .pc_out(if_pc_out),
        .sel(ex_sel_bit_mux),
        .pc_plus_4(if_pcplus4),
        .pc_plus_imm(ex_pc_plus_imm),
        .pc_plus_imm_2(ex_pc_plus_imm_2),
        .rs1_plus_imm_for_jalr(ex_rs1_plus_imm_for_jalr),
        .stall(stall)
    );
    IF_ID if_id(
        .clk(clk),
        .rst(rst),
        .instruction_in(if_instruction),
        .pcplus4_in(if_pcplus4),
        .instruction_out(id_instruction),
        .pcplus4_out(id_pcplus4),
        .stall(stall),
        .flush(flush)
    );
    decoder decoder(
        .instruction(id_instruction),
        .rs1(id_rs1),
        .rs2(id_rs2),
        .rdi(id_rd)
    );
    regfile regfile(
        .clk(clk),
        .reset(rst),
        .enable(wb_wenb),
        .data_in(wb_data),
        .rs1(id_rs1),
        .rs2(id_rs2),
        .rd_select(wb_rd),
        .data_out1(id_rs1_data),
        .data_out2(id_rs2_data)
    );
    immediate_generator immediate_generator(
        .instruction(id_instruction),
        .imm(id_imm),
        .sel()
    );
    control_unit control_unit(
        .instruction(id_instruction),
        .branch_taken(ex_branch_taken),
        .sel(id_alu_sel),
        .sel_bit_mux(ex_sel_bit_mux),
        .addr(id_addr), .sub(id_sub), .sllr(id_sllr), .sltr(id_sltr), .sltur(id_sltur),
        .xorr(id_xorr), .srlr(id_srlr), .srar(id_srar), .orr(id_orr), .andr(id_andr),
        .addi(id_addi), .addi2(id_addi2), .slli(id_slli), .slti(id_slti), .sltui(id_sltui),
        .xori(id_xori), .srli(id_srli), .srai(id_srai), .ori(id_ori), .andi(id_andi),
        .sw(id_sw), .sh(id_sh), .sb(id_sb), .lb(), .lh(), .lw(), .lbu(), .lhu(),
        .jal(id_jal), .jalr(id_jalr), .jalreverse(id_jalreverse),
        .beq(id_beq), .bne(id_bne), .blt(id_blt), .bge(id_bge), .bltu(id_bltu), .bgeu(id_bgeu),
        .wenb(id_wenb),
        .rs2_imm_sel(id_rs2_imm_sel),
        .lui_enb(id_lui_enb),
        .auipc_wenb(id_auipc_wenb),
        .load_enb(id_load_enb),
        .jal_enb(id_jal_enb),
        .branch_enb(id_branch_enb),
        .in_to_pr(id_in_to_pr),.store_enb(id_store_enb)
    );
    hazard_detction hazard_detction(
        .id_rs1(id_rs1),
        .id_rs2(id_rs2),.ex_rd(ex_rd),
        .ex_load_enb(ex_load_enb),
        .branch_taken(ex_branch_taken),
        .jal_enb(ex_jal_enb),
        .stall(stall),
        .flush(flush)
    );
    ID_EX id_ex(
        .clk(clk),
        .rst(rst),
        .alu_sel_in(id_alu_sel),
        .wenb_in(id_wenb),
        .rs2_imm_sel_in(id_rs2_imm_sel),
        .load_enb_in(id_load_enb),
        .jal_enb_in(id_jal_enb),
        .branch_enb_in(id_branch_enb),
        .lui_enb_in(id_lui_enb),
        .auipc_wenb_in(id_auipc_wenb),
        .sb_in(id_sb),
        .sh_in(id_sh),
        .sw_in(id_sw),
        .rs1_data_in(id_rs1_forwarded),
        .rs2_data_in(id_rs2_forwarded),
        .imm_in(id_imm),.store_enb_in(id_store_enb),
        .pcplus4_in(id_pcplus4),
        .rd_in(id_rd),.rs1_in(id_rs1),.rs2_in(id_rs2),
        .rs1_out(ex_rs1),.rs2_out(ex_rs2),
        .alu_sel_out(ex_alu_sel),
        .wenb_out(ex_wenb),
        .rs2_imm_sel_out(ex_rs2_imm_sel),
        .load_enb_out(ex_load_enb),.jal_enb_out(ex_jal_enb),.branch_enb_out(ex_branch_enb),
        .lui_enb_out(ex_lui_enb),.auipc_wenb_out(ex_auipc_wenb),.sb_out(ex_sb),.sh_out(ex_sh),.sw_out(ex_sw),
        .rs1_data_out(ex_rs1_data),.rs2_data_out(ex_rs2_data),.imm_out(ex_imm),
        .pcplus4_out(ex_pcplus4),.rd_out(ex_rd),.stall(stall),.flush(flush),.store_enb_out(ex_store_enb)
    );
    forwarding_unit forwarding_unit(
        .ex_rs1(ex_rs1),.ex_rs2(ex_rs2),.id_rs1(id_rs1),.id_rs2(id_rs2),
        .mem_rd(mem_rd),.wb_rd(wb_rd),
        .mem_wenb(mem_store_enb),.wb_wenb(wb_wenb),.mem_wb(mem_wenb),
        .forward_a(forward_a),.forward_b(forward_b)
    );
    assign ex_rs1_forwarded = (forward_a == 2'b10) ? mem_alu_result : (forward_a == 2'b01) ? wb_data : ex_rs1_data;
    assign ex_rs2_forwarded = (forward_b == 2'b10) ? mem_alu_result : (forward_b == 2'b01) ? wb_data : ex_rs2_data;
    assign id_rs1_forwarded = (forward_a == 2'b11) ? wb_data : id_rs1_data;
    assign id_rs2_forwarded = (forward_b == 2'b11) ? wb_data : id_rs2_data;
    rs2orimm rs2orimm(
        .rs2(ex_rs2_forwarded),.imm(ex_imm),
        .select(ex_rs2_imm_sel),.dataB(ex_alu_data_B)
    );
    alu alu(
        .dataA(ex_rs1_forwarded),.dataB(ex_alu_data_B),
        .sel(ex_alu_sel),.out(ex_alu_result),
        .branch_taken(ex_branch_taken)
    );
    adder_for_auipc adder_for_auipc(
        .pc_for_auipc(ex_pcplus4),.imm_for_btype(ex_imm),
        .pc_plus_imm_for_auipc(ex_pc_plus_imm)
    );
    rs1_plus_imm rs1_plus_im(
        .rs1(ex_rs1_data),.imm_input(ex_imm),
        .rs1_plus_im(ex_rs1_plus_imm_for_jalr)
    );
    assign ex_pc_plus_imm_2 = ex_pc_plus_imm;
    mux_rs2 mux_rs2(
        .rs2(ex_rs2_forwarded),.sel_bit({ex_sb,ex_sh,ex_sw,1'b0}),
        .output_data_forstore(ex_store_data)
    );
    EX_MEM ex_mem(
        .clk(clk),
        .rst(rst),
        .wb_in(ex_wenb),
        .load_enb_in(ex_load_enb),
        .sb_in(ex_sb),
        .sh_in(ex_sh),
        .sw_in(ex_sw),.store_enb_in(ex_store_enb),
        .alu_result_in(ex_alu_result),.store_data_in(ex_store_data),
        .rd_in(ex_rd),.rs1_in(ex_rs1),.rs2_in(ex_rs2),
        .wb_out(mem_wenb),.load_enb_out(mem_load_enb),.sb_out(mem_sb),
        .sh_out(mem_sh),.sw_out(mem_sw),
        .alu_result_out(mem_alu_result),.store_data_out(mem_store_data),
        .rd_out(mem_rd),.flush(flush),.store_enb_out(mem_store_enb)
    );
    assign store_wenb = (mem_sb || mem_sw || mem_sh);
    data_mem data_mem(
        .clk(clk),.load_enb(mem_load_enb),.sb(mem_sb),.sh(mem_sh),.sw(mem_sw),
        .lb(1'b0),.lw(1'b0),.lh(1'b0),.lhu(1'b0),.lbu(1'b0),
        .address(mem_alu_result),.write_data(mem_store_data),
        .read_data(mem_read_data)
    );
    MEM_WB mem_wb(
        .clk(clk),
        .rst(rst),
        .load_enb_in(mem_load_enb),.wenb_in(mem_wenb),
        .jal_enb_in(ex_jal_enb), 
        .lui_enb_in(ex_lui_enb),
        .auipc_wenb_in(ex_auipc_wenb),
        .mem_data_in(mem_read_data),.alu_result_in(mem_alu_result),
        .pcplus4_in(ex_pcplus4),.rd_in(mem_rd),
        .load_enb_out(wb_load_enb),
        .jal_enb_out(wb_jal_enb),
        .lui_enb_out(wb_lui_enb),
        .auipc_wenb_out(wb_auipc_wenb),
        .mem_data_out(wb_mem_data),.alu_result_out(wb_alu_result),
        .pcplus4_out(wb_pcplus4),.rd_out(wb_rd),.wenb_out(wb_wenb)
    );
    priority_encoder_8to3 priority_encoder_8to3(
        .alu_result(1'b1),.load_enable(wb_load_enb),.jal_enb(wb_jal_enb),
        .enable_for_auipc(wb_auipc_wenb),.lui_enable(wb_lui_enb),
        .sel(wb_mux_sel)
    );
    mux8to1 mux8to1(
        .alu_result(wb_alu_result),.load_result(wb_mem_data),
        .pc_plus_4(wb_pcplus4),.pc_plus_imm(ex_pc_plus_imm),
        .imm_for_b_type(ex_imm),.sel(wb_mux_sel),.out(wb_data)
    );

endmodule