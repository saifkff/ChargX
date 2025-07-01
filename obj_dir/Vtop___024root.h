// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(id_rs1,4,0);
        VL_OUT8(id_rs2,4,0);
        VL_OUT8(id_rd,4,0);
        VL_OUT8(wb_rd,4,0);
        VL_OUT8(stall,0,0);
        VL_OUT8(flush,0,0);
        VL_OUT8(forward_a,1,0);
        VL_OUT8(forward_b,1,0);
        VL_OUT8(rvfi_o_valid_0,0,0);
        VL_OUT8(rvfi_o_rs1_addr_0,4,0);
        VL_OUT8(rvfi_o_rs2_addr_0,4,0);
        VL_OUT8(rvfi_o_rd_addr_0,4,0);
        VL_OUT8(rvfi_o_mem_wmask_0,3,0);
        CData/*1:0*/ top__DOT__ex_sel_bit_mux;
        CData/*1:0*/ top__DOT__wb_sel_bit_mux;
        CData/*1:0*/ top__DOT__mem_sel_bit_mux;
        CData/*0:0*/ top__DOT__mem_jal_enb;
        CData/*4:0*/ top__DOT__ex_rd;
        CData/*4:0*/ top__DOT__ex_rs1;
        CData/*4:0*/ top__DOT__ex_rs2;
        CData/*4:0*/ top__DOT__mem_rd;
        CData/*3:0*/ top__DOT__ex_alu_sel;
        CData/*0:0*/ top__DOT__id_jal_enb;
        CData/*0:0*/ top__DOT__id_branch_enb;
        CData/*0:0*/ top__DOT__id_lui_enb;
        CData/*0:0*/ top__DOT__id_auipc_wenb;
        CData/*0:0*/ top__DOT__id_sb;
        CData/*0:0*/ top__DOT__id_sw;
        CData/*0:0*/ top__DOT__id_sh;
        CData/*0:0*/ top__DOT__id_addr;
        CData/*0:0*/ top__DOT__id_sub;
        CData/*0:0*/ top__DOT__id_sllr;
        CData/*0:0*/ top__DOT__id_sltr;
        CData/*0:0*/ top__DOT__id_sltur;
        CData/*0:0*/ top__DOT__id_xorr;
        CData/*0:0*/ top__DOT__id_srlr;
        CData/*0:0*/ top__DOT__id_srar;
        CData/*0:0*/ top__DOT__id_orr;
        CData/*0:0*/ top__DOT__id_andr;
        CData/*0:0*/ top__DOT__id_addi;
        CData/*0:0*/ top__DOT__id_addi2;
        CData/*0:0*/ top__DOT__id_slli;
        CData/*0:0*/ top__DOT__id_slti;
        CData/*0:0*/ top__DOT__id_sltui;
        CData/*0:0*/ top__DOT__id_xori;
        CData/*0:0*/ top__DOT__id_srli;
        CData/*0:0*/ top__DOT__id_srai;
        CData/*0:0*/ top__DOT__id_ori;
        CData/*0:0*/ top__DOT__id_andi;
        CData/*0:0*/ top__DOT__id_jalr;
        CData/*0:0*/ top__DOT__id_bne;
        CData/*0:0*/ top__DOT__id_blt;
        CData/*0:0*/ top__DOT__id_bge;
        CData/*0:0*/ top__DOT__id_bltu;
        CData/*0:0*/ top__DOT__id_bgeu;
        CData/*0:0*/ top__DOT__ex_branch_taken;
        CData/*0:0*/ top__DOT__ex_jal_enb;
        CData/*0:0*/ top__DOT__ex_wenb;
        CData/*0:0*/ top__DOT__ex_rs2_imm_sel;
        CData/*0:0*/ top__DOT__ex_branch_enb;
        CData/*0:0*/ top__DOT__ex_lui_enb;
        CData/*0:0*/ top__DOT__ex_auipc_wenb;
    };
    struct {
        CData/*0:0*/ top__DOT__ex_sb;
        CData/*0:0*/ top__DOT__ex_sh;
        CData/*0:0*/ top__DOT__ex_sw;
        CData/*0:0*/ top__DOT__mem_store_enb;
        CData/*0:0*/ top__DOT__ex_store_enb;
        CData/*0:0*/ top__DOT__wb_load_enb;
        CData/*0:0*/ top__DOT__wb_jal_enb;
        CData/*0:0*/ top__DOT__wb_lui_enb;
        CData/*0:0*/ top__DOT__wb_auipc_wenb;
        CData/*0:0*/ top__DOT__mem_wenb;
        CData/*0:0*/ top__DOT__mem_load_enb;
        CData/*0:0*/ top__DOT__mem_sb;
        CData/*0:0*/ top__DOT__mem_sh;
        CData/*0:0*/ top__DOT__mem_sw;
        CData/*2:0*/ top__DOT__pri_enc_sel;
        CData/*0:0*/ top__DOT__flush_for_if;
        CData/*0:0*/ top__DOT__id_lb;
        CData/*0:0*/ top__DOT__id_lh;
        CData/*0:0*/ top__DOT__id_lhu;
        CData/*0:0*/ top__DOT__id_lbu;
        CData/*0:0*/ top__DOT__id_lw;
        CData/*1:0*/ top__DOT__forward_c;
        CData/*0:0*/ top__DOT__ex_lb;
        CData/*0:0*/ top__DOT__ex_lh;
        CData/*0:0*/ top__DOT__ex_lw;
        CData/*0:0*/ top__DOT__ex_lbu;
        CData/*0:0*/ top__DOT__ex_lhu;
        CData/*0:0*/ top__DOT__ex_load_enb;
        CData/*0:0*/ top__DOT__mem_lb;
        CData/*0:0*/ top__DOT__mem_lh;
        CData/*0:0*/ top__DOT__mem_lw;
        CData/*0:0*/ top__DOT__mem_lbu;
        CData/*0:0*/ top__DOT__mem_lhu;
        CData/*0:0*/ top__DOT__wb_wenb;
        CData/*4:0*/ top__DOT__mem_rs1;
        CData/*4:0*/ top__DOT__mem_rs2;
        CData/*0:0*/ top__DOT__mem_auipc_wenb;
        CData/*0:0*/ top__DOT__mem_lui_enb;
        CData/*3:0*/ top__DOT____Vcellinp__mux_rs2__sel_bit;
        CData/*3:0*/ top__DOT__immediate_generator__DOT__sel;
        CData/*0:0*/ top__DOT__control_unit__DOT__orrr;
        CData/*0:0*/ top__DOT__control_unit__DOT__andd;
        CData/*0:0*/ top__DOT__control_unit__DOT__sltu;
        CData/*0:0*/ top__DOT__control_unit__DOT__srl;
        CData/*0:0*/ top__DOT__control_unit__DOT__sra;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39;
        CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40;
        CData/*7:0*/ top__DOT__data_mem__DOT____Vlvbound_he4250159__0;
        CData/*7:0*/ top__DOT__data_mem__DOT____Vlvbound_he4250159__1;
        CData/*7:0*/ top__DOT__data_mem__DOT____Vlvbound_h2a021f05__0;
        CData/*7:0*/ top__DOT__data_mem__DOT____Vlvbound_he4250159__2;
        CData/*7:0*/ top__DOT__data_mem__DOT____Vlvbound_h2a021f05__1;
        CData/*7:0*/ top__DOT__data_mem__DOT____Vlvbound_h2a00ff9d__0;
        CData/*7:0*/ top__DOT__data_mem__DOT____Vlvbound_h2a05cf58__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
    };
    struct {
        SData/*8:0*/ top__DOT__control_unit__DOT__selected_bits;
        VL_OUT(if_instruction,31,0);
        VL_OUT(if_pc_out,31,0);
        VL_OUT(id_instruction,31,0);
        VL_OUT(id_rs1_data,31,0);
        VL_OUT(id_rs2_data,31,0);
        VL_OUT(ex_alu_result,31,0);
        VL_OUT(mem_read_data,31,0);
        VL_OUT(wb_data,31,0);
        VL_OUT(rvfi_o_insn_0,31,0);
        VL_OUT(rvfi_o_rs1_rdata_0,31,0);
        VL_OUT(rvfi_o_rs2_rdata_0,31,0);
        VL_OUT(rvfi_o_rd_wdata_0,31,0);
        VL_OUT(rvfi_o_pc_rdata_0,31,0);
        VL_OUT(rvfi_o_pc_wdata_0,31,0);
        VL_OUT(rvfi_o_mem_addr_0,31,0);
        VL_OUT(rvfi_o_mem_rdata_0,31,0);
        VL_OUT(rvfi_o_mem_wdata_0,31,0);
        IData/*31:0*/ top__DOT__ex_pc_plus_imm;
        IData/*31:0*/ top__DOT__ex_rs1_plus_imm_for_jalr;
        IData/*31:0*/ top__DOT__id_pcplus4;
        IData/*31:0*/ top__DOT__id_imm;
        IData/*31:0*/ top__DOT__ex_alu_data_B;
        IData/*31:0*/ top__DOT__ex_rs1_data;
        IData/*31:0*/ top__DOT__ex_rs2_data;
        IData/*31:0*/ top__DOT__ex_imm;
        IData/*31:0*/ top__DOT__ex_pcplus4;
        IData/*31:0*/ top__DOT__ex_rs1_forwarded;
        IData/*31:0*/ top__DOT__ex_rs2_forwarded;
        IData/*31:0*/ top__DOT__mem_alu_result;
        IData/*31:0*/ top__DOT__mem_store_data;
        IData/*31:0*/ top__DOT__wb_mem_data;
        IData/*31:0*/ top__DOT__wb_alu_result;
        IData/*31:0*/ top__DOT__wb_pcplus4;
        IData/*31:0*/ top__DOT__mem_pc_plus_imm;
        IData/*31:0*/ top__DOT__wb_pc_plus_imm;
        IData/*31:0*/ top__DOT__mem_jal_return_add;
        IData/*31:0*/ top__DOT__wb_jal_return_add;
        IData/*31:0*/ top__DOT__id_current_pc;
        IData/*31:0*/ top__DOT__ex_current_pc;
        IData/*31:0*/ top__DOT__if_current_pc;
        IData/*31:0*/ top__DOT__ex_jal_return_add;
        IData/*31:0*/ top__DOT__fetch__DOT__pc;
        IData/*31:0*/ top__DOT__regfile__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4097> top__DOT__fetch__DOT__IM__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__regfile__DOT__registers;
        VlUnpacked<CData/*7:0*/, 4097> top__DOT__data_mem__DOT__memory;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
