// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


//======================

void Vmain::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vmain::traceInit, &Vmain::traceFull, &Vmain::traceChg, this);
}
void Vmain::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vmain* t = (Vmain*)userthis;
    Vmain__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vmain::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vmain* t = (Vmain*)userthis;
    Vmain__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vmain::traceInitThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vmain::traceFullThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vmain::traceInitThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+1625,"imm_input", false,-1, 31,0);
        vcdp->declBus(c+1633,"reg_input", false,-1, 31,0);
        vcdp->declBit(c+1641,"select", false,-1);
        vcdp->declBus(c+1649,"out", false,-1, 31,0);
        vcdp->declBit(c+1657,"enable", false,-1);
        vcdp->declBit(c+1665,"mux_select", false,-1);
        vcdp->declBit(c+1673,"clk", false,-1);
        vcdp->declBit(c+1681,"rst", false,-1);
        vcdp->declBus(c+1625,"mux2to1 imm_input", false,-1, 31,0);
        vcdp->declBus(c+1633,"mux2to1 reg_input", false,-1, 31,0);
        vcdp->declBit(c+1641,"mux2to1 select", false,-1);
        vcdp->declBus(c+1649,"mux2to1 out", false,-1, 31,0);
        vcdp->declBit(c+1657,"prienc enable", false,-1);
        vcdp->declBit(c+1665,"prienc mux_select", false,-1);
        vcdp->declBit(c+1673,"top clk", false,-1);
        vcdp->declBit(c+1681,"top rst", false,-1);
        vcdp->declBus(c+1,"top if_instruction", false,-1, 31,0);
        vcdp->declBus(c+681,"top if_pcplus4", false,-1, 31,0);
        vcdp->declBus(c+681,"top if_pc_out", false,-1, 31,0);
        vcdp->declBus(c+9,"top ex_sel_bit_mux", false,-1, 1,0);
        vcdp->declBus(c+689,"top wb_sel_bit_mux", false,-1, 1,0);
        vcdp->declBus(c+697,"top mem_sel_bit_mux", false,-1, 1,0);
        vcdp->declBus(c+705,"top ex_pc_plus_imm", false,-1, 31,0);
        vcdp->declBus(c+705,"top ex_pc_plus_imm_2", false,-1, 31,0);
        vcdp->declBus(c+1689,"top ex_rs1_plus_imm_for_jalr", false,-1, 31,0);
        vcdp->declBus(c+713,"top id_instruction", false,-1, 31,0);
        vcdp->declBus(c+721,"top id_pcplus4", false,-1, 31,0);
        vcdp->declBit(c+17,"top stall", false,-1);
        vcdp->declBit(c+25,"top flush", false,-1);
        vcdp->declBit(c+729,"top mem_jal_enb", false,-1);
        vcdp->declBus(c+737,"top id_rs1", false,-1, 4,0);
        vcdp->declBus(c+745,"top id_rs2", false,-1, 4,0);
        vcdp->declBus(c+753,"top id_rd", false,-1, 4,0);
        vcdp->declBus(c+761,"top wb_rd", false,-1, 4,0);
        vcdp->declBus(c+769,"top ex_rd", false,-1, 4,0);
        vcdp->declBus(c+777,"top ex_rs1", false,-1, 4,0);
        vcdp->declBus(c+785,"top ex_rs2", false,-1, 4,0);
        vcdp->declBus(c+793,"top mem_rd", false,-1, 4,0);
        vcdp->declBus(c+33,"top id_rs1_data", false,-1, 31,0);
        vcdp->declBus(c+801,"top id_rs2_data", false,-1, 31,0);
        vcdp->declBus(c+41,"top id_imm", false,-1, 31,0);
        vcdp->declBus(c+49,"top id_alu_sel", false,-1, 3,0);
        vcdp->declBus(c+809,"top ex_alu_sel", false,-1, 3,0);
        vcdp->declBit(c+57,"top id_wenb", false,-1);
        vcdp->declBit(c+65,"top id_rs2_imm_sel", false,-1);
        vcdp->declBit(c+73,"top id_load_enb", false,-1);
        vcdp->declBit(c+81,"top id_jal_enb", false,-1);
        vcdp->declBit(c+89,"top id_branch_enb", false,-1);
        vcdp->declBit(c+97,"top id_lui_enb", false,-1);
        vcdp->declBit(c+105,"top id_auipc_wenb", false,-1);
        vcdp->declBit(c+113,"top id_sb", false,-1);
        vcdp->declBit(c+121,"top id_sw", false,-1);
        vcdp->declBit(c+129,"top id_sh", false,-1);
        vcdp->declBit(c+137,"top id_in_to_pr", false,-1);
        vcdp->declBit(c+145,"top id_addr", false,-1);
        vcdp->declBit(c+153,"top id_sub", false,-1);
        vcdp->declBit(c+161,"top id_sllr", false,-1);
        vcdp->declBit(c+169,"top id_sltr", false,-1);
        vcdp->declBit(c+177,"top id_sltur", false,-1);
        vcdp->declBit(c+185,"top id_xorr", false,-1);
        vcdp->declBit(c+193,"top id_srlr", false,-1);
        vcdp->declBit(c+201,"top id_srar", false,-1);
        vcdp->declBit(c+209,"top id_orr", false,-1);
        vcdp->declBit(c+217,"top id_andr", false,-1);
        vcdp->declBit(c+225,"top id_addi", false,-1);
        vcdp->declBit(c+233,"top id_addi2", false,-1);
        vcdp->declBit(c+241,"top id_slli", false,-1);
        vcdp->declBit(c+249,"top id_slti", false,-1);
        vcdp->declBit(c+257,"top id_sltui", false,-1);
        vcdp->declBit(c+265,"top id_xori", false,-1);
        vcdp->declBit(c+273,"top id_srli", false,-1);
        vcdp->declBit(c+281,"top id_srai", false,-1);
        vcdp->declBit(c+289,"top id_ori", false,-1);
        vcdp->declBit(c+297,"top id_andi", false,-1);
        vcdp->declBit(c+817,"top id_jal", false,-1);
        vcdp->declBit(c+305,"top id_jalr", false,-1);
        vcdp->declBit(c+313,"top id_beq", false,-1);
        vcdp->declBit(c+321,"top id_bne", false,-1);
        vcdp->declBit(c+329,"top id_blt", false,-1);
        vcdp->declBit(c+337,"top id_bge", false,-1);
        vcdp->declBit(c+345,"top id_bltu", false,-1);
        vcdp->declBit(c+353,"top id_bgeu", false,-1);
        vcdp->declBus(c+361,"top wb_data", false,-1, 31,0);
        vcdp->declBit(c+369,"top ex_branch_taken", false,-1);
        vcdp->declBit(c+825,"top ex_jal_enb", false,-1);
        vcdp->declBit(c+833,"top ex_wenb", false,-1);
        vcdp->declBit(c+841,"top ex_rs2_imm_sel", false,-1);
        vcdp->declBit(c+849,"top ex_branch_enb", false,-1);
        vcdp->declBit(c+857,"top ex_lui_enb", false,-1);
        vcdp->declBit(c+865,"top ex_auipc_wenb", false,-1);
        vcdp->declBit(c+873,"top ex_sb", false,-1);
        vcdp->declBit(c+881,"top ex_sh", false,-1);
        vcdp->declBit(c+889,"top ex_sw", false,-1);
        vcdp->declBus(c+377,"top ex_store_data", false,-1, 31,0);
        vcdp->declBus(c+385,"top ex_alu_result", false,-1, 31,0);
        vcdp->declBus(c+393,"top ex_alu_data_B", false,-1, 31,0);
        vcdp->declBus(c+897,"top ex_rs1_data", false,-1, 31,0);
        vcdp->declBus(c+905,"top ex_rs2_data", false,-1, 31,0);
        vcdp->declBus(c+913,"top ex_imm", false,-1, 31,0);
        vcdp->declBus(c+921,"top ex_pcplus4", false,-1, 31,0);
        vcdp->declBus(c+401,"top ex_rs1_forwarded", false,-1, 31,0);
        vcdp->declBus(c+409,"top ex_rs2_forwarded", false,-1, 31,0);
        vcdp->declBit(c+929,"top mem_store_enb", false,-1);
        vcdp->declBit(c+937,"top ex_store_enb", false,-1);
        vcdp->declBit(c+417,"top id_store_enb", false,-1);
        vcdp->declBit(c+945,"top wb_load_enb", false,-1);
        vcdp->declBit(c+953,"top wb_jal_enb", false,-1);
        vcdp->declBit(c+961,"top wb_lui_enb", false,-1);
        vcdp->declBit(c+969,"top wb_auipc_wenb", false,-1);
        vcdp->declBit(c+977,"top mem_wenb", false,-1);
        vcdp->declBit(c+985,"top mem_load_enb", false,-1);
        vcdp->declBit(c+993,"top mem_sb", false,-1);
        vcdp->declBit(c+1001,"top mem_sh", false,-1);
        vcdp->declBit(c+1009,"top mem_sw", false,-1);
        vcdp->declBus(c+425,"top forward_a", false,-1, 1,0);
        vcdp->declBus(c+433,"top forward_b", false,-1, 1,0);
        vcdp->declBus(c+1017,"top mem_alu_result", false,-1, 31,0);
        vcdp->declBus(c+1025,"top mem_store_data", false,-1, 31,0);
        vcdp->declBus(c+1697,"top mem_read_data", false,-1, 31,0);
        vcdp->declBus(c+1033,"top wb_mem_data", false,-1, 31,0);
        vcdp->declBus(c+1041,"top wb_alu_result", false,-1, 31,0);
        vcdp->declBus(c+1049,"top wb_pcplus4", false,-1, 31,0);
        vcdp->declBus(c+441,"top id_pc_plus_imm", false,-1, 31,0);
        vcdp->declBus(c+449,"top id_rs1_forwarded", false,-1, 31,0);
        vcdp->declBus(c+457,"top id_rs2_forwarded", false,-1, 31,0);
        vcdp->declBus(c+1057,"top mem_pc_plus_imm", false,-1, 31,0);
        vcdp->declBus(c+1065,"top wb_pc_plus_imm", false,-1, 31,0);
        vcdp->declBus(c+465,"top wb_mux_sel", false,-1, 2,0);
        vcdp->declBus(c+473,"top jal_jump_target", false,-1, 31,0);
        vcdp->declBus(c+721,"top jal_return_add", false,-1, 31,0);
        vcdp->declBus(c+1073,"top mem_jal_return_add", false,-1, 31,0);
        vcdp->declBus(c+1081,"top wb_jal_return_add", false,-1, 31,0);
        vcdp->declBit(c+481,"top flush_for_if", false,-1);
        vcdp->declBit(c+1089,"top alu_result_pri_enc", false,-1);
        vcdp->declBit(c+489,"top id_lb", false,-1);
        vcdp->declBit(c+497,"top id_lh", false,-1);
        vcdp->declBit(c+505,"top id_lhu", false,-1);
        vcdp->declBit(c+513,"top id_lbu", false,-1);
        vcdp->declBit(c+521,"top id_lw", false,-1);
        vcdp->declBus(c+529,"top id_rs1_plus_imm_for_jalr", false,-1, 31,0);
        vcdp->declBus(c+537,"top id_rs1_forwarded_for_jalr", false,-1, 31,0);
        vcdp->declBus(c+1097,"top forward_c", false,-1, 1,0);
        vcdp->declBus(c+1105,"top forward_d1", false,-1, 1,0);
        vcdp->declBus(c+1113,"top forward_d2", false,-1, 1,0);
        vcdp->declBus(c+1121,"top id_current_pc", false,-1, 31,0);
        vcdp->declBus(c+1705,"top ex_current_pc", false,-1, 31,0);
        vcdp->declBus(c+1129,"top if_current_pc", false,-1, 31,0);
        vcdp->declBus(c+1137,"top ex_jal_return_add", false,-1, 31,0);
        vcdp->declBit(c+1145,"top ex_lb", false,-1);
        vcdp->declBit(c+1153,"top ex_lh", false,-1);
        vcdp->declBit(c+1161,"top ex_lw", false,-1);
        vcdp->declBit(c+1169,"top ex_lbu", false,-1);
        vcdp->declBit(c+1177,"top ex_lhu", false,-1);
        vcdp->declBit(c+1185,"top ex_load_enb", false,-1);
        vcdp->declBit(c+1193,"top mem_lb", false,-1);
        vcdp->declBit(c+1201,"top mem_lh", false,-1);
        vcdp->declBit(c+1209,"top mem_lw", false,-1);
        vcdp->declBit(c+1217,"top mem_lbu", false,-1);
        vcdp->declBit(c+1225,"top mem_lhu", false,-1);
        vcdp->declBit(c+1233,"top wb_wenb", false,-1);
        vcdp->declBus(c+1241,"top pcplus4 pc", false,-1, 31,0);
        vcdp->declBus(c+681,"top pcplus4 pc_plus4", false,-1, 31,0);
        vcdp->declBit(c+1673,"top fetch clk", false,-1);
        vcdp->declBit(c+1681,"top fetch rst", false,-1);
        vcdp->declBus(c+9,"top fetch sel", false,-1, 1,0);
        vcdp->declBus(c+681,"top fetch pc_plus_4", false,-1, 31,0);
        vcdp->declBus(c+473,"top fetch pc_plus_imm", false,-1, 31,0);
        vcdp->declBus(c+705,"top fetch pc_plus_imm_2", false,-1, 31,0);
        vcdp->declBus(c+529,"top fetch rs1_plus_imm_for_jalr", false,-1, 31,0);
        vcdp->declBit(c+17,"top fetch stall", false,-1);
        vcdp->declBus(c+1,"top fetch instruction", false,-1, 31,0);
        vcdp->declBus(c+681,"top fetch pc_out", false,-1, 31,0);
        vcdp->declBus(c+1241,"top fetch pc", false,-1, 31,0);
        vcdp->declBus(c+545,"top fetch pc_next", false,-1, 31,0);
        vcdp->declBit(c+1673,"top fetch PC clk", false,-1);
        vcdp->declBit(c+1681,"top fetch PC rst", false,-1);
        vcdp->declBus(c+545,"top fetch PC pc_next", false,-1, 31,0);
        vcdp->declBit(c+553,"top fetch PC pc_write", false,-1);
        vcdp->declBus(c+1241,"top fetch PC pc_out", false,-1, 31,0);
        vcdp->declBus(c+1241,"top fetch IM addr", false,-1, 31,0);
        vcdp->declBus(c+1,"top fetch IM instruction", false,-1, 31,0);
        vcdp->declBus(c+9,"top fetch mux4 sel", false,-1, 1,0);
        vcdp->declBus(c+681,"top fetch mux4 pc_plus_4", false,-1, 31,0);
        vcdp->declBus(c+473,"top fetch mux4 pc_plus_imm", false,-1, 31,0);
        vcdp->declBus(c+705,"top fetch mux4 pc_plus_imm_2", false,-1, 31,0);
        vcdp->declBus(c+529,"top fetch mux4 rs1_plus_imm_for_jalr", false,-1, 31,0);
        vcdp->declBus(c+545,"top fetch mux4 out", false,-1, 31,0);
        vcdp->declBit(c+1673,"top if_id clk", false,-1);
        vcdp->declBit(c+1681,"top if_id rst", false,-1);
        vcdp->declBus(c+1,"top if_id instruction_in", false,-1, 31,0);
        vcdp->declBus(c+681,"top if_id pcplus4_in", false,-1, 31,0);
        vcdp->declBus(c+1241,"top if_id current_pc_in", false,-1, 31,0);
        vcdp->declBus(c+713,"top if_id instruction_out", false,-1, 31,0);
        vcdp->declBus(c+721,"top if_id pcplus4_out", false,-1, 31,0);
        vcdp->declBus(c+1129,"top if_id current_pc_out", false,-1, 31,0);
        vcdp->declBit(c+17,"top if_id stall", false,-1);
        vcdp->declBit(c+25,"top if_id flush", false,-1);
        vcdp->declBit(c+481,"top if_id flush_for_if", false,-1);
        vcdp->declBus(c+713,"top decoder instruction", false,-1, 31,0);
        vcdp->declBus(c+737,"top decoder rs1", false,-1, 4,0);
        vcdp->declBus(c+745,"top decoder rs2", false,-1, 4,0);
        vcdp->declBus(c+753,"top decoder rdi", false,-1, 4,0);
        vcdp->declBit(c+1673,"top regfile clk", false,-1);
        vcdp->declBit(c+1681,"top regfile reset", false,-1);
        vcdp->declBit(c+1233,"top regfile enable", false,-1);
        vcdp->declBus(c+361,"top regfile data_in", false,-1, 31,0);
        vcdp->declBus(c+737,"top regfile rs1", false,-1, 4,0);
        vcdp->declBus(c+745,"top regfile rs2", false,-1, 4,0);
        vcdp->declBus(c+761,"top regfile rd_select", false,-1, 4,0);
        vcdp->declBus(c+33,"top regfile data_out1", false,-1, 31,0);
        vcdp->declBus(c+801,"top regfile data_out2", false,-1, 31,0);
        vcdp->declArray(c+1249,"top regfile registers", false,-1, 1023,0);
        vcdp->declBus(c+1505,"top regfile i", false,-1, 31,0);
        vcdp->declBus(c+713,"top immediate_generator instruction", false,-1, 31,0);
        vcdp->declBus(c+41,"top immediate_generator imm", false,-1, 31,0);
        vcdp->declBus(c+561,"top immediate_generator sel", false,-1, 3,0);
        vcdp->declBus(c+713,"top control_unit instruction", false,-1, 31,0);
        vcdp->declBit(c+369,"top control_unit branch_taken", false,-1);
        vcdp->declBus(c+1129,"top control_unit current_pc", false,-1, 31,0);
        vcdp->declBus(c+41,"top control_unit imm_for_jal", false,-1, 31,0);
        vcdp->declBus(c+721,"top control_unit pcplus4", false,-1, 31,0);
        vcdp->declBus(c+49,"top control_unit sel", false,-1, 3,0);
        vcdp->declBus(c+9,"top control_unit sel_bit_mux", false,-1, 1,0);
        vcdp->declBit(c+145,"top control_unit addr", false,-1);
        vcdp->declBit(c+153,"top control_unit sub", false,-1);
        vcdp->declBit(c+161,"top control_unit sllr", false,-1);
        vcdp->declBit(c+169,"top control_unit sltr", false,-1);
        vcdp->declBit(c+177,"top control_unit sltur", false,-1);
        vcdp->declBit(c+185,"top control_unit xorr", false,-1);
        vcdp->declBit(c+193,"top control_unit srlr", false,-1);
        vcdp->declBit(c+201,"top control_unit srar", false,-1);
        vcdp->declBit(c+209,"top control_unit orr", false,-1);
        vcdp->declBit(c+217,"top control_unit andr", false,-1);
        vcdp->declBit(c+225,"top control_unit addi", false,-1);
        vcdp->declBit(c+233,"top control_unit addi2", false,-1);
        vcdp->declBit(c+241,"top control_unit slli", false,-1);
        vcdp->declBit(c+249,"top control_unit slti", false,-1);
        vcdp->declBit(c+257,"top control_unit sltui", false,-1);
        vcdp->declBit(c+265,"top control_unit xori", false,-1);
        vcdp->declBit(c+273,"top control_unit srli", false,-1);
        vcdp->declBit(c+281,"top control_unit srai", false,-1);
        vcdp->declBit(c+289,"top control_unit ori", false,-1);
        vcdp->declBit(c+297,"top control_unit andi", false,-1);
        vcdp->declBit(c+121,"top control_unit sw", false,-1);
        vcdp->declBit(c+129,"top control_unit sh", false,-1);
        vcdp->declBit(c+113,"top control_unit sb", false,-1);
        vcdp->declBit(c+489,"top control_unit lb", false,-1);
        vcdp->declBit(c+497,"top control_unit lh", false,-1);
        vcdp->declBit(c+521,"top control_unit lw", false,-1);
        vcdp->declBit(c+513,"top control_unit lbu", false,-1);
        vcdp->declBit(c+505,"top control_unit lhu", false,-1);
        vcdp->declBit(c+817,"top control_unit jal", false,-1);
        vcdp->declBit(c+305,"top control_unit jalr", false,-1);
        vcdp->declBit(c+313,"top control_unit beq", false,-1);
        vcdp->declBit(c+321,"top control_unit bne", false,-1);
        vcdp->declBit(c+329,"top control_unit blt", false,-1);
        vcdp->declBit(c+337,"top control_unit bge", false,-1);
        vcdp->declBit(c+345,"top control_unit bltu", false,-1);
        vcdp->declBit(c+353,"top control_unit bgeu", false,-1);
        vcdp->declBit(c+569,"top control_unit add", false,-1);
        vcdp->declBit(c+577,"top control_unit sll", false,-1);
        vcdp->declBit(c+585,"top control_unit slt", false,-1);
        vcdp->declBit(c+593,"top control_unit sltu", false,-1);
        vcdp->declBit(c+601,"top control_unit xorrr", false,-1);
        vcdp->declBit(c+609,"top control_unit srl", false,-1);
        vcdp->declBit(c+617,"top control_unit sra", false,-1);
        vcdp->declBit(c+625,"top control_unit orrr", false,-1);
        vcdp->declBit(c+633,"top control_unit andd", false,-1);
        vcdp->declBit(c+641,"top control_unit out0", false,-1);
        vcdp->declBit(c+649,"top control_unit out1", false,-1);
        vcdp->declBit(c+657,"top control_unit out2", false,-1);
        vcdp->declBit(c+665,"top control_unit out3", false,-1);
        vcdp->declBit(c+57,"top control_unit wenb", false,-1);
        vcdp->declBit(c+65,"top control_unit rs2_imm_sel", false,-1);
        vcdp->declBus(c+473,"top control_unit jal_jump_target", false,-1, 31,0);
        vcdp->declBus(c+721,"top control_unit jal_return_add", false,-1, 31,0);
        vcdp->declBit(c+97,"top control_unit lui_enb", false,-1);
        vcdp->declBit(c+105,"top control_unit auipc_wenb", false,-1);
        vcdp->declBit(c+73,"top control_unit load_enb", false,-1);
        vcdp->declBit(c+81,"top control_unit jal_enb", false,-1);
        vcdp->declBit(c+89,"top control_unit branch_enb", false,-1);
        vcdp->declBit(c+137,"top control_unit in_to_pr", false,-1);
        vcdp->declBit(c+417,"top control_unit store_enb", false,-1);
        vcdp->declBus(c+1513,"top control_unit opcode", false,-1, 6,0);
        vcdp->declBus(c+1521,"top control_unit funct3", false,-1, 2,0);
        vcdp->declBus(c+1529,"top control_unit opcode_funct3", false,-1, 9,0);
        vcdp->declBit(c+1537,"top control_unit i0", false,-1);
        vcdp->declBit(c+1545,"top control_unit i1", false,-1);
        vcdp->declBit(c+1553,"top control_unit i2", false,-1);
        vcdp->declBit(c+1561,"top control_unit i3", false,-1);
        vcdp->declBit(c+1569,"top control_unit i4", false,-1);
        vcdp->declBit(c+1577,"top control_unit i5", false,-1);
        vcdp->declBit(c+1585,"top control_unit i6", false,-1);
        vcdp->declBit(c+1593,"top control_unit i7", false,-1);
        vcdp->declBit(c+1601,"top control_unit i8", false,-1);
        vcdp->declBus(c+1713,"top control_unit selected_bits", false,-1, 8,0);
        vcdp->declBus(c+737,"top hazard_detction id_rs1", false,-1, 4,0);
        vcdp->declBus(c+745,"top hazard_detction id_rs2", false,-1, 4,0);
        vcdp->declBus(c+769,"top hazard_detction ex_rd", false,-1, 4,0);
        vcdp->declBit(c+1185,"top hazard_detction ex_load_enb", false,-1);
        vcdp->declBit(c+369,"top hazard_detction branch_taken", false,-1);
        vcdp->declBit(c+817,"top hazard_detction jal", false,-1);
        vcdp->declBit(c+305,"top hazard_detction jalr", false,-1);
        vcdp->declBit(c+17,"top hazard_detction stall", false,-1);
        vcdp->declBit(c+25,"top hazard_detction flush", false,-1);
        vcdp->declBit(c+481,"top hazard_detction flush_for_if", false,-1);
        vcdp->declBit(c+1673,"top id_ex clk", false,-1);
        vcdp->declBit(c+1681,"top id_ex rst", false,-1);
        vcdp->declBus(c+49,"top id_ex alu_sel_in", false,-1, 3,0);
        vcdp->declBit(c+57,"top id_ex wenb_in", false,-1);
        vcdp->declBit(c+65,"top id_ex rs2_imm_sel_in", false,-1);
        vcdp->declBit(c+73,"top id_ex load_enb_in", false,-1);
        vcdp->declBit(c+81,"top id_ex jal_enb_in", false,-1);
        vcdp->declBit(c+89,"top id_ex branch_enb_in", false,-1);
        vcdp->declBit(c+97,"top id_ex lui_enb_in", false,-1);
        vcdp->declBit(c+105,"top id_ex auipc_wenb_in", false,-1);
        vcdp->declBit(c+113,"top id_ex sb_in", false,-1);
        vcdp->declBit(c+129,"top id_ex sh_in", false,-1);
        vcdp->declBit(c+121,"top id_ex sw_in", false,-1);
        vcdp->declBit(c+417,"top id_ex store_enb_in", false,-1);
        vcdp->declBus(c+449,"top id_ex rs1_data_in", false,-1, 31,0);
        vcdp->declBus(c+457,"top id_ex rs2_data_in", false,-1, 31,0);
        vcdp->declBus(c+41,"top id_ex imm_in", false,-1, 31,0);
        vcdp->declBus(c+721,"top id_ex pcplus4_in", false,-1, 31,0);
        vcdp->declBus(c+441,"top id_ex pc_plus_imm_in", false,-1, 31,0);
        vcdp->declBus(c+753,"top id_ex rd_in", false,-1, 4,0);
        vcdp->declBus(c+737,"top id_ex rs1_in", false,-1, 4,0);
        vcdp->declBus(c+745,"top id_ex rs2_in", false,-1, 4,0);
        vcdp->declBus(c+1129,"top id_ex current_pc_in", false,-1, 31,0);
        vcdp->declBus(c+721,"top id_ex jal_return_add_in", false,-1, 31,0);
        vcdp->declBit(c+489,"top id_ex lb_in", false,-1);
        vcdp->declBit(c+497,"top id_ex lh_in", false,-1);
        vcdp->declBit(c+521,"top id_ex lw_in", false,-1);
        vcdp->declBit(c+513,"top id_ex lbu_in", false,-1);
        vcdp->declBit(c+505,"top id_ex lhu_in", false,-1);
        vcdp->declBus(c+809,"top id_ex alu_sel_out", false,-1, 3,0);
        vcdp->declBit(c+833,"top id_ex wenb_out", false,-1);
        vcdp->declBit(c+841,"top id_ex rs2_imm_sel_out", false,-1);
        vcdp->declBit(c+1185,"top id_ex load_enb_out", false,-1);
        vcdp->declBit(c+825,"top id_ex jal_enb_out", false,-1);
        vcdp->declBit(c+849,"top id_ex branch_enb_out", false,-1);
        vcdp->declBit(c+857,"top id_ex lui_enb_out", false,-1);
        vcdp->declBit(c+865,"top id_ex auipc_wenb_out", false,-1);
        vcdp->declBit(c+873,"top id_ex sb_out", false,-1);
        vcdp->declBit(c+881,"top id_ex sh_out", false,-1);
        vcdp->declBit(c+889,"top id_ex sw_out", false,-1);
        vcdp->declBit(c+937,"top id_ex store_enb_out", false,-1);
        vcdp->declBus(c+897,"top id_ex rs1_data_out", false,-1, 31,0);
        vcdp->declBus(c+905,"top id_ex rs2_data_out", false,-1, 31,0);
        vcdp->declBus(c+913,"top id_ex imm_out", false,-1, 31,0);
        vcdp->declBus(c+921,"top id_ex pcplus4_out", false,-1, 31,0);
        vcdp->declBus(c+705,"top id_ex pc_plus_imm_out", false,-1, 31,0);
        vcdp->declBus(c+769,"top id_ex rd_out", false,-1, 4,0);
        vcdp->declBus(c+777,"top id_ex rs1_out", false,-1, 4,0);
        vcdp->declBus(c+785,"top id_ex rs2_out", false,-1, 4,0);
        vcdp->declBus(c+1121,"top id_ex current_pc_out", false,-1, 31,0);
        vcdp->declBus(c+1137,"top id_ex jal_return_add_out", false,-1, 31,0);
        vcdp->declBit(c+1145,"top id_ex lb_out", false,-1);
        vcdp->declBit(c+1153,"top id_ex lh_out", false,-1);
        vcdp->declBit(c+1161,"top id_ex lw_out", false,-1);
        vcdp->declBit(c+1169,"top id_ex lbu_out", false,-1);
        vcdp->declBit(c+1177,"top id_ex lhu_out", false,-1);
        vcdp->declBit(c+17,"top id_ex stall", false,-1);
        vcdp->declBit(c+25,"top id_ex flush", false,-1);
        vcdp->declBus(c+777,"top forwarding_unit ex_rs1", false,-1, 4,0);
        vcdp->declBus(c+785,"top forwarding_unit ex_rs2", false,-1, 4,0);
        vcdp->declBus(c+737,"top forwarding_unit id_rs1", false,-1, 4,0);
        vcdp->declBus(c+745,"top forwarding_unit id_rs2", false,-1, 4,0);
        vcdp->declBus(c+793,"top forwarding_unit mem_rd", false,-1, 4,0);
        vcdp->declBus(c+761,"top forwarding_unit wb_rd", false,-1, 4,0);
        vcdp->declBit(c+929,"top forwarding_unit mem_wenb", false,-1);
        vcdp->declBit(c+1233,"top forwarding_unit wb_wenb", false,-1);
        vcdp->declBit(c+1721,"top forwarding_unit clk", false,-1);
        vcdp->declBit(c+977,"top forwarding_unit mem_wb", false,-1);
        vcdp->declBus(c+425,"top forwarding_unit forward_a", false,-1, 1,0);
        vcdp->declBus(c+433,"top forwarding_unit forward_b", false,-1, 1,0);
        vcdp->declBus(c+1097,"top forwarding_unit forward_c", false,-1, 1,0);
        vcdp->declBus(c+1105,"top forwarding_unit forward_d1", false,-1, 1,0);
        vcdp->declBus(c+1113,"top forwarding_unit forward_d2", false,-1, 1,0);
        vcdp->declBus(c+409,"top rs2orimm rs2", false,-1, 31,0);
        vcdp->declBus(c+913,"top rs2orimm imm", false,-1, 31,0);
        vcdp->declBit(c+841,"top rs2orimm select", false,-1);
        vcdp->declBus(c+393,"top rs2orimm dataB", false,-1, 31,0);
        vcdp->declBus(c+401,"top alu dataA", false,-1, 31,0);
        vcdp->declBus(c+393,"top alu dataB", false,-1, 31,0);
        vcdp->declBus(c+809,"top alu sel", false,-1, 3,0);
        vcdp->declBus(c+385,"top alu out", false,-1, 31,0);
        vcdp->declBit(c+369,"top alu branch_taken", false,-1);
        vcdp->declBus(c+721,"top adder_for_auipc pc_for_auipc", false,-1, 31,0);
        vcdp->declBus(c+41,"top adder_for_auipc imm_for_btype", false,-1, 31,0);
        vcdp->declBus(c+441,"top adder_for_auipc pc_plus_imm_for_auipc", false,-1, 31,0);
        vcdp->declBus(c+537,"top rs1_plus_im rs1", false,-1, 31,0);
        vcdp->declBus(c+41,"top rs1_plus_im imm_input", false,-1, 31,0);
        vcdp->declBus(c+529,"top rs1_plus_im rs1_plus_im", false,-1, 31,0);
        vcdp->declBus(c+409,"top mux_rs2 rs2", false,-1, 31,0);
        vcdp->declBus(c+673,"top mux_rs2 sel_bit", false,-1, 3,0);
        vcdp->declBus(c+377,"top mux_rs2 output_data_forstore", false,-1, 31,0);
        vcdp->declBit(c+1673,"top ex_mem clk", false,-1);
        vcdp->declBit(c+1681,"top ex_mem rst", false,-1);
        vcdp->declBus(c+1137,"top ex_mem jal_return_add_in", false,-1, 31,0);
        vcdp->declBus(c+9,"top ex_mem sel_bit_mux_in", false,-1, 1,0);
        vcdp->declBit(c+833,"top ex_mem wb_in", false,-1);
        vcdp->declBit(c+1185,"top ex_mem load_enb_in", false,-1);
        vcdp->declBit(c+873,"top ex_mem sb_in", false,-1);
        vcdp->declBit(c+881,"top ex_mem sh_in", false,-1);
        vcdp->declBit(c+889,"top ex_mem sw_in", false,-1);
        vcdp->declBit(c+937,"top ex_mem store_enb_in", false,-1);
        vcdp->declBit(c+825,"top ex_mem jal_enb_in", false,-1);
        vcdp->declBus(c+385,"top ex_mem alu_result_in", false,-1, 31,0);
        vcdp->declBus(c+377,"top ex_mem store_data_in", false,-1, 31,0);
        vcdp->declBus(c+705,"top ex_mem pc_plus_imm_in", false,-1, 31,0);
        vcdp->declBus(c+769,"top ex_mem rd_in", false,-1, 4,0);
        vcdp->declBus(c+777,"top ex_mem rs1_in", false,-1, 4,0);
        vcdp->declBus(c+785,"top ex_mem rs2_in", false,-1, 4,0);
        vcdp->declBit(c+1145,"top ex_mem lb_in", false,-1);
        vcdp->declBit(c+1153,"top ex_mem lh_in", false,-1);
        vcdp->declBit(c+1161,"top ex_mem lw_in", false,-1);
        vcdp->declBit(c+1169,"top ex_mem lbu_in", false,-1);
        vcdp->declBit(c+1177,"top ex_mem lhu_in", false,-1);
        vcdp->declBit(c+977,"top ex_mem wb_out", false,-1);
        vcdp->declBit(c+985,"top ex_mem load_enb_out", false,-1);
        vcdp->declBit(c+993,"top ex_mem sb_out", false,-1);
        vcdp->declBit(c+1001,"top ex_mem sh_out", false,-1);
        vcdp->declBit(c+1009,"top ex_mem sw_out", false,-1);
        vcdp->declBit(c+929,"top ex_mem store_enb_out", false,-1);
        vcdp->declBit(c+729,"top ex_mem jal_enb_out", false,-1);
        vcdp->declBus(c+1017,"top ex_mem alu_result_out", false,-1, 31,0);
        vcdp->declBus(c+1025,"top ex_mem store_data_out", false,-1, 31,0);
        vcdp->declBus(c+1057,"top ex_mem pc_plus_imm_out", false,-1, 31,0);
        vcdp->declBus(c+793,"top ex_mem rd_out", false,-1, 4,0);
        vcdp->declBus(c+1609,"top ex_mem rs1_out", false,-1, 4,0);
        vcdp->declBus(c+1729,"top ex_mem rs2_out", false,-1, 4,0);
        vcdp->declBus(c+697,"top ex_mem sel_bit_mux_out", false,-1, 1,0);
        vcdp->declBus(c+1073,"top ex_mem jal_return_add_out", false,-1, 31,0);
        vcdp->declBit(c+1193,"top ex_mem lb_out", false,-1);
        vcdp->declBit(c+1201,"top ex_mem lh_out", false,-1);
        vcdp->declBit(c+1209,"top ex_mem lw_out", false,-1);
        vcdp->declBit(c+1217,"top ex_mem lbu_out", false,-1);
        vcdp->declBit(c+1225,"top ex_mem lhu_out", false,-1);
        vcdp->declBit(c+25,"top ex_mem flush", false,-1);
        vcdp->declBit(c+1673,"top data_mem clk", false,-1);
        vcdp->declBit(c+985,"top data_mem load_enb", false,-1);
        vcdp->declBit(c+993,"top data_mem sb", false,-1);
        vcdp->declBit(c+1001,"top data_mem sh", false,-1);
        vcdp->declBit(c+1009,"top data_mem sw", false,-1);
        vcdp->declBit(c+1193,"top data_mem lb", false,-1);
        vcdp->declBit(c+1201,"top data_mem lh", false,-1);
        vcdp->declBit(c+1209,"top data_mem lw", false,-1);
        vcdp->declBit(c+1217,"top data_mem lbu", false,-1);
        vcdp->declBit(c+1225,"top data_mem lhu", false,-1);
        vcdp->declBus(c+1017,"top data_mem address", false,-1, 31,0);
        vcdp->declBus(c+1025,"top data_mem write_data", false,-1, 31,0);
        vcdp->declBus(c+1697,"top data_mem read_data", false,-1, 31,0);
        vcdp->declBit(c+1673,"top mem_wb clk", false,-1);
        vcdp->declBit(c+1681,"top mem_wb rst", false,-1);
        vcdp->declBus(c+697,"top mem_wb sel_bit_mux_in", false,-1, 1,0);
        vcdp->declBus(c+1073,"top mem_wb jal_return_add_in", false,-1, 31,0);
        vcdp->declBit(c+977,"top mem_wb wenb_in", false,-1);
        vcdp->declBit(c+985,"top mem_wb load_enb_in", false,-1);
        vcdp->declBit(c+729,"top mem_wb jal_enb_in", false,-1);
        vcdp->declBit(c+857,"top mem_wb lui_enb_in", false,-1);
        vcdp->declBit(c+865,"top mem_wb auipc_wenb_in", false,-1);
        vcdp->declBus(c+1697,"top mem_wb mem_data_in", false,-1, 31,0);
        vcdp->declBus(c+1017,"top mem_wb alu_result_in", false,-1, 31,0);
        vcdp->declBus(c+921,"top mem_wb pcplus4_in", false,-1, 31,0);
        vcdp->declBus(c+1057,"top mem_wb pc_plus_imm_in", false,-1, 31,0);
        vcdp->declBus(c+793,"top mem_wb rd_in", false,-1, 4,0);
        vcdp->declBit(c+1233,"top mem_wb wenb_out", false,-1);
        vcdp->declBit(c+945,"top mem_wb load_enb_out", false,-1);
        vcdp->declBit(c+953,"top mem_wb jal_enb_out", false,-1);
        vcdp->declBit(c+961,"top mem_wb lui_enb_out", false,-1);
        vcdp->declBit(c+969,"top mem_wb auipc_wenb_out", false,-1);
        vcdp->declBus(c+1033,"top mem_wb mem_data_out", false,-1, 31,0);
        vcdp->declBus(c+1041,"top mem_wb alu_result_out", false,-1, 31,0);
        vcdp->declBus(c+1049,"top mem_wb pcplus4_out", false,-1, 31,0);
        vcdp->declBus(c+1065,"top mem_wb pc_plus_imm_out", false,-1, 31,0);
        vcdp->declBus(c+761,"top mem_wb rd_out", false,-1, 4,0);
        vcdp->declBus(c+689,"top mem_wb sel_bit_mux_out", false,-1, 1,0);
        vcdp->declBus(c+1081,"top mem_wb jal_return_add_out", false,-1, 31,0);
        vcdp->declBit(c+1089,"top priority_encoder_8to3 alu_result", false,-1);
        vcdp->declBit(c+945,"top priority_encoder_8to3 load_enable", false,-1);
        vcdp->declBit(c+953,"top priority_encoder_8to3 jal_enb", false,-1);
        vcdp->declBit(c+969,"top priority_encoder_8to3 enable_for_auipc", false,-1);
        vcdp->declBit(c+961,"top priority_encoder_8to3 lui_enable", false,-1);
        vcdp->declBus(c+465,"top priority_encoder_8to3 sel", false,-1, 2,0);
        vcdp->declBus(c+1617,"top priority_encoder_8to3 input_concat", false,-1, 4,0);
        vcdp->declBus(c+1041,"top mux8to1 alu_result", false,-1, 31,0);
        vcdp->declBus(c+1033,"top mux8to1 load_result", false,-1, 31,0);
        vcdp->declBus(c+1081,"top mux8to1 pc_plus_4", false,-1, 31,0);
        vcdp->declBus(c+1065,"top mux8to1 pc_plus_imm", false,-1, 31,0);
        vcdp->declBus(c+913,"top mux8to1 imm_for_b_type", false,-1, 31,0);
        vcdp->declBus(c+465,"top mux8to1 sel", false,-1, 2,0);
        vcdp->declBus(c+361,"top mux8to1 out", false,-1, 31,0);
    }
}

