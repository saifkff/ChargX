/* verilator lint_off PINMISSING */
/* verilator lint_off NULLPORT */
module core #(
    parameter IMEM = "imem.hex",
    parameter string DMEM = "dmem.hex"
) (
    input wire clk,rst,
    output wire rvfi_o_valid_0,
    output wire [31:0] rvfi_o_insn_0,
    output wire [4:0] rvfi_o_rs1_addr_0,rvfi_o_rs2_addr_0,
    output wire [31:0] rvfi_o_rs1_rdata_0,rvfi_o_rs2_rdata_0,
    output wire [4:0] rvfi_o_rd_addr_0,
    output wire [31:0] rvfi_o_rd_wdata_0, rvfi_o_pc_rdata_0,
    output wire [31:0] rvfi_o_pc_wdata_0,rvfi_o_mem_addr_0,
    output wire [3:0] rvfi_o_mem_wmask_0,
    output wire [31:0] rvfi_o_mem_rdata_0,rvfi_o_mem_wdata_0
);
    wire [31:0] if_instruction,if_pc_out,id_instruction;
    wire [4:0] id_rs1, id_rs2, id_rd,wb_rd;
    wire [31:0] id_rs1_data, id_rs2_data,ex_alu_result,mem_read_data;
    wire [31:0] wb_data;
    wire stall,flush;
    wire [1:0] forward_a,forward_b;
    wire [31:0] if_pcplus4;
    wire [1:0] ex_sel_bit_mux,wb_sel_bit_mux,mem_sel_bit_mux;
    wire [31:0] ex_pc_plus_imm,ex_pc_plus_imm_2,ex_rs1_plus_imm_for_jalr;
    wire [31:0] id_pcplus4;
    wire mem_jal_enb;
    wire [4:0] ex_rd,ex_rs1,ex_rs2,mem_rd;
    wire [31:0] id_imm;
    wire [3:0] id_alu_sel,ex_alu_sel;
    wire id_wenb,id_rs2_imm_sel,id_load_enb,id_jal_enb,id_branch_enb;
    wire id_lui_enb,id_auipc_wenb,id_sb,id_sw,id_sh;
    wire id_in_to_pr;
    wire id_addr, id_sub, id_sllr, id_sltr, id_sltur, id_xorr, id_srlr, id_srar, id_orr, id_andr;
    wire id_addi, id_addi2, id_slli, id_slti, id_sltui, id_xori, id_srli, id_srai, id_ori, id_andi;
    wire id_jal, id_jalr, id_beq, id_bne, id_blt, id_bge, id_bltu, id_bgeu;
    wire ex_branch_taken,ex_jal_enb,ex_wenb,ex_rs2_imm_sel,ex_branch_enb,ex_lui_enb,ex_auipc_wenb,ex_sb,ex_sh,ex_sw;
    wire [31:0] ex_store_data,ex_alu_data_B,ex_rs1_data,ex_rs2_data,ex_imm,ex_pcplus4,ex_rs1_forwarded,ex_rs2_forwarded;
    wire mem_store_enb,ex_store_enb,id_store_enb,wb_load_enb,wb_jal_enb,wb_lui_enb,wb_auipc_wenb,mem_wenb,mem_load_enb,mem_sb,mem_sh,mem_sw;
    wire [31:0] mem_alu_result,mem_store_data,wb_mem_data,wb_alu_result;
    wire [31:0] wb_pcplus4,id_pc_plus_imm,id_rs1_forwarded,id_rs2_forwarded,mem_pc_plus_imm,wb_pc_plus_imm;
    wire [2:0] pri_enc_sel;
    wire [31:0] jal_jump_target,jal_return_add,mem_jal_return_add,wb_jal_return_add;
    wire flush_for_if,alu_result_pri_enc,id_lb,id_lh,id_lhu,id_lbu,id_lw;
    wire [31:0] id_rs1_plus_imm_for_jalr,id_rs1_forwarded_for_jalr ;
    wire [1:0] forward_c,forward_d1,forward_d2 ;
    wire [31:0] id_current_pc,ex_current_pc,if_current_pc,ex_jal_return_add ;
    wire ex_lb, ex_lh, ex_lw, ex_lbu, ex_lhu, ex_load_enb;
    wire mem_lb, mem_lh, mem_lw, mem_lbu, mem_lhu, wb_wenb;
    wire [4:0] mem_rs1, mem_rs2 ;
    wire [31:0] id_auipc_pc_plus_imm;
    wire mem_auipc_wenb, mem_lui_enb;
    wire if_id_ins_valid_pin,id_ex_ins_valid_pin,ex_mem_ins_valid_pin,mem_wb_ins_valid_pin;
    wire [3:0] id_wmask, ex_wmask, mem_wmask,wmask_final;
    wire id_we, ex_we, mem_we;
    wire [4:0] rs1_final,rs2_final;
    wire [31:0] ex_instruction,instruction_final ;
    wire [31:0] rs1_data_final,rs2_data_final ;
    wire [31:0] current_pc_final,if_pc_w,mem_current_pc,id_pc_w,ex_pc_w,pc_w_final,store_data_final ;

    pc_plus_4 pcplus4(
        .pc(fetch.PC.pc_out),
        .pc_plus4(if_pcplus4)
    );
    fetch #(
        .FILE_LINK(IMEM)
    ) fetch (
        .clk(clk),
        .rst(rst),
        .instruction(if_instruction),
        .pc_out(if_pc_out),
        .sel(ex_sel_bit_mux),
        .pc_plus_4(if_pcplus4),
        .pc_plus_imm(jal_jump_target),
        .pc_plus_imm_2(ex_pc_plus_imm_2),
        .rs1_plus_imm_for_jalr(id_rs1_plus_imm_for_jalr),
        .stall(stall),
        .pc_next(if_pc_w)
    );
    IF_ID if_id(
        .clk(clk),
        .rst(rst),
        .instruction_in(if_instruction),
        .pcplus4_in(if_pcplus4),
        .instruction_out(id_instruction),
        .pcplus4_out(id_pcplus4),
        .stall(stall),
        .flush(flush),
        .flush_for_if(flush_for_if),
        .current_pc_in(fetch.PC.pc_out),
        .current_pc_out(id_current_pc),
        .pc_w_in(if_pc_w),
        .pc_w_out(id_pc_w)
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
        .clk(clk), .rst(rst),
        .valid_pin(if_id_ins_valid_pin),
        .instruction(id_instruction),
        .branch_taken(ex_branch_taken),
        .sel(id_alu_sel),
        .sel_bit_mux(ex_sel_bit_mux),
        .addr(id_addr), .sub(id_sub), .sllr(id_sllr), .sltr(id_sltr), .sltur(id_sltur),
        .xorr(id_xorr), .srlr(id_srlr), .srar(id_srar), .orr(id_orr), .andr(id_andr),
        .addi(id_addi), .addi2(id_addi2), .slli(id_slli), .slti(id_slti), .sltui(id_sltui),
        .xori(id_xori), .srli(id_srli), .srai(id_srai), .ori(id_ori), .andi(id_andi),
        .sw(id_sw), .sh(id_sh), .sb(id_sb), .lb(id_lb), .lh(id_lh), .lw(id_lw), .lbu(id_lbu), .lhu(id_lhu),
        .jal(id_jal), .jalr(id_jalr),
        .beq(id_beq), .bne(id_bne), .blt(id_blt), .bge(id_bge), .bltu(id_bltu), .bgeu(id_bgeu),
        .wenb(id_wenb),
        .rs2_imm_sel(id_rs2_imm_sel),
        .lui_enb(id_lui_enb),
        .auipc_wenb(id_auipc_wenb),
        .load_enb(id_load_enb),
        .jal_enb(id_jal_enb),
        .branch_enb(id_branch_enb),
        .in_to_pr(id_in_to_pr),.store_enb(id_store_enb),
        .jal_jump_target(jal_jump_target),
        .current_pc(id_current_pc),
        .imm_for_jal(id_imm),
        .jal_return_add(jal_return_add),
        .pcplus4(id_pcplus4),
        .pcplusimm(id_pc_plus_imm),
        .we(id_we),
        .wmask(id_wmask)
    );
    hazard_detction hazard_detction(
        .id_rs1(id_rs1),
        .id_rs2(id_rs2),.ex_rd(ex_rd),
        .ex_load_enb(ex_load_enb),
        .branch_taken(ex_branch_taken),
        .jal_enb(id_jal_enb),
        .stall(stall),
        .flush(flush),
        .flush_for_if(flush_for_if)
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
        .pcplus4_in(id_pcplus4),.pc_plus_imm_in(id_pc_plus_imm),
        .rd_in(id_rd),.rs1_in(id_rs1),.rs2_in(id_rs2),
        .rs1_out(ex_rs1),.rs2_out(ex_rs2),
        .alu_sel_out(ex_alu_sel),
        .wenb_out(ex_wenb),
        .rs2_imm_sel_out(ex_rs2_imm_sel),
        .load_enb_out(ex_load_enb),.jal_enb_out(ex_jal_enb),.branch_enb_out(ex_branch_enb),
        .lui_enb_out(ex_lui_enb),.auipc_wenb_out(ex_auipc_wenb),.sb_out(ex_sb),.sh_out(ex_sh),.sw_out(ex_sw),
        .rs1_data_out(ex_rs1_data),.rs2_data_out(ex_rs2_data),.imm_out(ex_imm),
        .pcplus4_out(ex_pcplus4),.pc_plus_imm_out(ex_pc_plus_imm),.rd_out(ex_rd),.stall(stall),.flush(flush),.store_enb_out(ex_store_enb),
        .current_pc_in(id_current_pc),
        .current_pc_out(ex_current_pc),
        .jal_return_add_in(jal_return_add),
        .jal_return_add_out(ex_jal_return_add),
        .lb_in(id_lb), .lh_in(id_lh), .lw_in(id_lw),
        .lhu_in(id_lhu), .lbu_in(id_lbu),
        .lb_out(ex_lb), .lh_out(ex_lh), .lw_out(ex_lw),
        .lbu_out(ex_lbu), .lhu_out(ex_lhu),
        .ins_valid_pin_in(if_id_ins_valid_pin),.ins_valid_pin_out(id_ex_ins_valid_pin),
        .we_in(id_we), .wmask_in(id_wmask),
        .we_out(ex_we), .wmask_out(ex_wmask),
        .instruction_in(id_instruction), .instruction_out(ex_instruction),
        .pc_w_in(id_pc_w),.pc_w_out(ex_pc_w)
    );
    forwarding_unit forwarding_unit(
        .ex_rs1(ex_rs1),.ex_rs2(ex_rs2),.id_rs1(id_rs1),.id_rs2(id_rs2),
        .mem_rd(mem_rd),.wb_rd(wb_rd),
        .mem_wenb(mem_store_enb),.wb_wenb(wb_wenb),.mem_wb(mem_wenb),
        .forward_a(forward_a),.forward_b(forward_b),.forward_c(forward_c),
        .forward_d1(forward_d1),.forward_d2(forward_d2)
    );
    assign ex_rs1_forwarded = (forward_a == 2'b10) ? mem_alu_result : (forward_a == 2'b01) ? wb_data : ex_rs1_data;
    assign ex_rs2_forwarded = (forward_b == 2'b10) ? mem_alu_result : (forward_b == 2'b01) ? wb_data : ex_rs2_data;
    assign id_rs1_forwarded = (forward_d1 == 2'b11) ? wb_data : id_rs1_data;
    assign id_rs2_forwarded = (forward_d2 == 2'b11) ? wb_data : id_rs2_data;
    assign id_rs1_forwarded_for_jalr = (forward_c == 2'b10) ? mem_alu_result :
                                  (forward_c == 2'b01) ? wb_data : id_rs1_data;
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
        .pc_for_auipc(id_pcplus4),.imm_for_btype(id_imm),
        .pc_plus_imm_for_auipc(id_auipc_pc_plus_imm)
    );
    rs1_plus_imm rs1_plus_im(
        .rs1(id_rs1_forwarded_for_jalr),.imm_input(id_imm),
        .rs1_plus_im(id_rs1_plus_imm_for_jalr)
    );
    assign ex_pc_plus_imm_2 = ex_pc_plus_imm;
    mux_rs2 mux_rs2(
        .rs2(ex_rs2_forwarded),.sel_bit({ex_sw,ex_sh,ex_sb,1'b0}),
        .output_data_forstore(ex_store_data)
    );
    EX_MEM ex_mem(
        .clk(clk),
        .rst(rst),
        .wb_in(ex_wenb),.jal_enb_in(ex_jal_enb),.jal_enb_out(mem_jal_enb),
        .load_enb_in(ex_load_enb),
        .sb_in(ex_sb),.pc_plus_imm_in(ex_pc_plus_imm),.pc_plus_imm_out(mem_pc_plus_imm),
        .sh_in(ex_sh),.sel_bit_mux_in(ex_sel_bit_mux),.sel_bit_mux_out(mem_sel_bit_mux),
        .sw_in(ex_sw),.store_enb_in(ex_store_enb),
        .alu_result_in(ex_alu_result),.store_data_in(ex_store_data),
        .rd_in(ex_rd),.rs1_in(ex_rs1),.rs2_in(ex_rs2),
        .wb_out(mem_wenb),.load_enb_out(mem_load_enb),.sb_out(mem_sb),
        .sh_out(mem_sh),.sw_out(mem_sw),
        .alu_result_out(mem_alu_result),.store_data_out(mem_store_data),
        .rd_out(mem_rd),.flush(flush),.store_enb_out(mem_store_enb),
        .jal_return_add_in(ex_jal_return_add),
        .jal_return_add_out(mem_jal_return_add),
        .lb_in(ex_lb), .lh_in(ex_lh), .lw_in(ex_lw),
        .lbu_in(ex_lbu), .lhu_in(ex_lhu),
        .lb_out(mem_lb), .lh_out(mem_lh), .lw_out(mem_lw),
        .lbu_out(mem_lbu), .lhu_out(mem_lhu),
        .rs1_out(mem_rs1), .rs2_out(mem_rs2),
        .auipc_wenb_in(ex_auipc_wenb), .auipc_wenb_out(mem_auipc_wenb),
        .lui_enb_in(ex_lui_enb), .lui_enb_out(mem_lui_enb),
        .ins_valid_pin_in(id_ex_ins_valid_pin),.ins_valid_pin_out(ex_mem_ins_valid_pin),
        .we_in(ex_we), .wmask_in(ex_wmask),
        .we_out(mem_we), .wmask_out(mem_wmask),
        .current_pc_in(ex_current_pc),.current_pc_out(mem_current_pc)
    );
    /* data_mem data_mem(
        .clk(clk),.load_enb(mem_load_enb),.sb(mem_sb),.sh(mem_sh),.sw(mem_sw),
        .lb(mem_lb),.lw(mem_lw),.lh(mem_lh),.lhu(mem_lhu),.lbu(mem_lbu),
        .address(mem_alu_result),.write_data(mem_store_data),
        .read_data(mem_read_data)
    ); */
    MEM_WB mem_wb(
        .clk(clk),
        .rst(rst),
        .load_enb_in(mem_load_enb),.wenb_in(mem_wenb),
        .jal_enb_in(mem_jal_enb), .pc_plus_imm_in(mem_pc_plus_imm),.pc_plus_imm_out(wb_pc_plus_imm),
        .lui_enb_in(mem_lui_enb),.sel_bit_mux_in(mem_sel_bit_mux),.sel_bit_mux_out(wb_sel_bit_mux),
        .auipc_wenb_in(mem_auipc_wenb),
        .mem_data_in(mem_read_data),.alu_result_in(mem_alu_result),
        .pcplus4_in(ex_pcplus4),.rd_in(mem_rd),
        .load_enb_out(wb_load_enb),
        .jal_enb_out(wb_jal_enb),
        .lui_enb_out(wb_lui_enb),
        .auipc_wenb_out(wb_auipc_wenb),
        .mem_data_out(wb_mem_data),.alu_result_out(wb_alu_result),
        .pcplus4_out(wb_pcplus4),.rd_out(wb_rd),.wenb_out(wb_wenb),
        .jal_return_add_in(mem_jal_return_add),
        .jal_return_add_out(wb_jal_return_add),
        .ins_valid_pin_in(ex_mem_ins_valid_pin),.ins_valid_pin_out(mem_wb_ins_valid_pin)
    );
    priority_encoder_8to3 priority_encoder_8to3(
        .alu_result(alu_result_pri_enc),.load_enable(wb_load_enb),.jal_enb(wb_jal_enb),
        .enable_for_auipc(wb_auipc_wenb),.lui_enable(wb_lui_enb),
        .sel(pri_enc_sel)
    );
    assign alu_result_pri_enc = ~(wb_lui_enb | wb_auipc_wenb | wb_jal_enb | wb_load_enb);
    mux8to1 mux8to1(
        .alu_result(wb_alu_result),.load_result(wb_mem_data),
        .pc_plus_4(wb_jal_return_add),.pc_plus_imm(wb_pc_plus_imm),
        .imm_for_b_type(ex_imm),.sel(pri_enc_sel),.out(wb_data)
    );

    sram_top #(
        .IFILE_IN(DMEM)
    ) data_mem(
        .clk_i(clk),
        .rst_i(rst),
        .csb_i(1'b1),
        .addr_i(mem_alu_result[12:0]),
        .wdata_i(mem_store_data),
        .wmask_i(mem_wmask),
        .we_i(mem_we),
        .rdata_o(mem_read_data)
    );
    delayRegister delayRegister(
        .clk(clk), .rst(rst),
        .wmask_in(mem_wmask),
        .wmask_out(wmask_final),
        .rs1_in(mem_rs1), .rs2_in(mem_rs2),
        .rs1_out(rs1_final), .rs2_out(rs2_final),
        .instruction_in(ex_instruction), .instruction_out(instruction_final),
        .rs1_data_in(ex_rs1_forwarded),.rs2_data_in(ex_rs2_forwarded),
        .rs1_data_out(rs1_data_final), .rs2_data_out(rs2_data_final),
        .current_pc_in(mem_current_pc),.current_pc_out(current_pc_final),
        .pc_w_in(ex_pc_w),.pc_w_out(pc_w_final),
        .store_data_in(mem_store_data),.store_data_out(store_data_final)
    );
    Tracer Tracer(
        .rvfi_i_bool(mem_wb_ins_valid_pin),
        .rvfi_i_uint4(wmask_final),
        .rvfi_i_uint5_0(rs1_final),
        .rvfi_i_uint5_1(rs2_final),
        .rvfi_i_uint5_2(wb_rd),
        .rvfi_i_uint32_0(instruction_final),
        .rvfi_i_uint32_1(rs1_data_final),
        .rvfi_i_uint32_2(rs2_data_final),
        .rvfi_i_uint32_3(wb_data),
        .rvfi_i_uint32_4(current_pc_final),
        .rvfi_i_uint32_5(pc_w_final),
        .rvfi_i_uint32_6(wb_alu_result),
        .rvfi_i_uint32_7(wb_mem_data),
        .rvfi_i_uint32_8(store_data_final),
        .rvfi_o_valid_0(rvfi_o_valid_0),
        .rvfi_o_insn_0(rvfi_o_insn_0),
        .rvfi_o_rs1_addr_0(rvfi_o_rs1_addr_0),
        .rvfi_o_rs2_addr_0(rvfi_o_rs2_addr_0),
        .rvfi_o_rs1_rdata_0(rvfi_o_rs1_rdata_0),
        .rvfi_o_rs2_rdata_0(rvfi_o_rs2_rdata_0),
        .rvfi_o_rd_addr_0(rvfi_o_rd_addr_0),
        .rvfi_o_rd_wdata_0(rvfi_o_rd_wdata_0),
        .rvfi_o_pc_rdata_0(rvfi_o_pc_rdata_0),
        .rvfi_o_pc_wdata_0(rvfi_o_pc_wdata_0),
        .rvfi_o_mem_addr_0(rvfi_o_mem_addr_0),
        .rvfi_o_mem_wmask_0(rvfi_o_mem_wmask_0),
        .rvfi_o_mem_rdata_0(rvfi_o_mem_rdata_0),
        .rvfi_o_mem_wdata_0(rvfi_o_mem_wdata_0)
    );

endmodule