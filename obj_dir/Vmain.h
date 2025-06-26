// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMAIN_H_
#define _VMAIN_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmain__Syms;
class Vmain_VerilatedVcd;


//----------

VL_MODULE(Vmain) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(select,0,0);
    VL_IN8(enable,0,0);
    VL_OUT8(mux_select,0,0);
    VL_IN(imm_input,31,0);
    VL_IN(reg_input,31,0);
    VL_OUT(out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ top__DOT__ex_sel_bit_mux;
        CData/*1:0*/ top__DOT__wb_sel_bit_mux;
        CData/*1:0*/ top__DOT__mem_sel_bit_mux;
        CData/*0:0*/ top__DOT__stall;
        CData/*0:0*/ top__DOT__flush;
        CData/*0:0*/ top__DOT__mem_jal_enb;
        CData/*4:0*/ top__DOT__wb_rd;
        CData/*4:0*/ top__DOT__ex_rd;
        CData/*4:0*/ top__DOT__ex_rs1;
        CData/*4:0*/ top__DOT__ex_rs2;
        CData/*4:0*/ top__DOT__mem_rd;
        CData/*3:0*/ top__DOT__ex_alu_sel;
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
        CData/*0:0*/ top__DOT__id_beq;
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
    };
    struct {
        CData/*0:0*/ top__DOT__mem_sw;
        CData/*1:0*/ top__DOT__forward_a;
        CData/*1:0*/ top__DOT__forward_b;
        CData/*2:0*/ top__DOT__wb_mux_sel;
        CData/*0:0*/ top__DOT__flush_for_if;
        CData/*0:0*/ top__DOT__id_lb;
        CData/*0:0*/ top__DOT__id_lh;
        CData/*0:0*/ top__DOT__id_lhu;
        CData/*0:0*/ top__DOT__id_lbu;
        CData/*0:0*/ top__DOT__id_lw;
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
        CData/*3:0*/ top__DOT__immediate_generator__DOT__sel;
        CData/*0:0*/ top__DOT__control_unit__DOT__sltu;
        CData/*0:0*/ top__DOT__control_unit__DOT__srl;
        CData/*0:0*/ top__DOT__control_unit__DOT__sra;
        CData/*0:0*/ top__DOT__control_unit__DOT__orrr;
        CData/*0:0*/ top__DOT__control_unit__DOT__andd;
        CData/*0:0*/ top__DOT__forwarding_unit__DOT__clk;
        CData/*4:0*/ top__DOT__ex_mem__DOT__rs1_out;
        CData/*4:0*/ top__DOT__ex_mem__DOT__rs2_out;
        SData/*8:0*/ top__DOT__control_unit__DOT__selected_bits;
        IData/*31:0*/ top__DOT__ex_pc_plus_imm;
        IData/*31:0*/ top__DOT__ex_rs1_plus_imm_for_jalr;
        IData/*31:0*/ top__DOT__id_instruction;
        IData/*31:0*/ top__DOT__id_pcplus4;
        IData/*31:0*/ top__DOT__id_rs1_data;
        IData/*31:0*/ top__DOT__id_imm;
        IData/*31:0*/ top__DOT__wb_data;
        IData/*31:0*/ top__DOT__ex_alu_result;
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
        IData/*31:0*/ top__DOT__fetch__DOT__pc_next;
        WData/*1023:0*/ top__DOT__regfile__DOT__registers[32];
        IData/*31:0*/ top__DOT__regfile__DOT__i;
    };
    struct {
        IData/*31:0*/ top__DOT__fetch__DOT__IM__DOT__memory[4097];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ top__DOT____Vcellinp__mux_rs2__sel_bit;
    CData/*3:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*0:0*/ __Vtablechg1[16];
    static CData/*1:0*/ __Vtable1_top__DOT__ex_sel_bit_mux[16];
    static CData/*2:0*/ __Vtable2_top__DOT__wb_mux_sel[32];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmain__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmain);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmain(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmain();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmain__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmain__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmain__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vmain__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmain__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vmain__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmain__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__5(Vmain__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vmain__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vmain__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vmain__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
