// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(rvfi_o_valid_0,0,0);
        VL_OUT8(rvfi_o_rs1_addr_0,4,0);
        VL_OUT8(rvfi_o_rs2_addr_0,4,0);
        VL_OUT8(rvfi_o_rd_addr_0,4,0);
        VL_OUT8(rvfi_o_mem_wmask_0,3,0);
        CData/*4:0*/ core__DOT__wb_rd;
        CData/*0:0*/ core__DOT__stall;
        CData/*0:0*/ core__DOT__flush;
        CData/*1:0*/ core__DOT__forward_a;
        CData/*1:0*/ core__DOT__forward_b;
        CData/*1:0*/ core__DOT__ex_sel_bit_mux;
        CData/*1:0*/ core__DOT__wb_sel_bit_mux;
        CData/*1:0*/ core__DOT__mem_sel_bit_mux;
        CData/*0:0*/ core__DOT__mem_jal_enb;
        CData/*4:0*/ core__DOT__ex_rd;
        CData/*4:0*/ core__DOT__ex_rs1;
        CData/*4:0*/ core__DOT__ex_rs2;
        CData/*4:0*/ core__DOT__mem_rd;
        CData/*3:0*/ core__DOT__ex_alu_sel;
        CData/*0:0*/ core__DOT__id_jal_enb;
        CData/*0:0*/ core__DOT__id_branch_enb;
        CData/*0:0*/ core__DOT__id_lui_enb;
        CData/*0:0*/ core__DOT__id_auipc_wenb;
        CData/*0:0*/ core__DOT__id_sb;
        CData/*0:0*/ core__DOT__id_sw;
        CData/*0:0*/ core__DOT__id_sh;
        CData/*0:0*/ core__DOT__id_addr;
        CData/*0:0*/ core__DOT__id_sub;
        CData/*0:0*/ core__DOT__id_sllr;
        CData/*0:0*/ core__DOT__id_sltr;
        CData/*0:0*/ core__DOT__id_sltur;
        CData/*0:0*/ core__DOT__id_xorr;
        CData/*0:0*/ core__DOT__id_srlr;
        CData/*0:0*/ core__DOT__id_srar;
        CData/*0:0*/ core__DOT__id_orr;
        CData/*0:0*/ core__DOT__id_andr;
        CData/*0:0*/ core__DOT__id_addi;
        CData/*0:0*/ core__DOT__id_addi2;
        CData/*0:0*/ core__DOT__id_slli;
        CData/*0:0*/ core__DOT__id_slti;
        CData/*0:0*/ core__DOT__id_sltui;
        CData/*0:0*/ core__DOT__id_xori;
        CData/*0:0*/ core__DOT__id_srli;
        CData/*0:0*/ core__DOT__id_srai;
        CData/*0:0*/ core__DOT__id_ori;
        CData/*0:0*/ core__DOT__id_andi;
        CData/*0:0*/ core__DOT__id_jalr;
        CData/*0:0*/ core__DOT__id_bne;
        CData/*0:0*/ core__DOT__id_blt;
        CData/*0:0*/ core__DOT__id_bge;
        CData/*0:0*/ core__DOT__id_bltu;
        CData/*0:0*/ core__DOT__id_bgeu;
        CData/*0:0*/ core__DOT__ex_branch_taken;
        CData/*0:0*/ core__DOT__ex_jal_enb;
        CData/*0:0*/ core__DOT__ex_wenb;
        CData/*0:0*/ core__DOT__ex_rs2_imm_sel;
        CData/*0:0*/ core__DOT__ex_branch_enb;
        CData/*0:0*/ core__DOT__ex_lui_enb;
        CData/*0:0*/ core__DOT__ex_auipc_wenb;
        CData/*0:0*/ core__DOT__ex_sb;
        CData/*0:0*/ core__DOT__ex_sh;
        CData/*0:0*/ core__DOT__ex_sw;
    };
    struct {
        CData/*0:0*/ core__DOT__mem_store_enb;
        CData/*0:0*/ core__DOT__ex_store_enb;
        CData/*0:0*/ core__DOT__id_store_enb;
        CData/*0:0*/ core__DOT__wb_load_enb;
        CData/*0:0*/ core__DOT__wb_jal_enb;
        CData/*0:0*/ core__DOT__wb_lui_enb;
        CData/*0:0*/ core__DOT__wb_auipc_wenb;
        CData/*0:0*/ core__DOT__mem_wenb;
        CData/*0:0*/ core__DOT__mem_load_enb;
        CData/*0:0*/ core__DOT__mem_sb;
        CData/*0:0*/ core__DOT__mem_sh;
        CData/*0:0*/ core__DOT__mem_sw;
        CData/*2:0*/ core__DOT__pri_enc_sel;
        CData/*0:0*/ core__DOT__flush_for_if;
        CData/*0:0*/ core__DOT__id_lb;
        CData/*0:0*/ core__DOT__id_lh;
        CData/*0:0*/ core__DOT__id_lhu;
        CData/*0:0*/ core__DOT__id_lbu;
        CData/*0:0*/ core__DOT__id_lw;
        CData/*1:0*/ core__DOT__forward_c;
        CData/*0:0*/ core__DOT__ex_lb;
        CData/*0:0*/ core__DOT__ex_lh;
        CData/*0:0*/ core__DOT__ex_lw;
        CData/*0:0*/ core__DOT__ex_lbu;
        CData/*0:0*/ core__DOT__ex_lhu;
        CData/*0:0*/ core__DOT__ex_load_enb;
        CData/*0:0*/ core__DOT__mem_lb;
        CData/*0:0*/ core__DOT__mem_lh;
        CData/*0:0*/ core__DOT__mem_lw;
        CData/*0:0*/ core__DOT__mem_lbu;
        CData/*0:0*/ core__DOT__mem_lhu;
        CData/*0:0*/ core__DOT__wb_wenb;
        CData/*4:0*/ core__DOT__mem_rs1;
        CData/*4:0*/ core__DOT__mem_rs2;
        CData/*0:0*/ core__DOT__mem_auipc_wenb;
        CData/*0:0*/ core__DOT__mem_lui_enb;
        CData/*0:0*/ core__DOT__id_ex_ins_valid_pin;
        CData/*0:0*/ core__DOT__ex_mem_ins_valid_pin;
        CData/*0:0*/ core__DOT__mem_wb_ins_valid_pin;
        CData/*3:0*/ core__DOT__ex_wmask;
        CData/*3:0*/ core__DOT__mem_wmask;
        CData/*3:0*/ core__DOT__wmask_final;
        CData/*0:0*/ core__DOT__ex_we;
        CData/*0:0*/ core__DOT__mem_we;
        CData/*4:0*/ core__DOT__rs1_final;
        CData/*4:0*/ core__DOT__rs2_final;
        CData/*3:0*/ core__DOT____Vcellinp__mux_rs2__sel_bit;
        CData/*0:0*/ core__DOT__if_id__DOT__ins_valid_pin_in;
        CData/*0:0*/ core__DOT__if_id__DOT__ins_valid_pin_out;
        CData/*3:0*/ core__DOT__immediate_generator__DOT__sel;
        CData/*0:0*/ core__DOT__control_unit__DOT__orrr;
        CData/*0:0*/ core__DOT__control_unit__DOT__andd;
        CData/*0:0*/ core__DOT__control_unit__DOT__sltu;
        CData/*0:0*/ core__DOT__control_unit__DOT__srl;
        CData/*0:0*/ core__DOT__control_unit__DOT__sra;
        CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18;
        CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19;
        CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23;
        CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27;
        CData/*0:0*/ core__DOT__data_mem__DOT__csb;
        CData/*3:0*/ core__DOT__data_mem__DOT__wmask_o;
        CData/*0:0*/ core__DOT__data_mem__DOT__we_o;
        CData/*0:0*/ core__DOT__data_mem__DOT__memory__DOT__csb_reg;
        CData/*0:0*/ core__DOT__data_mem__DOT__memory__DOT__web_reg;
    };
    struct {
        CData/*3:0*/ core__DOT__data_mem__DOT__memory__DOT__wmask_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ core__DOT__control_unit__DOT__selected_bits;
        SData/*12:0*/ core__DOT__data_mem__DOT__addr_o;
        SData/*12:0*/ core__DOT__data_mem__DOT__memory__DOT__addr_reg;
        VL_OUT(rvfi_o_insn_0,31,0);
        VL_OUT(rvfi_o_rs1_rdata_0,31,0);
        VL_OUT(rvfi_o_rs2_rdata_0,31,0);
        VL_OUT(rvfi_o_rd_wdata_0,31,0);
        VL_OUT(rvfi_o_pc_rdata_0,31,0);
        VL_OUT(rvfi_o_pc_wdata_0,31,0);
        VL_OUT(rvfi_o_mem_addr_0,31,0);
        VL_OUT(rvfi_o_mem_rdata_0,31,0);
        VL_OUT(rvfi_o_mem_wdata_0,31,0);
        IData/*31:0*/ core__DOT__id_instruction;
        IData/*31:0*/ core__DOT__id_rs1_data;
        IData/*31:0*/ core__DOT__ex_alu_result;
        IData/*31:0*/ core__DOT__mem_read_data;
        IData/*31:0*/ core__DOT__wb_data;
        IData/*31:0*/ core__DOT__ex_pc_plus_imm;
        IData/*31:0*/ core__DOT__ex_rs1_plus_imm_for_jalr;
        IData/*31:0*/ core__DOT__id_pcplus4;
        IData/*31:0*/ core__DOT__id_imm;
        IData/*31:0*/ core__DOT__ex_alu_data_B;
        IData/*31:0*/ core__DOT__ex_rs1_data;
        IData/*31:0*/ core__DOT__ex_rs2_data;
        IData/*31:0*/ core__DOT__ex_imm;
        IData/*31:0*/ core__DOT__ex_pcplus4;
        IData/*31:0*/ core__DOT__ex_rs1_forwarded;
        IData/*31:0*/ core__DOT__ex_rs2_forwarded;
        IData/*31:0*/ core__DOT__mem_alu_result;
        IData/*31:0*/ core__DOT__mem_store_data;
        IData/*31:0*/ core__DOT__wb_mem_data;
        IData/*31:0*/ core__DOT__wb_alu_result;
        IData/*31:0*/ core__DOT__wb_pcplus4;
        IData/*31:0*/ core__DOT__mem_pc_plus_imm;
        IData/*31:0*/ core__DOT__wb_pc_plus_imm;
        IData/*31:0*/ core__DOT__mem_jal_return_add;
        IData/*31:0*/ core__DOT__wb_jal_return_add;
        IData/*31:0*/ core__DOT__id_current_pc;
        IData/*31:0*/ core__DOT__ex_current_pc;
        IData/*31:0*/ core__DOT__if_current_pc;
        IData/*31:0*/ core__DOT__ex_jal_return_add;
        IData/*31:0*/ core__DOT__ex_instruction;
        IData/*31:0*/ core__DOT__instruction_final;
        IData/*31:0*/ core__DOT__rs1_data_final;
        IData/*31:0*/ core__DOT__rs2_data_final;
        IData/*31:0*/ core__DOT__current_pc_final;
        IData/*31:0*/ core__DOT__if_pc_w;
        IData/*31:0*/ core__DOT__mem_current_pc;
        IData/*31:0*/ core__DOT__id_pc_w;
        IData/*31:0*/ core__DOT__ex_pc_w;
        IData/*31:0*/ core__DOT__pc_w_final;
        IData/*31:0*/ core__DOT__store_data_final;
        IData/*31:0*/ core__DOT__fetch__DOT__pc;
        IData/*31:0*/ core__DOT__regfile__DOT__i;
        IData/*31:0*/ core__DOT__data_mem__DOT__wdata_o;
        IData/*31:0*/ core__DOT__data_mem__DOT__rdata_i;
        IData/*31:0*/ core__DOT__data_mem__DOT__memory__DOT__din_reg;
        IData/*31:0*/ core__DOT__data_mem__DOT__memory__DOT__dout_reg;
        IData/*31:0*/ core__DOT__data_mem__DOT__memory__DOT__i;
    };
    struct {
        IData/*31:0*/ core__DOT__delayRegister__DOT__instruction_1_delay;
        IData/*31:0*/ core__DOT__delayRegister__DOT__rs1_data_1_delay;
        IData/*31:0*/ core__DOT__delayRegister__DOT__rs2_data_1_delay;
        IData/*31:0*/ core__DOT__delayRegister__DOT__pc_w_1_delay;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4097> core__DOT__fetch__DOT__IM__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> core__DOT__regfile__DOT__registers;
        VlUnpacked<IData/*31:0*/, 8192> core__DOT__data_mem__DOT__memory__DOT__mem;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore___024root(Vcore__Syms* symsp, const char* v__name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