void Vmain::traceFullThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vmain* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((0x1000U >= (0x1fffU & 
                                         (vlTOPp->top__DOT__fetch__DOT__pc 
                                          >> 2U))) ? 
                            vlTOPp->top__DOT__fetch__DOT__IM__DOT__memory
                            [(0x1fffU & (vlTOPp->top__DOT__fetch__DOT__pc 
                                         >> 2U))] : 0U)),32);
        vcdp->fullBus(c+9,(vlTOPp->top__DOT__ex_sel_bit_mux),2);
        vcdp->fullBit(c+17,(vlTOPp->top__DOT__stall));
        vcdp->fullBit(c+25,(vlTOPp->top__DOT__flush));
        vcdp->fullBus(c+33,(vlTOPp->top__DOT__id_rs1_data),32);
        vcdp->fullBus(c+41,(vlTOPp->top__DOT__id_imm),32);
        vcdp->fullBus(c+49,(((((((((((IData)(vlTOPp->top__DOT__id_sub) 
                                     | (IData)(vlTOPp->top__DOT__control_unit__DOT__sra)) 
                                    | (IData)(vlTOPp->top__DOT__id_beq)) 
                                   | (IData)(vlTOPp->top__DOT__id_bne)) 
                                  | (IData)(vlTOPp->top__DOT__id_blt)) 
                                 | (IData)(vlTOPp->top__DOT__id_bge)) 
                                | (IData)(vlTOPp->top__DOT__id_bltu)) 
                               | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                              << 3U) | (((((((((((IData)(vlTOPp->top__DOT__id_xorr) 
                                                 | (IData)(vlTOPp->top__DOT__id_xori)) 
                                                | (IData)(vlTOPp->top__DOT__control_unit__DOT__orrr)) 
                                               | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                              | (IData)(vlTOPp->top__DOT__id_blt)) 
                                             | (IData)(vlTOPp->top__DOT__id_bge)) 
                                            | (IData)(vlTOPp->top__DOT__id_bltu)) 
                                           | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                                          | (IData)(vlTOPp->top__DOT__control_unit__DOT__srl)) 
                                         << 2U) | (
                                                   (((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__orrr) 
                                                           | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                                          | (IData)(vlTOPp->top__DOT__id_beq)) 
                                                         | (IData)(vlTOPp->top__DOT__id_bne)) 
                                                        | (IData)(vlTOPp->top__DOT__id_bltu)) 
                                                       | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                                                      | ((IData)(vlTOPp->top__DOT__id_sltr) 
                                                         | (IData)(vlTOPp->top__DOT__id_slti))) 
                                                     | (IData)(vlTOPp->top__DOT__control_unit__DOT__sltu)) 
                                                    << 1U) 
                                                   | ((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__sra) 
                                                            | (IData)(vlTOPp->top__DOT__id_bne)) 
                                                           | (IData)(vlTOPp->top__DOT__id_bge)) 
                                                          | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                                                         | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                                        | ((IData)(vlTOPp->top__DOT__id_sllr) 
                                                           | (IData)(vlTOPp->top__DOT__id_slli))) 
                                                       | (IData)(vlTOPp->top__DOT__control_unit__DOT__srl)) 
                                                      | (IData)(vlTOPp->top__DOT__control_unit__DOT__sltu)))))),4);
        vcdp->fullBit(c+57,((((((((((((((((((((((((
                                                   (((((((((IData)(vlTOPp->top__DOT__id_lw) 
                                                           | (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->top__DOT__id_instruction))) 
                                                          | (IData)(vlTOPp->top__DOT__id_lh)) 
                                                         | (IData)(vlTOPp->top__DOT__id_lb)) 
                                                        | (IData)(vlTOPp->top__DOT__id_addr)) 
                                                       | (IData)(vlTOPp->top__DOT__id_sub)) 
                                                      | (IData)(vlTOPp->top__DOT__id_srar)) 
                                                     | (IData)(vlTOPp->top__DOT__id_sllr)) 
                                                    | (IData)(vlTOPp->top__DOT__id_orr)) 
                                                   | (IData)(vlTOPp->top__DOT__id_andr)) 
                                                  | (IData)(vlTOPp->top__DOT__id_sltur)) 
                                                 | (IData)(vlTOPp->top__DOT__id_sltr)) 
                                                | (IData)(vlTOPp->top__DOT__id_srai)) 
                                               | (IData)(vlTOPp->top__DOT__id_xorr)) 
                                              | (IData)(vlTOPp->top__DOT__id_srlr)) 
                                             | (IData)(vlTOPp->top__DOT__id_andi)) 
                                            | (IData)(vlTOPp->top__DOT__id_auipc_wenb)) 
                                           | (IData)(vlTOPp->top__DOT__id_ori)) 
                                          | (IData)(vlTOPp->top__DOT__id_xori)) 
                                         | (IData)(vlTOPp->top__DOT__id_sltui)) 
                                        | (IData)(vlTOPp->top__DOT__id_srli)) 
                                       | (IData)(vlTOPp->top__DOT__id_slli)) 
                                      | (IData)(vlTOPp->top__DOT__id_addi)) 
                                     | (IData)(vlTOPp->top__DOT__id_slti)) 
                                    | (IData)(vlTOPp->top__DOT__id_sb)) 
                                   | (IData)(vlTOPp->top__DOT__id_sh)) 
                                  | (IData)(vlTOPp->top__DOT__id_sw)) 
                                 | (IData)(vlTOPp->top__DOT__id_lbu)) 
                                | (IData)(vlTOPp->top__DOT__id_lhu)) 
                               | (IData)(vlTOPp->top__DOT__id_jalr)) 
                              | (IData)(vlTOPp->top__DOT__id_lui_enb)) 
                             | (IData)(vlTOPp->top__DOT__id_addi2))));
        vcdp->fullBit(c+65,(((((((((((((((((((((((IData)(vlTOPp->top__DOT__id_lui_enb) 
                                                 | (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->top__DOT__id_instruction))) 
                                                | (IData)(vlTOPp->top__DOT__id_lb)) 
                                               | (IData)(vlTOPp->top__DOT__id_lh)) 
                                              | (IData)(vlTOPp->top__DOT__id_addi)) 
                                             | (IData)(vlTOPp->top__DOT__id_sh)) 
                                            | (IData)(vlTOPp->top__DOT__id_sb)) 
                                           | (IData)(vlTOPp->top__DOT__id_sw)) 
                                          | (IData)(vlTOPp->top__DOT__id_slli)) 
                                         | (IData)(vlTOPp->top__DOT__id_srai)) 
                                        | (IData)(vlTOPp->top__DOT__id_auipc_wenb)) 
                                       | (IData)(vlTOPp->top__DOT__id_ori)) 
                                      | (IData)(vlTOPp->top__DOT__id_andi)) 
                                     | (IData)(vlTOPp->top__DOT__id_srli)) 
                                    | (IData)(vlTOPp->top__DOT__id_xori)) 
                                   | (IData)(vlTOPp->top__DOT__id_sltui)) 
                                  | (IData)(vlTOPp->top__DOT__id_slti)) 
                                 | (IData)(vlTOPp->top__DOT__id_lbu)) 
                                | (IData)(vlTOPp->top__DOT__id_lhu)) 
                               | (IData)(vlTOPp->top__DOT__id_jalr)) 
                              | (IData)(vlTOPp->top__DOT__id_lw)) 
                             | (IData)(vlTOPp->top__DOT__id_addi2))));
        vcdp->fullBit(c+73,((((((IData)(vlTOPp->top__DOT__id_lb) 
                                | (IData)(vlTOPp->top__DOT__id_lh)) 
                               | (IData)(vlTOPp->top__DOT__id_lw)) 
                              | (IData)(vlTOPp->top__DOT__id_lbu)) 
                             | (IData)(vlTOPp->top__DOT__id_lhu))));
        vcdp->fullBit(c+81,(((0x6fU == (0x7fU & vlTOPp->top__DOT__id_instruction)) 
                             | (IData)(vlTOPp->top__DOT__id_jalr))));
        vcdp->fullBit(c+89,(((((((IData)(vlTOPp->top__DOT__id_beq) 
                                 | (IData)(vlTOPp->top__DOT__id_bne)) 
                                | (IData)(vlTOPp->top__DOT__id_blt)) 
                               | (IData)(vlTOPp->top__DOT__id_bge)) 
                              | (IData)(vlTOPp->top__DOT__id_bltu)) 
                             | (IData)(vlTOPp->top__DOT__id_bgeu))));
        vcdp->fullBit(c+97,(vlTOPp->top__DOT__id_lui_enb));
        vcdp->fullBit(c+105,(vlTOPp->top__DOT__id_auipc_wenb));
        vcdp->fullBit(c+113,(vlTOPp->top__DOT__id_sb));
        vcdp->fullBit(c+121,(vlTOPp->top__DOT__id_sw));
        vcdp->fullBit(c+129,(vlTOPp->top__DOT__id_sh));
        vcdp->fullBit(c+137,((1U & (~ (((0x6fU == (0x7fU 
                                                   & vlTOPp->top__DOT__id_instruction)) 
                                        | (IData)(vlTOPp->top__DOT__id_jalr)) 
                                       | (IData)(vlTOPp->top__DOT__ex_branch_taken))))));
        vcdp->fullBit(c+145,(vlTOPp->top__DOT__id_addr));
        vcdp->fullBit(c+153,(vlTOPp->top__DOT__id_sub));
        vcdp->fullBit(c+161,(vlTOPp->top__DOT__id_sllr));
        vcdp->fullBit(c+169,(vlTOPp->top__DOT__id_sltr));
        vcdp->fullBit(c+177,(vlTOPp->top__DOT__id_sltur));
        vcdp->fullBit(c+185,(vlTOPp->top__DOT__id_xorr));
        vcdp->fullBit(c+193,(vlTOPp->top__DOT__id_srlr));
        vcdp->fullBit(c+201,(vlTOPp->top__DOT__id_srar));
        vcdp->fullBit(c+209,(vlTOPp->top__DOT__id_orr));
        vcdp->fullBit(c+217,(vlTOPp->top__DOT__id_andr));
        vcdp->fullBit(c+225,(vlTOPp->top__DOT__id_addi));
        vcdp->fullBit(c+233,(vlTOPp->top__DOT__id_addi2));
        vcdp->fullBit(c+241,(vlTOPp->top__DOT__id_slli));
        vcdp->fullBit(c+249,(vlTOPp->top__DOT__id_slti));
        vcdp->fullBit(c+257,(vlTOPp->top__DOT__id_sltui));
        vcdp->fullBit(c+265,(vlTOPp->top__DOT__id_xori));
        vcdp->fullBit(c+273,(vlTOPp->top__DOT__id_srli));
        vcdp->fullBit(c+281,(vlTOPp->top__DOT__id_srai));
        vcdp->fullBit(c+289,(vlTOPp->top__DOT__id_ori));
        vcdp->fullBit(c+297,(vlTOPp->top__DOT__id_andi));
        vcdp->fullBit(c+305,(vlTOPp->top__DOT__id_jalr));
        vcdp->fullBit(c+313,(vlTOPp->top__DOT__id_beq));
        vcdp->fullBit(c+321,(vlTOPp->top__DOT__id_bne));
        vcdp->fullBit(c+329,(vlTOPp->top__DOT__id_blt));
        vcdp->fullBit(c+337,(vlTOPp->top__DOT__id_bge));
        vcdp->fullBit(c+345,(vlTOPp->top__DOT__id_bltu));
        vcdp->fullBit(c+353,(vlTOPp->top__DOT__id_bgeu));
        vcdp->fullBus(c+361,(vlTOPp->top__DOT__wb_data),32);
        vcdp->fullBit(c+369,(vlTOPp->top__DOT__ex_branch_taken));
        vcdp->fullBus(c+377,(((0U == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                               ? vlTOPp->top__DOT__ex_rs2_forwarded
                               : ((2U == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                                   ? (0xffU & vlTOPp->top__DOT__ex_rs2_forwarded)
                                   : ((4U == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                                       ? (0xffffU & vlTOPp->top__DOT__ex_rs2_forwarded)
                                       : 0U)))),32);
        vcdp->fullBus(c+385,(vlTOPp->top__DOT__ex_alu_result),32);
        vcdp->fullBus(c+393,(vlTOPp->top__DOT__ex_alu_data_B),32);
        vcdp->fullBus(c+401,(vlTOPp->top__DOT__ex_rs1_forwarded),32);
        vcdp->fullBus(c+409,(vlTOPp->top__DOT__ex_rs2_forwarded),32);
        vcdp->fullBit(c+417,((((IData)(vlTOPp->top__DOT__id_sb) 
                               | (IData)(vlTOPp->top__DOT__id_sh)) 
                              | (IData)(vlTOPp->top__DOT__id_sw))));
        vcdp->fullBus(c+425,(vlTOPp->top__DOT__forward_a),2);
        vcdp->fullBus(c+433,(vlTOPp->top__DOT__forward_b),2);
        vcdp->fullBus(c+441,((vlTOPp->top__DOT__id_pcplus4 
                              + vlTOPp->top__DOT__id_imm)),32);
        vcdp->fullBus(c+449,(((3U == ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                        & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                       & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                          == (0x1fU 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 0xfU))))
                                       ? 3U : 0U)) ? vlTOPp->top__DOT__wb_data
                               : vlTOPp->top__DOT__id_rs1_data)),32);
        vcdp->fullBus(c+457,(((3U == ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                        & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                       & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                          == (0x1fU 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 0x14U))))
                                       ? 3U : 0U)) ? vlTOPp->top__DOT__wb_data
                               : ((0U == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                   >> 0x14U)))
                                   ? 0U : vlTOPp->top__DOT__regfile__DOT__registers[
                                  (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                            >> 0x14U))]))),32);
        vcdp->fullBus(c+465,(vlTOPp->top__DOT__wb_mux_sel),3);
        vcdp->fullBus(c+473,((vlTOPp->top__DOT__if_current_pc 
                              + vlTOPp->top__DOT__id_imm)),32);
        vcdp->fullBit(c+481,(vlTOPp->top__DOT__flush_for_if));
        vcdp->fullBit(c+489,(vlTOPp->top__DOT__id_lb));
        vcdp->fullBit(c+497,(vlTOPp->top__DOT__id_lh));
        vcdp->fullBit(c+505,(vlTOPp->top__DOT__id_lhu));
        vcdp->fullBit(c+513,(vlTOPp->top__DOT__id_lbu));
        vcdp->fullBit(c+521,(vlTOPp->top__DOT__id_lw));
        vcdp->fullBus(c+529,((((2U == (((((0x1fU & 
                                           (vlTOPp->top__DOT__id_instruction 
                                            >> 0xfU)) 
                                          == (IData)(vlTOPp->top__DOT__wb_rd)) 
                                         & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                        & (IData)(vlTOPp->top__DOT__wb_wenb))
                                        ? 2U : 0U))
                                ? vlTOPp->top__DOT__wb_data
                                : vlTOPp->top__DOT__id_rs1_data) 
                              + vlTOPp->top__DOT__id_imm)),32);
        vcdp->fullBus(c+537,(((2U == (((((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                   >> 0xfU)) 
                                         == (IData)(vlTOPp->top__DOT__wb_rd)) 
                                        & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                       & (IData)(vlTOPp->top__DOT__wb_wenb))
                                       ? 2U : 0U)) ? vlTOPp->top__DOT__wb_data
                               : vlTOPp->top__DOT__id_rs1_data)),32);
        vcdp->fullBus(c+545,(((2U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                               ? ((1U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                   ? vlTOPp->top__DOT__ex_pc_plus_imm
                                   : (vlTOPp->top__DOT__if_current_pc 
                                      + vlTOPp->top__DOT__id_imm))
                               : ((1U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                   ? (((2U == (((((0x1fU 
                                                   & (vlTOPp->top__DOT__id_instruction 
                                                      >> 0xfU)) 
                                                  == (IData)(vlTOPp->top__DOT__wb_rd)) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                                & (IData)(vlTOPp->top__DOT__wb_wenb))
                                                ? 2U
                                                : 0U))
                                        ? vlTOPp->top__DOT__wb_data
                                        : vlTOPp->top__DOT__id_rs1_data) 
                                      + vlTOPp->top__DOT__id_imm)
                                   : ((IData)(4U) + vlTOPp->top__DOT__fetch__DOT__pc)))),32);
        vcdp->fullBit(c+553,((1U & (~ (IData)(vlTOPp->top__DOT__stall)))));
        vcdp->fullBus(c+561,(vlTOPp->top__DOT__immediate_generator__DOT__sel),4);
        vcdp->fullBit(c+569,(((IData)(vlTOPp->top__DOT__id_addr) 
                              | (IData)(vlTOPp->top__DOT__id_addi))));
        vcdp->fullBit(c+577,(((IData)(vlTOPp->top__DOT__id_sllr) 
                              | (IData)(vlTOPp->top__DOT__id_slli))));
        vcdp->fullBit(c+585,(((IData)(vlTOPp->top__DOT__id_sltr) 
                              | (IData)(vlTOPp->top__DOT__id_slti))));
        vcdp->fullBit(c+593,(vlTOPp->top__DOT__control_unit__DOT__sltu));
        vcdp->fullBit(c+601,(((IData)(vlTOPp->top__DOT__id_xorr) 
                              | (IData)(vlTOPp->top__DOT__id_xori))));
        vcdp->fullBit(c+609,(vlTOPp->top__DOT__control_unit__DOT__srl));
        vcdp->fullBit(c+617,(vlTOPp->top__DOT__control_unit__DOT__sra));
        vcdp->fullBit(c+625,(vlTOPp->top__DOT__control_unit__DOT__orrr));
        vcdp->fullBit(c+633,(vlTOPp->top__DOT__control_unit__DOT__andd));
        vcdp->fullBit(c+641,(((((((((IData)(vlTOPp->top__DOT__id_sub) 
                                    | (IData)(vlTOPp->top__DOT__control_unit__DOT__sra)) 
                                   | (IData)(vlTOPp->top__DOT__id_beq)) 
                                  | (IData)(vlTOPp->top__DOT__id_bne)) 
                                 | (IData)(vlTOPp->top__DOT__id_blt)) 
                                | (IData)(vlTOPp->top__DOT__id_bge)) 
                               | (IData)(vlTOPp->top__DOT__id_bltu)) 
                              | (IData)(vlTOPp->top__DOT__id_bgeu))));
        vcdp->fullBit(c+649,((((((((((IData)(vlTOPp->top__DOT__id_xorr) 
                                     | (IData)(vlTOPp->top__DOT__id_xori)) 
                                    | (IData)(vlTOPp->top__DOT__control_unit__DOT__orrr)) 
                                   | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                  | (IData)(vlTOPp->top__DOT__id_blt)) 
                                 | (IData)(vlTOPp->top__DOT__id_bge)) 
                                | (IData)(vlTOPp->top__DOT__id_bltu)) 
                               | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                              | (IData)(vlTOPp->top__DOT__control_unit__DOT__srl))));
        vcdp->fullBit(c+657,(((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__orrr) 
                                    | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                   | (IData)(vlTOPp->top__DOT__id_beq)) 
                                  | (IData)(vlTOPp->top__DOT__id_bne)) 
                                 | (IData)(vlTOPp->top__DOT__id_bltu)) 
                                | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                               | ((IData)(vlTOPp->top__DOT__id_sltr) 
                                  | (IData)(vlTOPp->top__DOT__id_slti))) 
                              | (IData)(vlTOPp->top__DOT__control_unit__DOT__sltu))));
        vcdp->fullBit(c+665,(((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__sra) 
                                    | (IData)(vlTOPp->top__DOT__id_bne)) 
                                   | (IData)(vlTOPp->top__DOT__id_bge)) 
                                  | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                                 | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                | ((IData)(vlTOPp->top__DOT__id_sllr) 
                                   | (IData)(vlTOPp->top__DOT__id_slli))) 
                               | (IData)(vlTOPp->top__DOT__control_unit__DOT__srl)) 
                              | (IData)(vlTOPp->top__DOT__control_unit__DOT__sltu))));
        vcdp->fullBus(c+673,(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit),4);
        vcdp->fullBus(c+681,(((IData)(4U) + vlTOPp->top__DOT__fetch__DOT__pc)),32);
        vcdp->fullBus(c+689,(vlTOPp->top__DOT__wb_sel_bit_mux),2);
        vcdp->fullBus(c+697,(vlTOPp->top__DOT__mem_sel_bit_mux),2);
        vcdp->fullBus(c+705,(vlTOPp->top__DOT__ex_pc_plus_imm),32);
        vcdp->fullBus(c+713,(vlTOPp->top__DOT__id_instruction),32);
        vcdp->fullBus(c+721,(vlTOPp->top__DOT__id_pcplus4),32);
        vcdp->fullBit(c+729,(vlTOPp->top__DOT__mem_jal_enb));
        vcdp->fullBus(c+737,((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                       >> 0xfU))),5);
        vcdp->fullBus(c+745,((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                       >> 0x14U))),5);
        vcdp->fullBus(c+753,((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                       >> 7U))),5);
        vcdp->fullBus(c+761,(vlTOPp->top__DOT__wb_rd),5);
        vcdp->fullBus(c+769,(vlTOPp->top__DOT__ex_rd),5);
        vcdp->fullBus(c+777,(vlTOPp->top__DOT__ex_rs1),5);
        vcdp->fullBus(c+785,(vlTOPp->top__DOT__ex_rs2),5);
        vcdp->fullBus(c+793,(vlTOPp->top__DOT__mem_rd),5);
        vcdp->fullBus(c+801,(((0U == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                               >> 0x14U)))
                               ? 0U : vlTOPp->top__DOT__regfile__DOT__registers[
                              (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                        >> 0x14U))])),32);
        vcdp->fullBus(c+809,(vlTOPp->top__DOT__ex_alu_sel),4);
        vcdp->fullBit(c+817,((0x6fU == (0x7fU & vlTOPp->top__DOT__id_instruction))));
        vcdp->fullBit(c+825,(vlTOPp->top__DOT__ex_jal_enb));
        vcdp->fullBit(c+833,(vlTOPp->top__DOT__ex_wenb));
        vcdp->fullBit(c+841,(vlTOPp->top__DOT__ex_rs2_imm_sel));
        vcdp->fullBit(c+849,(vlTOPp->top__DOT__ex_branch_enb));
        vcdp->fullBit(c+857,(vlTOPp->top__DOT__ex_lui_enb));
        vcdp->fullBit(c+865,(vlTOPp->top__DOT__ex_auipc_wenb));
        vcdp->fullBit(c+873,(vlTOPp->top__DOT__ex_sb));
        vcdp->fullBit(c+881,(vlTOPp->top__DOT__ex_sh));
        vcdp->fullBit(c+889,(vlTOPp->top__DOT__ex_sw));
        vcdp->fullBus(c+897,(vlTOPp->top__DOT__ex_rs1_data),32);
        vcdp->fullBus(c+905,(vlTOPp->top__DOT__ex_rs2_data),32);
        vcdp->fullBus(c+913,(vlTOPp->top__DOT__ex_imm),32);
        vcdp->fullBus(c+921,(vlTOPp->top__DOT__ex_pcplus4),32);
        vcdp->fullBit(c+929,(vlTOPp->top__DOT__mem_store_enb));
        vcdp->fullBit(c+937,(vlTOPp->top__DOT__ex_store_enb));
        vcdp->fullBit(c+945,(vlTOPp->top__DOT__wb_load_enb));
        vcdp->fullBit(c+953,(vlTOPp->top__DOT__wb_jal_enb));
        vcdp->fullBit(c+961,(vlTOPp->top__DOT__wb_lui_enb));
        vcdp->fullBit(c+969,(vlTOPp->top__DOT__wb_auipc_wenb));
        vcdp->fullBit(c+977,(vlTOPp->top__DOT__mem_wenb));
        vcdp->fullBit(c+985,(vlTOPp->top__DOT__mem_load_enb));
        vcdp->fullBit(c+993,(vlTOPp->top__DOT__mem_sb));
        vcdp->fullBit(c+1001,(vlTOPp->top__DOT__mem_sh));
        vcdp->fullBit(c+1009,(vlTOPp->top__DOT__mem_sw));
        vcdp->fullBus(c+1017,(vlTOPp->top__DOT__mem_alu_result),32);
        vcdp->fullBus(c+1025,(vlTOPp->top__DOT__mem_store_data),32);
        vcdp->fullBus(c+1033,(vlTOPp->top__DOT__wb_mem_data),32);
        vcdp->fullBus(c+1041,(vlTOPp->top__DOT__wb_alu_result),32);
        vcdp->fullBus(c+1049,(vlTOPp->top__DOT__wb_pcplus4),32);
        vcdp->fullBus(c+1057,(vlTOPp->top__DOT__mem_pc_plus_imm),32);
        vcdp->fullBus(c+1065,(vlTOPp->top__DOT__wb_pc_plus_imm),32);
        vcdp->fullBus(c+1073,(vlTOPp->top__DOT__mem_jal_return_add),32);
        vcdp->fullBus(c+1081,(vlTOPp->top__DOT__wb_jal_return_add),32);
        vcdp->fullBit(c+1089,((1U & (~ ((((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                                          | (IData)(vlTOPp->top__DOT__wb_auipc_wenb)) 
                                         | (IData)(vlTOPp->top__DOT__wb_jal_enb)) 
                                        | (IData)(vlTOPp->top__DOT__wb_load_enb))))));
        vcdp->fullBus(c+1097,((((((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xfU)) 
                                  == (IData)(vlTOPp->top__DOT__wb_rd)) 
                                 & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                & (IData)(vlTOPp->top__DOT__wb_wenb))
                                ? 2U : 0U)),2);
        vcdp->fullBus(c+1105,(((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                 & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                   == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                >> 0xfU))))
                                ? 3U : 0U)),2);
        vcdp->fullBus(c+1113,(((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                 & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                   == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                >> 0x14U))))
                                ? 3U : 0U)),2);
        vcdp->fullBus(c+1121,(vlTOPp->top__DOT__id_current_pc),32);
        vcdp->fullBus(c+1129,(vlTOPp->top__DOT__if_current_pc),32);
        vcdp->fullBus(c+1137,(vlTOPp->top__DOT__ex_jal_return_add),32);
        vcdp->fullBit(c+1145,(vlTOPp->top__DOT__ex_lb));
        vcdp->fullBit(c+1153,(vlTOPp->top__DOT__ex_lh));
        vcdp->fullBit(c+1161,(vlTOPp->top__DOT__ex_lw));
        vcdp->fullBit(c+1169,(vlTOPp->top__DOT__ex_lbu));
        vcdp->fullBit(c+1177,(vlTOPp->top__DOT__ex_lhu));
        vcdp->fullBit(c+1185,(vlTOPp->top__DOT__ex_load_enb));
        vcdp->fullBit(c+1193,(vlTOPp->top__DOT__mem_lb));
        vcdp->fullBit(c+1201,(vlTOPp->top__DOT__mem_lh));
        vcdp->fullBit(c+1209,(vlTOPp->top__DOT__mem_lw));
        vcdp->fullBit(c+1217,(vlTOPp->top__DOT__mem_lbu));
        vcdp->fullBit(c+1225,(vlTOPp->top__DOT__mem_lhu));
        vcdp->fullBit(c+1233,(vlTOPp->top__DOT__wb_wenb));
        vcdp->fullBus(c+1241,(vlTOPp->top__DOT__fetch__DOT__pc),32);
        vcdp->fullArray(c+1249,(vlTOPp->top__DOT__regfile__DOT__registers),1024);
        vcdp->fullBus(c+1505,(vlTOPp->top__DOT__regfile__DOT__i),32);
        vcdp->fullBus(c+1513,((0x7fU & vlTOPp->top__DOT__id_instruction)),7);
        vcdp->fullBus(c+1521,((7U & (vlTOPp->top__DOT__id_instruction 
                                     >> 0xcU))),3);
        vcdp->fullBus(c+1529,(((0x3f8U & (vlTOPp->top__DOT__id_instruction 
                                          << 3U)) | 
                               (7U & (vlTOPp->top__DOT__id_instruction 
                                      >> 0xcU)))),10);
        vcdp->fullBit(c+1537,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 2U))));
        vcdp->fullBit(c+1545,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 3U))));
        vcdp->fullBit(c+1553,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 4U))));
        vcdp->fullBit(c+1561,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 5U))));
        vcdp->fullBit(c+1569,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 6U))));
        vcdp->fullBit(c+1577,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 0xcU))));
        vcdp->fullBit(c+1585,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 0xdU))));
        vcdp->fullBit(c+1593,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 0xeU))));
        vcdp->fullBit(c+1601,((1U & (vlTOPp->top__DOT__id_instruction 
                                     >> 0x1eU))));
        vcdp->fullBus(c+1609,(vlTOPp->top__DOT__ex_mem__DOT__rs1_out),5);
        vcdp->fullBus(c+1617,((((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                                << 4U) | (((IData)(vlTOPp->top__DOT__wb_auipc_wenb) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->top__DOT__wb_jal_enb) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->top__DOT__wb_load_enb) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ 
                                                    ((((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                                                       | (IData)(vlTOPp->top__DOT__wb_auipc_wenb)) 
                                                      | (IData)(vlTOPp->top__DOT__wb_jal_enb)) 
                                                     | (IData)(vlTOPp->top__DOT__wb_load_enb))))))))),5);
        vcdp->fullBus(c+1625,(vlTOPp->imm_input),32);
        vcdp->fullBus(c+1633,(vlTOPp->reg_input),32);
        vcdp->fullBit(c+1641,(vlTOPp->select));
        vcdp->fullBus(c+1649,(vlTOPp->out),32);
        vcdp->fullBit(c+1657,(vlTOPp->enable));
        vcdp->fullBit(c+1665,(vlTOPp->mux_select));
        vcdp->fullBit(c+1673,(vlTOPp->clk));
        vcdp->fullBit(c+1681,(vlTOPp->rst));
        vcdp->fullBus(c+1689,(vlTOPp->top__DOT__ex_rs1_plus_imm_for_jalr),32);
        vcdp->fullBus(c+1697,(0U),32);
        vcdp->fullBus(c+1705,(vlTOPp->top__DOT__ex_current_pc),32);
        vcdp->fullBus(c+1713,(vlTOPp->top__DOT__control_unit__DOT__selected_bits),9);
        vcdp->fullBit(c+1721,(vlTOPp->top__DOT__forwarding_unit__DOT__clk));
        vcdp->fullBus(c+1729,(vlTOPp->top__DOT__ex_mem__DOT__rs2_out),5);
    }
}
