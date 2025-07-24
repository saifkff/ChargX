// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

void Vcore___024root___eval_act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__1(Vcore___024root* vlSelf);
void Vcore___024root___nba_comb__TOP__0(Vcore___024root* vlSelf);

void Vcore___024root___eval_nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vcore___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v0;
    __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v0;
    __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v0;
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v1;
    __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v1 = 0;
    SData/*12:0*/ __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v1;
    __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v1;
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v2;
    __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v2 = 0;
    SData/*12:0*/ __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v2;
    __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v2;
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v3;
    __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v3 = 0;
    SData/*12:0*/ __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v3;
    __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v3;
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v3 = 0;
    // Body
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v0 = 0U;
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v1 = 0U;
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v2 = 0U;
    __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v3 = 0U;
    vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__csb_reg = 1U;
    vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__dout_reg 
        = vlSelfRef.core__DOT__mem_read_data;
    vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__din_reg 
        = vlSelfRef.core__DOT__mem_store_data;
    vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__addr_reg 
        = (0x1fffU & vlSelfRef.core__DOT__mem_alu_result);
    vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__web_reg 
        = vlSelfRef.core__DOT__mem_we;
    vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__wmask_reg 
        = vlSelfRef.core__DOT__mem_wmask;
    if (vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__web_reg) {
        if ((1U & (IData)(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__wmask_reg))) {
            __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v0 
                = (0xffU & vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__din_reg);
            __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v0 
                = vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__addr_reg;
            __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__wmask_reg))) {
            __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v1 
                = (0xffU & (vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__din_reg 
                            >> 8U));
            __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v1 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__addr_reg)));
            __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__wmask_reg))) {
            __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v2 
                = (0xffU & (vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__din_reg 
                            >> 0x10U));
            __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v2 
                = (0x1fffU & ((IData)(2U) + (IData)(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__addr_reg)));
            __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__wmask_reg))) {
            __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v3 
                = (vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__din_reg 
                   >> 0x18U);
            __VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v3 
                = (0x1fffU & ((IData)(3U) + (IData)(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__addr_reg)));
            __VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v3 = 1U;
        }
    }
    vlSelfRef.core__DOT__data_mem__DOT__csb = 1U;
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__rs1_data_final = 0U;
        vlSelfRef.core__DOT__rs2_data_final = 0U;
        vlSelfRef.core__DOT__data_mem__DOT__wdata_o = 0U;
        vlSelfRef.core__DOT__store_data_final = 0U;
        vlSelfRef.core__DOT__data_mem__DOT__addr_o = 0U;
        vlSelfRef.core__DOT__data_mem__DOT__wmask_o = 0U;
        vlSelfRef.core__DOT__wmask_final = 0U;
        vlSelfRef.core__DOT__pc_w_final = 0U;
        vlSelfRef.core__DOT__current_pc_final = 0U;
        vlSelfRef.core__DOT__instruction_final = 0U;
        vlSelfRef.core__DOT__rs1_final = 0U;
        vlSelfRef.core__DOT__rs2_final = 0U;
    } else {
        vlSelfRef.core__DOT__rs1_data_final = vlSelfRef.core__DOT__delayRegister__DOT__rs1_data_1_delay;
        vlSelfRef.core__DOT__rs2_data_final = vlSelfRef.core__DOT__delayRegister__DOT__rs2_data_1_delay;
        vlSelfRef.core__DOT__data_mem__DOT__wdata_o 
            = vlSelfRef.core__DOT__mem_store_data;
        vlSelfRef.core__DOT__store_data_final = vlSelfRef.core__DOT__mem_store_data;
        vlSelfRef.core__DOT__data_mem__DOT__addr_o 
            = (0x1fffU & vlSelfRef.core__DOT__mem_alu_result);
        vlSelfRef.core__DOT__data_mem__DOT__wmask_o 
            = vlSelfRef.core__DOT__mem_wmask;
        vlSelfRef.core__DOT__wmask_final = vlSelfRef.core__DOT__mem_wmask;
        vlSelfRef.core__DOT__pc_w_final = vlSelfRef.core__DOT__delayRegister__DOT__pc_w_1_delay;
        vlSelfRef.core__DOT__current_pc_final = vlSelfRef.core__DOT__mem_current_pc;
        vlSelfRef.core__DOT__instruction_final = vlSelfRef.core__DOT__delayRegister__DOT__instruction_1_delay;
        vlSelfRef.core__DOT__rs1_final = vlSelfRef.core__DOT__mem_rs1;
        vlSelfRef.core__DOT__rs2_final = vlSelfRef.core__DOT__mem_rs2;
    }
    vlSelfRef.core__DOT__data_mem__DOT__we_o = ((IData)(vlSelfRef.rst) 
                                                || (IData)(vlSelfRef.core__DOT__mem_we));
    if (__VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v0) {
        vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__mem[__VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v0] 
            = __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v0;
    }
    if (__VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v1) {
        vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__mem[__VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v1] 
            = __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v1;
    }
    if (__VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v2) {
        vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__mem[__VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v2] 
            = __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v2;
    }
    if (__VdlySet__core__DOT__data_mem__DOT__memory__DOT__mem__v3) {
        vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__mem[__VdlyDim0__core__DOT__data_mem__DOT__memory__DOT__mem__v3] 
            = __VdlyVal__core__DOT__data_mem__DOT__memory__DOT__mem__v3;
    }
    vlSelfRef.rvfi_o_rs1_rdata_0 = vlSelfRef.core__DOT__rs1_data_final;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        vlSelfRef.core__DOT__delayRegister__DOT__rs1_data_1_delay 
            = vlSelfRef.core__DOT__ex_rs1_forwarded;
        vlSelfRef.core__DOT__delayRegister__DOT__rs2_data_1_delay 
            = vlSelfRef.core__DOT__ex_rs2_forwarded;
        vlSelfRef.core__DOT__delayRegister__DOT__pc_w_1_delay 
            = vlSelfRef.core__DOT__ex_pc_w;
        vlSelfRef.core__DOT__delayRegister__DOT__instruction_1_delay 
            = vlSelfRef.core__DOT__ex_instruction;
    }
    vlSelfRef.rvfi_o_rs2_rdata_0 = vlSelfRef.core__DOT__rs2_data_final;
    vlSelfRef.rvfi_o_mem_wdata_0 = vlSelfRef.core__DOT__store_data_final;
    vlSelfRef.rvfi_o_mem_wmask_0 = vlSelfRef.core__DOT__wmask_final;
    vlSelfRef.rvfi_o_pc_wdata_0 = vlSelfRef.core__DOT__pc_w_final;
    vlSelfRef.rvfi_o_pc_rdata_0 = vlSelfRef.core__DOT__current_pc_final;
    vlSelfRef.rvfi_o_insn_0 = vlSelfRef.core__DOT__instruction_final;
    vlSelfRef.rvfi_o_rs1_addr_0 = vlSelfRef.core__DOT__rs1_final;
    vlSelfRef.rvfi_o_rs2_addr_0 = vlSelfRef.core__DOT__rs2_final;
}

extern const VlUnpacked<CData/*2:0*/, 32> Vcore__ConstPool__TABLE_hd8a1beef_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vcore__ConstPool__TABLE_hcace54c4_0;

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__1(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_25;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_25 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49 = 0;
    CData/*0:0*/ core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50;
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__regfile__DOT__registers__v0;
    __VdlySet__core__DOT__regfile__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__regfile__DOT__registers__v32;
    __VdlyVal__core__DOT__regfile__DOT__registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__core__DOT__regfile__DOT__registers__v32;
    __VdlyDim0__core__DOT__regfile__DOT__registers__v32 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__regfile__DOT__registers__v32;
    __VdlySet__core__DOT__regfile__DOT__registers__v32 = 0;
    // Body
    __VdlySet__core__DOT__regfile__DOT__registers__v0 = 0U;
    __VdlySet__core__DOT__regfile__DOT__registers__v32 = 0U;
    vlSelfRef.core__DOT__mem_lb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.core__DOT__ex_lb));
    vlSelfRef.core__DOT__mem_lh = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.core__DOT__ex_lh));
    vlSelfRef.core__DOT__mem_lw = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.core__DOT__ex_lw));
    vlSelfRef.core__DOT__mem_lhu = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                    && (IData)(vlSelfRef.core__DOT__ex_lhu));
    vlSelfRef.core__DOT__mem_lbu = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                    && (IData)(vlSelfRef.core__DOT__ex_lbu));
    vlSelfRef.core__DOT__mem_sw = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.core__DOT__ex_sw));
    vlSelfRef.core__DOT__mem_sb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.core__DOT__ex_sb));
    vlSelfRef.core__DOT__mem_sh = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.core__DOT__ex_sh));
    vlSelfRef.core__DOT__mem_store_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                          && (IData)(vlSelfRef.core__DOT__ex_store_enb));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_branch_enb = 0U;
        vlSelfRef.core__DOT__ex_alu_sel = 0U;
        vlSelfRef.core__DOT__ex_imm = 0U;
        vlSelfRef.core__DOT__ex_rs2_imm_sel = 0U;
        vlSelfRef.core__DOT__ex_rs1_data = 0U;
        vlSelfRef.core__DOT__ex_rs2_data = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_branch_enb = vlSelfRef.core__DOT__id_branch_enb;
        vlSelfRef.core__DOT__ex_alu_sel = (((((IData)(vlSelfRef.core__DOT__id_sub) 
                                              | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                                 | (IData)(vlSelfRef.core__DOT__id_branch_enb))) 
                                             << 3U) 
                                            | ((((IData)(vlSelfRef.core__DOT__id_xorr) 
                                                 | (IData)(vlSelfRef.core__DOT__id_xori)) 
                                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__orrr) 
                                                   | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                                      | ((IData)(vlSelfRef.core__DOT__id_blt) 
                                                         | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                                            | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                                               | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                                                  | (IData)(vlSelfRef.core__DOT__control_unit__DOT__srl)))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSelfRef.core__DOT__control_unit__DOT__orrr) 
                                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                                   | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23) 
                                                      | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                                         | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                                            | (((IData)(vlSelfRef.core__DOT__id_sltr) 
                                                                | (IData)(vlSelfRef.core__DOT__id_slti)) 
                                                               | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu))))))) 
                                               << 1U) 
                                              | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                                 | ((IData)(vlSelfRef.core__DOT__id_bne) 
                                                    | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                                       | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                                          | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                                             | (((IData)(vlSelfRef.core__DOT__id_sllr) 
                                                                 | (IData)(vlSelfRef.core__DOT__id_slli)) 
                                                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__srl) 
                                                                   | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu))))))))));
        vlSelfRef.core__DOT__ex_imm = vlSelfRef.core__DOT__id_imm;
        vlSelfRef.core__DOT__ex_rs2_imm_sel = ((IData)(vlSelfRef.core__DOT__id_lui_enb) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.core__DOT__id_instruction)) 
                                                  | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18) 
                                                     | ((IData)(vlSelfRef.core__DOT__id_addi) 
                                                        | ((IData)(vlSelfRef.core__DOT__id_sh) 
                                                           | ((IData)(vlSelfRef.core__DOT__id_sb) 
                                                              | ((IData)(vlSelfRef.core__DOT__id_sw) 
                                                                 | ((IData)(vlSelfRef.core__DOT__id_slli) 
                                                                    | ((IData)(vlSelfRef.core__DOT__id_srai) 
                                                                       | ((IData)(vlSelfRef.core__DOT__id_auipc_wenb) 
                                                                          | ((IData)(vlSelfRef.core__DOT__id_ori) 
                                                                             | ((IData)(vlSelfRef.core__DOT__id_andi) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_srli) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_xori) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_sltui) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_slti) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lbu) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lhu) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_jalr) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lw) 
                                                                                | (IData)(vlSelfRef.core__DOT__id_addi2)))))))))))))))))))));
        vlSelfRef.core__DOT__ex_rs1_data = ((3U == 
                                             ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                               & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.core__DOT__id_instruction 
                                                      >> 0xfU))))
                                               ? 3U
                                               : 0U))
                                             ? vlSelfRef.core__DOT__wb_data
                                             : vlSelfRef.core__DOT__id_rs1_data);
        vlSelfRef.core__DOT__ex_rs2_data = ((3U == 
                                             ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                               & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.core__DOT__id_instruction 
                                                      >> 0x14U))))
                                               ? 3U
                                               : 0U))
                                             ? vlSelfRef.core__DOT__wb_data
                                             : ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.core__DOT__id_instruction 
                                                     >> 0x14U)))
                                                 ? 0U
                                                 : 
                                                vlSelfRef.core__DOT__regfile__DOT__registers
                                                [(0x1fU 
                                                  & (vlSelfRef.core__DOT__id_instruction 
                                                     >> 0x14U))]));
    }
    vlSelfRef.core__DOT__wb_auipc_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                          && (IData)(vlSelfRef.core__DOT__mem_auipc_wenb));
    vlSelfRef.core__DOT__wb_lui_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                       && (IData)(vlSelfRef.core__DOT__mem_lui_enb));
    vlSelfRef.core__DOT__wb_jal_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                       && (IData)(vlSelfRef.core__DOT__mem_jal_enb));
    vlSelfRef.core__DOT__wb_load_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                        && (IData)(vlSelfRef.core__DOT__mem_load_enb));
    vlSelfRef.core__DOT__mem_wb_ins_valid_pin = ((1U 
                                                  & (~ (IData)(vlSelfRef.rst))) 
                                                 && (IData)(vlSelfRef.core__DOT__ex_mem_ins_valid_pin));
    vlSelfRef.core__DOT__mem_we = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.core__DOT__ex_we));
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__regfile__DOT__i = 0x20U;
        __VdlySet__core__DOT__regfile__DOT__registers__v0 = 1U;
    } else if (((IData)(vlSelfRef.core__DOT__wb_wenb) 
                & (0U != (IData)(vlSelfRef.core__DOT__wb_rd)))) {
        __VdlyVal__core__DOT__regfile__DOT__registers__v32 
            = vlSelfRef.core__DOT__wb_data;
        __VdlyDim0__core__DOT__regfile__DOT__registers__v32 
            = vlSelfRef.core__DOT__wb_rd;
        __VdlySet__core__DOT__regfile__DOT__registers__v32 = 1U;
    }
    if (__VdlySet__core__DOT__regfile__DOT__registers__v0) {
        vlSelfRef.core__DOT__regfile__DOT__registers[0U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[1U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[2U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[3U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[4U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[5U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[6U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[7U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[8U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[9U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0xaU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0xbU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0xcU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0xdU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0xeU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0xfU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x10U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x11U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x12U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x13U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x14U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x15U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x16U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x17U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x18U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x19U] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x1aU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x1bU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x1cU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x1dU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x1eU] = 0U;
        vlSelfRef.core__DOT__regfile__DOT__registers[0x1fU] = 0U;
    }
    if (__VdlySet__core__DOT__regfile__DOT__registers__v32) {
        vlSelfRef.core__DOT__regfile__DOT__registers[__VdlyDim0__core__DOT__regfile__DOT__registers__v32] 
            = __VdlyVal__core__DOT__regfile__DOT__registers__v32;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__wb_sel_bit_mux = 0U;
        vlSelfRef.core__DOT__wb_mem_data = 0U;
        vlSelfRef.rvfi_o_mem_rdata_0 = vlSelfRef.core__DOT__wb_mem_data;
        vlSelfRef.core__DOT__wb_alu_result = 0U;
    } else {
        vlSelfRef.core__DOT__wb_sel_bit_mux = vlSelfRef.core__DOT__mem_sel_bit_mux;
        vlSelfRef.core__DOT__wb_mem_data = vlSelfRef.core__DOT__mem_read_data;
        vlSelfRef.rvfi_o_mem_rdata_0 = vlSelfRef.core__DOT__wb_mem_data;
        vlSelfRef.core__DOT__wb_alu_result = vlSelfRef.core__DOT__mem_alu_result;
    }
    vlSelfRef.rvfi_o_mem_addr_0 = vlSelfRef.core__DOT__wb_alu_result;
    vlSelfRef.core__DOT__mem_auipc_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                           && (IData)(vlSelfRef.core__DOT__ex_auipc_wenb));
    vlSelfRef.core__DOT__mem_lui_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                        && (IData)(vlSelfRef.core__DOT__ex_lui_enb));
    vlSelfRef.core__DOT__mem_jal_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                        && (IData)(vlSelfRef.core__DOT__ex_jal_enb));
    __Vtableidx2 = ((((IData)(vlSelfRef.core__DOT__wb_lui_enb) 
                      << 4U) | (((IData)(vlSelfRef.core__DOT__wb_auipc_wenb) 
                                 << 3U) | ((IData)(vlSelfRef.core__DOT__wb_jal_enb) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.core__DOT__wb_load_enb) 
                        << 1U) | (1U & (~ ((IData)(vlSelfRef.core__DOT__wb_auipc_wenb) 
                                           | ((IData)(vlSelfRef.core__DOT__wb_lui_enb) 
                                              | ((IData)(vlSelfRef.core__DOT__wb_jal_enb) 
                                                 | (IData)(vlSelfRef.core__DOT__wb_load_enb))))))));
    vlSelfRef.core__DOT__pri_enc_sel = Vcore__ConstPool__TABLE_hd8a1beef_0
        [__Vtableidx2];
    vlSelfRef.core__DOT__mem_load_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                         && (IData)(vlSelfRef.core__DOT__ex_load_enb));
    vlSelfRef.rvfi_o_valid_0 = vlSelfRef.core__DOT__mem_wb_ins_valid_pin;
    vlSelfRef.core__DOT__ex_mem_ins_valid_pin = ((1U 
                                                  & (~ (IData)(vlSelfRef.rst))) 
                                                 && (IData)(vlSelfRef.core__DOT__id_ex_ins_valid_pin));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_pc_w = 0U;
        vlSelfRef.core__DOT__ex_instruction = 0U;
        vlSelfRef.core__DOT__ex_lb = 0U;
        vlSelfRef.core__DOT__ex_lh = 0U;
        vlSelfRef.core__DOT__ex_lw = 0U;
        vlSelfRef.core__DOT__ex_lhu = 0U;
        vlSelfRef.core__DOT__ex_lbu = 0U;
        vlSelfRef.core__DOT__ex_sw = 0U;
        vlSelfRef.core__DOT__ex_sb = 0U;
        vlSelfRef.core__DOT__ex_sh = 0U;
        vlSelfRef.core__DOT__ex_store_enb = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_pc_w = vlSelfRef.core__DOT__id_pc_w;
        vlSelfRef.core__DOT__ex_instruction = vlSelfRef.core__DOT__id_instruction;
        vlSelfRef.core__DOT__ex_lb = vlSelfRef.core__DOT__id_lb;
        vlSelfRef.core__DOT__ex_lh = vlSelfRef.core__DOT__id_lh;
        vlSelfRef.core__DOT__ex_lw = vlSelfRef.core__DOT__id_lw;
        vlSelfRef.core__DOT__ex_lhu = vlSelfRef.core__DOT__id_lhu;
        vlSelfRef.core__DOT__ex_lbu = vlSelfRef.core__DOT__id_lbu;
        vlSelfRef.core__DOT__ex_sw = vlSelfRef.core__DOT__id_sw;
        vlSelfRef.core__DOT__ex_sb = vlSelfRef.core__DOT__id_sb;
        vlSelfRef.core__DOT__ex_sh = vlSelfRef.core__DOT__id_sh;
        vlSelfRef.core__DOT__ex_store_enb = vlSelfRef.core__DOT__id_store_enb;
    }
    vlSelfRef.core__DOT__wb_pcplus4 = ((IData)(vlSelfRef.rst)
                                        ? 0U : vlSelfRef.core__DOT__ex_pcplus4);
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_pcplus4 = 0U;
        vlSelfRef.core__DOT__ex_we = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_pcplus4 = vlSelfRef.core__DOT__id_pcplus4;
        vlSelfRef.core__DOT__ex_we = vlSelfRef.core__DOT__id_store_enb;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__wb_jal_return_add = 0U;
        vlSelfRef.core__DOT__wb_pc_plus_imm = 0U;
        vlSelfRef.core__DOT__mem_store_data = 0U;
        vlSelfRef.core__DOT__mem_wmask = 0U;
    } else {
        vlSelfRef.core__DOT__wb_jal_return_add = vlSelfRef.core__DOT__mem_jal_return_add;
        vlSelfRef.core__DOT__wb_pc_plus_imm = vlSelfRef.core__DOT__mem_pc_plus_imm;
        vlSelfRef.core__DOT__mem_store_data = ((8U 
                                                == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                                ? vlSelfRef.core__DOT__ex_rs2_forwarded
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelfRef.core__DOT__ex_rs2_forwarded)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                                     ? 
                                                    (0xffffU 
                                                     & vlSelfRef.core__DOT__ex_rs2_forwarded)
                                                     : 0U)));
        vlSelfRef.core__DOT__mem_wmask = vlSelfRef.core__DOT__ex_wmask;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_wmask = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_wmask = ((0xcU & ((- (IData)((IData)(vlSelfRef.core__DOT__id_sw))) 
                                                  << 2U)) 
                                         | ((((IData)(vlSelfRef.core__DOT__id_sh) 
                                              | (IData)(vlSelfRef.core__DOT__id_sw)) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.core__DOT__id_store_enb)));
    }
    vlSelfRef.core__DOT__mem_current_pc = ((IData)(vlSelfRef.rst)
                                            ? 0U : vlSelfRef.core__DOT__ex_current_pc);
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_current_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_current_pc = vlSelfRef.core__DOT__id_current_pc;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__mem_rs1 = 0U;
        vlSelfRef.core__DOT__mem_rs1 = 0U;
    } else {
        vlSelfRef.core__DOT__mem_rs1 = vlSelfRef.core__DOT__ex_rs1;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_rs1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_rs1 = (0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                >> 0xfU));
    }
    vlSelfRef.core__DOT__mem_rs2 = ((IData)(vlSelfRef.rst)
                                     ? 0U : (IData)(vlSelfRef.core__DOT__ex_rs2));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_rs2 = 0U;
        vlSelfRef.core__DOT__ex_auipc_wenb = 0U;
        vlSelfRef.core__DOT__ex_lui_enb = 0U;
        vlSelfRef.core__DOT__ex_jal_enb = 0U;
        vlSelfRef.core__DOT__ex_load_enb = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_rs2 = (0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                >> 0x14U));
        vlSelfRef.core__DOT__ex_auipc_wenb = vlSelfRef.core__DOT__id_auipc_wenb;
        vlSelfRef.core__DOT__ex_lui_enb = vlSelfRef.core__DOT__id_lui_enb;
        vlSelfRef.core__DOT__ex_jal_enb = vlSelfRef.core__DOT__id_jal_enb;
        vlSelfRef.core__DOT__ex_load_enb = ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18) 
                                            | ((IData)(vlSelfRef.core__DOT__id_lw) 
                                               | ((IData)(vlSelfRef.core__DOT__id_lbu) 
                                                  | (IData)(vlSelfRef.core__DOT__id_lhu))));
    }
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__mem_sel_bit_mux = 0U;
        vlSelfRef.core__DOT__mem_alu_result = 0U;
        vlSelfRef.core__DOT__mem_jal_return_add = 0U;
    } else {
        vlSelfRef.core__DOT__mem_sel_bit_mux = vlSelfRef.core__DOT__ex_sel_bit_mux;
        vlSelfRef.core__DOT__mem_alu_result = vlSelfRef.core__DOT__ex_alu_result;
        vlSelfRef.core__DOT__mem_jal_return_add = vlSelfRef.core__DOT__ex_jal_return_add;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_jal_return_add = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_jal_return_add = vlSelfRef.core__DOT__id_pcplus4;
    }
    vlSelfRef.core__DOT__mem_pc_plus_imm = ((IData)(vlSelfRef.rst)
                                             ? 0U : vlSelfRef.core__DOT__ex_pc_plus_imm);
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_pc_plus_imm = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_pc_plus_imm = (vlSelfRef.core__DOT__id_imm 
                                               + vlSelfRef.core__DOT__id_pcplus4);
    }
    vlSelfRef.core__DOT__wb_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                    && (IData)(vlSelfRef.core__DOT__mem_wenb));
    vlSelfRef.core__DOT__wb_data = ((4U & (IData)(vlSelfRef.core__DOT__pri_enc_sel))
                                     ? ((2U & (IData)(vlSelfRef.core__DOT__pri_enc_sel))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__pri_enc_sel))
                                                  ? 0U
                                                  : vlSelfRef.core__DOT__ex_imm))
                                     : ((2U & (IData)(vlSelfRef.core__DOT__pri_enc_sel))
                                         ? ((1U & (IData)(vlSelfRef.core__DOT__pri_enc_sel))
                                             ? vlSelfRef.core__DOT__wb_pc_plus_imm
                                             : vlSelfRef.core__DOT__wb_jal_return_add)
                                         : ((1U & (IData)(vlSelfRef.core__DOT__pri_enc_sel))
                                             ? vlSelfRef.core__DOT__wb_mem_data
                                             : vlSelfRef.core__DOT__wb_alu_result)));
    vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit 
        = ((((IData)(vlSelfRef.core__DOT__ex_sw) << 3U) 
            | ((IData)(vlSelfRef.core__DOT__ex_sh) 
               << 2U)) | ((IData)(vlSelfRef.core__DOT__ex_sb) 
                          << 1U));
    vlSelfRef.rvfi_o_rd_wdata_0 = vlSelfRef.core__DOT__wb_data;
    vlSelfRef.core__DOT__wb_rd = ((IData)(vlSelfRef.rst)
                                   ? 0U : (IData)(vlSelfRef.core__DOT__mem_rd));
    vlSelfRef.rvfi_o_rd_addr_0 = vlSelfRef.core__DOT__wb_rd;
    vlSelfRef.core__DOT__mem_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                     && (IData)(vlSelfRef.core__DOT__ex_wenb));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__id_ex_ins_valid_pin = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__id_ex_ins_valid_pin = 
            (0U != (0x7fU & vlSelfRef.core__DOT__id_instruction));
    }
    vlSelfRef.core__DOT__mem_rd = ((IData)(vlSelfRef.rst)
                                    ? 0U : (IData)(vlSelfRef.core__DOT__ex_rd));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.core__DOT__ex_rd = 0U;
        vlSelfRef.core__DOT__ex_wenb = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__ex_rd = (0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                               >> 7U));
        vlSelfRef.core__DOT__ex_wenb = ((IData)(vlSelfRef.core__DOT__id_lw) 
                                        | ((0x6fU == 
                                            (0x7fU 
                                             & vlSelfRef.core__DOT__id_instruction)) 
                                           | ((IData)(vlSelfRef.core__DOT__id_lh) 
                                              | ((IData)(vlSelfRef.core__DOT__id_lb) 
                                                 | ((IData)(vlSelfRef.core__DOT__id_addr) 
                                                    | ((IData)(vlSelfRef.core__DOT__id_sub) 
                                                       | ((IData)(vlSelfRef.core__DOT__id_srar) 
                                                          | ((IData)(vlSelfRef.core__DOT__id_sllr) 
                                                             | ((IData)(vlSelfRef.core__DOT__id_orr) 
                                                                | ((IData)(vlSelfRef.core__DOT__id_andr) 
                                                                   | ((IData)(vlSelfRef.core__DOT__id_sltur) 
                                                                      | ((IData)(vlSelfRef.core__DOT__id_sltr) 
                                                                         | ((IData)(vlSelfRef.core__DOT__id_srai) 
                                                                            | ((IData)(vlSelfRef.core__DOT__id_xorr) 
                                                                               | ((IData)(vlSelfRef.core__DOT__id_srlr) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_andi) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_auipc_wenb) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_ori) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_xori) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_sltui) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_srli) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_slli) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_addi) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_slti) 
                                                                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_sw) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lbu) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lhu) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_jalr) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lui_enb) 
                                                                                | (IData)(vlSelfRef.core__DOT__id_addi2)))))))))))))))))))))))))))))));
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush_for_if))) {
        vlSelfRef.core__DOT__if_id__DOT__ins_valid_pin_out = 0U;
        vlSelfRef.core__DOT__id_pc_w = 0U;
        vlSelfRef.core__DOT__id_current_pc = 0U;
        vlSelfRef.core__DOT__id_pcplus4 = 0U;
        vlSelfRef.core__DOT__id_instruction = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__if_id__DOT__ins_valid_pin_out 
            = vlSelfRef.core__DOT__if_id__DOT__ins_valid_pin_in;
        vlSelfRef.core__DOT__id_pc_w = vlSelfRef.core__DOT__if_pc_w;
        vlSelfRef.core__DOT__id_current_pc = vlSelfRef.core__DOT__fetch__DOT__pc;
        vlSelfRef.core__DOT__id_pcplus4 = ((IData)(4U) 
                                           + vlSelfRef.core__DOT__fetch__DOT__pc);
        vlSelfRef.core__DOT__id_instruction = vlSelfRef.core__DOT__fetch__DOT__IM__DOT__memory
            [(0x1fffU & (vlSelfRef.core__DOT__fetch__DOT__pc 
                         >> 2U))];
    }
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__fetch__DOT__pc = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))) {
        vlSelfRef.core__DOT__fetch__DOT__pc = vlSelfRef.core__DOT__if_pc_w;
    }
    vlSelfRef.core__DOT__forward_a = (((((IData)(vlSelfRef.core__DOT__mem_store_enb) 
                                         | (IData)(vlSelfRef.core__DOT__mem_wenb)) 
                                        & (0U != (IData)(vlSelfRef.core__DOT__mem_rd))) 
                                       & ((IData)(vlSelfRef.core__DOT__mem_rd) 
                                          == (IData)(vlSelfRef.core__DOT__ex_rs1)))
                                       ? 2U : ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                                & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                                   == (IData)(vlSelfRef.core__DOT__ex_rs1)))
                                                ? 1U
                                                : 0U));
    vlSelfRef.core__DOT__forward_b = (((((IData)(vlSelfRef.core__DOT__mem_store_enb) 
                                         | (IData)(vlSelfRef.core__DOT__mem_wenb)) 
                                        & (0U != (IData)(vlSelfRef.core__DOT__mem_rd))) 
                                       & ((IData)(vlSelfRef.core__DOT__mem_rd) 
                                          == (IData)(vlSelfRef.core__DOT__ex_rs2)))
                                       ? 2U : ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                                & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                                   == (IData)(vlSelfRef.core__DOT__ex_rs2)))
                                                ? 1U
                                                : 0U));
    vlSelfRef.core__DOT__ex_rs1_forwarded = ((2U == (IData)(vlSelfRef.core__DOT__forward_a))
                                              ? vlSelfRef.core__DOT__mem_alu_result
                                              : ((1U 
                                                  == (IData)(vlSelfRef.core__DOT__forward_a))
                                                  ? vlSelfRef.core__DOT__wb_data
                                                  : vlSelfRef.core__DOT__ex_rs1_data));
    vlSelfRef.core__DOT__ex_rs2_forwarded = ((2U == (IData)(vlSelfRef.core__DOT__forward_b))
                                              ? vlSelfRef.core__DOT__mem_alu_result
                                              : ((1U 
                                                  == (IData)(vlSelfRef.core__DOT__forward_b))
                                                  ? vlSelfRef.core__DOT__wb_data
                                                  : vlSelfRef.core__DOT__ex_rs2_data));
    vlSelfRef.core__DOT__ex_alu_data_B = ((IData)(vlSelfRef.core__DOT__ex_rs2_imm_sel)
                                           ? vlSelfRef.core__DOT__ex_imm
                                           : vlSelfRef.core__DOT__ex_rs2_forwarded);
    vlSelfRef.core__DOT__ex_branch_taken = 0U;
    if ((8U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))) {
        if ((4U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))) {
            if ((2U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))) {
                if ((1U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))) {
                    if ((vlSelfRef.core__DOT__ex_rs1_forwarded 
                         >= vlSelfRef.core__DOT__ex_alu_data_B)) {
                        vlSelfRef.core__DOT__ex_alu_result = 1U;
                        vlSelfRef.core__DOT__ex_branch_taken = 1U;
                    } else {
                        vlSelfRef.core__DOT__ex_alu_result = 0U;
                        vlSelfRef.core__DOT__ex_branch_taken = 0U;
                    }
                } else if ((vlSelfRef.core__DOT__ex_rs1_forwarded 
                            < vlSelfRef.core__DOT__ex_alu_data_B)) {
                    vlSelfRef.core__DOT__ex_alu_result = 1U;
                    vlSelfRef.core__DOT__ex_branch_taken = 1U;
                } else {
                    vlSelfRef.core__DOT__ex_alu_result = 0U;
                    vlSelfRef.core__DOT__ex_branch_taken = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))) {
                if (VL_GTES_III(32, vlSelfRef.core__DOT__ex_rs1_forwarded, vlSelfRef.core__DOT__ex_alu_data_B)) {
                    vlSelfRef.core__DOT__ex_alu_result = 1U;
                    vlSelfRef.core__DOT__ex_branch_taken = 1U;
                } else {
                    vlSelfRef.core__DOT__ex_alu_result = 0U;
                    vlSelfRef.core__DOT__ex_branch_taken = 0U;
                }
            } else if (VL_LTS_III(32, vlSelfRef.core__DOT__ex_rs1_forwarded, vlSelfRef.core__DOT__ex_alu_data_B)) {
                vlSelfRef.core__DOT__ex_alu_result = 1U;
                vlSelfRef.core__DOT__ex_branch_taken = 1U;
            } else {
                vlSelfRef.core__DOT__ex_alu_result = 0U;
                vlSelfRef.core__DOT__ex_branch_taken = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))) {
                if ((vlSelfRef.core__DOT__ex_rs1_forwarded 
                     != vlSelfRef.core__DOT__ex_alu_data_B)) {
                    vlSelfRef.core__DOT__ex_alu_result = 1U;
                    vlSelfRef.core__DOT__ex_branch_taken = 1U;
                } else {
                    vlSelfRef.core__DOT__ex_alu_result = 0U;
                    vlSelfRef.core__DOT__ex_branch_taken = 0U;
                }
            } else if ((vlSelfRef.core__DOT__ex_rs1_forwarded 
                        == vlSelfRef.core__DOT__ex_alu_data_B)) {
                vlSelfRef.core__DOT__ex_alu_result = 1U;
                vlSelfRef.core__DOT__ex_branch_taken = 1U;
            } else {
                vlSelfRef.core__DOT__ex_alu_result = 0U;
                vlSelfRef.core__DOT__ex_branch_taken = 0U;
            }
        } else {
            vlSelfRef.core__DOT__ex_alu_result = ((1U 
                                                   & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.core__DOT__ex_rs1_forwarded, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.core__DOT__ex_alu_data_B))
                                                   : 
                                                  (vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                   - vlSelfRef.core__DOT__ex_alu_data_B));
        }
    } else {
        vlSelfRef.core__DOT__ex_alu_result = ((4U & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                    & vlSelfRef.core__DOT__ex_alu_data_B)
                                                    : 
                                                   (vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                    | vlSelfRef.core__DOT__ex_alu_data_B))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelfRef.core__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                    ^ vlSelfRef.core__DOT__ex_alu_data_B)))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                                    ? 
                                                   ((vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                     < vlSelfRef.core__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                     < vlSelfRef.core__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.core__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelfRef.core__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlSelfRef.core__DOT__ex_rs1_forwarded 
                                                    + vlSelfRef.core__DOT__ex_alu_data_B))));
    }
    vlSelfRef.core__DOT__id_lb = (IData)((3U == (0x707fU 
                                                 & vlSelfRef.core__DOT__id_instruction)));
    vlSelfRef.core__DOT__id_rs1_data = ((0U == (0x1fU 
                                                & (vlSelfRef.core__DOT__id_instruction 
                                                   >> 0xfU)))
                                         ? 0U : vlSelfRef.core__DOT__regfile__DOT__registers
                                        [(0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                   >> 0xfU))]);
    vlSelfRef.core__DOT__immediate_generator__DOT__sel 
        = ((0x40U & vlSelfRef.core__DOT__id_instruction)
            ? ((0x20U & vlSelfRef.core__DOT__id_instruction)
                ? ((0x10U & vlSelfRef.core__DOT__id_instruction)
                    ? 0xfU : ((8U & vlSelfRef.core__DOT__id_instruction)
                               ? ((4U & vlSelfRef.core__DOT__id_instruction)
                                   ? ((2U & vlSelfRef.core__DOT__id_instruction)
                                       ? ((1U & vlSelfRef.core__DOT__id_instruction)
                                           ? 4U : 0xfU)
                                       : 0xfU) : 0xfU)
                               : ((4U & vlSelfRef.core__DOT__id_instruction)
                                   ? ((2U & vlSelfRef.core__DOT__id_instruction)
                                       ? ((1U & vlSelfRef.core__DOT__id_instruction)
                                           ? 7U : 0xfU)
                                       : 0xfU) : ((2U 
                                                   & vlSelfRef.core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.core__DOT__id_instruction)
                                                    ? 2U
                                                    : 0xfU)
                                                   : 0xfU))))
                : 0xfU) : ((0x20U & vlSelfRef.core__DOT__id_instruction)
                            ? ((0x10U & vlSelfRef.core__DOT__id_instruction)
                                ? ((8U & vlSelfRef.core__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlSelfRef.core__DOT__id_instruction)
                                               ? ((2U 
                                                   & vlSelfRef.core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.core__DOT__id_instruction)
                                                    ? 3U
                                                    : 0xfU)
                                                   : 0xfU)
                                               : ((2U 
                                                   & vlSelfRef.core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.core__DOT__id_instruction)
                                                    ? 5U
                                                    : 0xfU)
                                                   : 0xfU)))
                                : ((8U & vlSelfRef.core__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlSelfRef.core__DOT__id_instruction)
                                               ? 0xfU
                                               : ((2U 
                                                   & vlSelfRef.core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.core__DOT__id_instruction)
                                                    ? 1U
                                                    : 0xfU)
                                                   : 0xfU))))
                            : ((0x10U & vlSelfRef.core__DOT__id_instruction)
                                ? ((8U & vlSelfRef.core__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlSelfRef.core__DOT__id_instruction)
                                               ? ((2U 
                                                   & vlSelfRef.core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.core__DOT__id_instruction)
                                                    ? 3U
                                                    : 0xfU)
                                                   : 0xfU)
                                               : ((2U 
                                                   & vlSelfRef.core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.core__DOT__id_instruction)
                                                    ? 0U
                                                    : 0xfU)
                                                   : 0xfU)))
                                : ((8U & vlSelfRef.core__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlSelfRef.core__DOT__id_instruction)
                                               ? 0xfU
                                               : ((2U 
                                                   & vlSelfRef.core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.core__DOT__id_instruction)
                                                    ? 6U
                                                    : 0xfU)
                                                   : 0xfU))))));
    vlSelfRef.core__DOT__forward_c = (((((0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelfRef.core__DOT__mem_rd)) 
                                        & (0U != (IData)(vlSelfRef.core__DOT__mem_rd))) 
                                       & (IData)(vlSelfRef.core__DOT__mem_store_enb))
                                       ? 2U : ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                                & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.core__DOT__id_instruction 
                                                       >> 0xfU))))
                                                ? 1U
                                                : 0U));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_25 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36 
        = (IData)((0x1000U == (0x3000U & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33 
        = (IData)((0x4000U == (0x40004000U & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32 
        = (IData)((4U == (0xcU & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30 
        = (IData)((0x20U == (0x60U & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29 
        = (IData)((0U == (0x60U & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31 
        = (IData)((0U == (0x40004000U & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1 
        = (IData)((0U == (0xcU & vlSelfRef.core__DOT__id_instruction)));
    vlSelfRef.core__DOT__id_imm = ((8U & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                    ? 0U : ((4U & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.core__DOT__id_instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.core__DOT__id_instruction 
                                                     >> 0x14U))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.core__DOT__id_instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.core__DOT__id_instruction 
                                                     >> 0x14U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                                  ? 0U
                                                  : 
                                                 ((((- (IData)(
                                                               (vlSelfRef.core__DOT__id_instruction 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | (0x100000U 
                                                      & (vlSelfRef.core__DOT__id_instruction 
                                                         >> 0xbU))) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.core__DOT__id_instruction) 
                                                      | (0x800U 
                                                         & (vlSelfRef.core__DOT__id_instruction 
                                                            >> 9U))) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.core__DOT__id_instruction 
                                                           >> 0x14U))))))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelfRef.core__DOT__id_instruction)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.core__DOT__id_instruction 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | (((0x1000U 
                                                       & (vlSelfRef.core__DOT__id_instruction 
                                                          >> 0x13U)) 
                                                      | (0x800U 
                                                         & (vlSelfRef.core__DOT__id_instruction 
                                                            << 4U))) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.core__DOT__id_instruction 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.core__DOT__id_instruction 
                                                              >> 7U))))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.core__DOT__id_instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.core__DOT__id_instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.core__DOT__id_instruction 
                                                           >> 7U))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelfRef.core__DOT__id_instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.core__DOT__id_instruction 
                                                     >> 0x14U))))));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32) 
           & (vlSelfRef.core__DOT__id_instruction >> 4U));
    vlSelfRef.core__DOT__id_jalr = (IData)((((0x60U 
                                              == (0x3070U 
                                                  & vlSelfRef.core__DOT__id_instruction)) 
                                             & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)) 
                                            & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 4U)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1) 
           & (vlSelfRef.core__DOT__id_instruction >> 4U));
    vlSelfRef.core__DOT__id_lui_enb = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20) 
                                       & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30));
    vlSelfRef.core__DOT__id_auipc_wenb = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20) 
                                          & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29));
    vlSelfRef.core__DOT__id_jal_enb = ((0x6fU == (0x7fU 
                                                  & vlSelfRef.core__DOT__id_instruction)) 
                                       | (IData)(vlSelfRef.core__DOT__id_jalr));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40) 
           & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40) 
           & (vlSelfRef.core__DOT__id_instruction >> 5U));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2) 
           & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2) 
           & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29));
    vlSelfRef.core__DOT__flush_for_if = 0U;
    vlSelfRef.core__DOT__stall = 0U;
    if ((1U & (~ (IData)(vlSelfRef.core__DOT__ex_branch_taken)))) {
        if ((1U & (~ (IData)(vlSelfRef.core__DOT__id_jal_enb)))) {
            if (vlSelfRef.core__DOT__ex_load_enb) {
                vlSelfRef.core__DOT__stall = 1U;
            }
        }
    }
    vlSelfRef.core__DOT__flush = 0U;
    if (vlSelfRef.core__DOT__ex_branch_taken) {
        vlSelfRef.core__DOT__flush_for_if = 1U;
        vlSelfRef.core__DOT__flush = 1U;
    } else {
        if (vlSelfRef.core__DOT__id_jal_enb) {
            vlSelfRef.core__DOT__flush_for_if = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.core__DOT__id_jal_enb)))) {
            if (vlSelfRef.core__DOT__ex_load_enb) {
                vlSelfRef.core__DOT__flush = 1U;
            }
        }
    }
    __Vtableidx1 = (((8U & ((~ ((IData)(vlSelfRef.core__DOT__id_jal_enb) 
                                | (IData)(vlSelfRef.core__DOT__ex_branch_taken))) 
                            << 3U)) | ((IData)(vlSelfRef.core__DOT__id_jalr) 
                                       << 2U)) | ((
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.core__DOT__id_instruction)) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.core__DOT__ex_branch_taken)));
    vlSelfRef.core__DOT__ex_sel_bit_mux = Vcore__ConstPool__TABLE_hcace54c4_0
        [__Vtableidx1];
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37) 
           & (IData)((0x2000U == (0x3000U & vlSelfRef.core__DOT__id_instruction))));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37) 
           & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 6U)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17) 
           & (vlSelfRef.core__DOT__id_instruction >> 6U));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xcU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xcU));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xcU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xcU));
    vlSelfRef.core__DOT__if_pc_w = ((2U & (IData)(vlSelfRef.core__DOT__ex_sel_bit_mux))
                                     ? ((1U & (IData)(vlSelfRef.core__DOT__ex_sel_bit_mux))
                                         ? vlSelfRef.core__DOT__ex_pc_plus_imm
                                         : (vlSelfRef.core__DOT__id_current_pc 
                                            + vlSelfRef.core__DOT__id_imm))
                                     : ((1U & (IData)(vlSelfRef.core__DOT__ex_sel_bit_mux))
                                         ? (vlSelfRef.core__DOT__id_imm 
                                            + ((2U 
                                                == (IData)(vlSelfRef.core__DOT__forward_c))
                                                ? vlSelfRef.core__DOT__mem_alu_result
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__forward_c))
                                                    ? vlSelfRef.core__DOT__wb_data
                                                    : vlSelfRef.core__DOT__id_rs1_data)))
                                         : ((IData)(4U) 
                                            + vlSelfRef.core__DOT__fetch__DOT__pc)));
    vlSelfRef.core__DOT__id_lw = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34) 
                                  & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    vlSelfRef.core__DOT__id_lbu = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34) 
                                   & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    vlSelfRef.core__DOT__id_lhu = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35) 
                                   & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    vlSelfRef.core__DOT__id_lh = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35) 
                                  & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    vlSelfRef.core__DOT__id_sh = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39) 
                                  & ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36) 
                                     & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xcU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xcU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xcU));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xdU));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xdU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xdU));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xdU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xdU));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xdU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xdU));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xdU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12));
    vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18 
        = ((IData)(vlSelfRef.core__DOT__id_lb) | (IData)(vlSelfRef.core__DOT__id_lh));
    vlSelfRef.core__DOT__id_sw = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38) 
                                  & ((vlSelfRef.core__DOT__id_instruction 
                                      >> 0xdU) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31)));
    vlSelfRef.core__DOT__id_sb = ((~ (vlSelfRef.core__DOT__id_instruction 
                                      >> 0xdU)) & ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38) 
                                                   & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31)));
    vlSelfRef.core__DOT__id_bltu = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_25));
    vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xdU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28));
    vlSelfRef.core__DOT__id_bgeu = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_25));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xdU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22));
    vlSelfRef.core__DOT__id_sltr = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    vlSelfRef.core__DOT__id_orr = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9) 
                                   & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    vlSelfRef.core__DOT__id_xorr = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xeU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48));
    vlSelfRef.core__DOT__id_sltur = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10) 
                                     & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    vlSelfRef.core__DOT__id_andr = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    vlSelfRef.core__DOT__id_sllr = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xeU));
    vlSelfRef.core__DOT__id_slti = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    vlSelfRef.core__DOT__id_ori = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13) 
                                   & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    vlSelfRef.core__DOT__id_xori = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42 
        = ((~ (vlSelfRef.core__DOT__id_instruction 
               >> 0xeU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43));
    vlSelfRef.core__DOT__id_sltui = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14) 
                                     & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    vlSelfRef.core__DOT__id_andi = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33));
    vlSelfRef.core__DOT__id_slli = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15 
        = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41) 
           & (vlSelfRef.core__DOT__id_instruction >> 0xeU));
    vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19 
        = ((IData)(vlSelfRef.core__DOT__id_sb) | (IData)(vlSelfRef.core__DOT__id_sh));
    vlSelfRef.core__DOT__id_blt = ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27) 
                                   & (vlSelfRef.core__DOT__id_instruction 
                                      >> 0xeU));
    vlSelfRef.core__DOT__id_bge = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26) 
                                   & (vlSelfRef.core__DOT__id_instruction 
                                      >> 0xeU));
    vlSelfRef.core__DOT__id_bne = ((~ (vlSelfRef.core__DOT__id_instruction 
                                       >> 0xeU)) & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26));
    vlSelfRef.core__DOT__id_addr = ((~ (vlSelfRef.core__DOT__id_instruction 
                                        >> 0x1eU)) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47));
    vlSelfRef.core__DOT__id_sub = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47) 
                                   & (vlSelfRef.core__DOT__id_instruction 
                                      >> 0x1eU));
    vlSelfRef.core__DOT__id_srlr = ((~ (vlSelfRef.core__DOT__id_instruction 
                                        >> 0x1eU)) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11));
    vlSelfRef.core__DOT__id_srar = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11) 
                                    & (vlSelfRef.core__DOT__id_instruction 
                                       >> 0x1eU));
    vlSelfRef.core__DOT__control_unit__DOT__orrr = 
        ((IData)(vlSelfRef.core__DOT__id_orr) | (IData)(vlSelfRef.core__DOT__id_ori));
    vlSelfRef.core__DOT__id_addi = ((~ (vlSelfRef.core__DOT__id_instruction 
                                        >> 0x1eU)) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42));
    vlSelfRef.core__DOT__id_addi2 = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42) 
                                     & (vlSelfRef.core__DOT__id_instruction 
                                        >> 0x1eU));
    vlSelfRef.core__DOT__control_unit__DOT__sltu = 
        ((IData)(vlSelfRef.core__DOT__id_sltur) | (IData)(vlSelfRef.core__DOT__id_sltui));
    vlSelfRef.core__DOT__control_unit__DOT__andd = 
        ((IData)(vlSelfRef.core__DOT__id_andr) | (IData)(vlSelfRef.core__DOT__id_andi));
    vlSelfRef.core__DOT__id_srli = ((~ (vlSelfRef.core__DOT__id_instruction 
                                        >> 0x1eU)) 
                                    & (IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15));
    vlSelfRef.core__DOT__id_srai = ((IData)(core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15) 
                                    & (vlSelfRef.core__DOT__id_instruction 
                                       >> 0x1eU));
    vlSelfRef.core__DOT__id_store_enb = ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19) 
                                         | (IData)(vlSelfRef.core__DOT__id_sw));
    vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23 
        = (((~ (vlSelfRef.core__DOT__id_instruction 
                >> 0xeU)) & (IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27)) 
           | (IData)(vlSelfRef.core__DOT__id_bne));
    vlSelfRef.core__DOT__control_unit__DOT__srl = ((IData)(vlSelfRef.core__DOT__id_srlr) 
                                                   | (IData)(vlSelfRef.core__DOT__id_srli));
    vlSelfRef.core__DOT__control_unit__DOT__sra = ((IData)(vlSelfRef.core__DOT__id_srar) 
                                                   | (IData)(vlSelfRef.core__DOT__id_srai));
    vlSelfRef.core__DOT__id_branch_enb = ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23) 
                                          | ((IData)(vlSelfRef.core__DOT__id_blt) 
                                             | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                                | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                                   | (IData)(vlSelfRef.core__DOT__id_bgeu)))));
}

VL_INLINE_OPT void Vcore___024root___nba_comb__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_comb__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core__DOT__mem_read_data = vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__mem
        [(0x1fffU & vlSelfRef.core__DOT__mem_alu_result)];
}

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf);

bool Vcore___024root___eval_phase__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcore___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcore___024root___eval_phase__nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcore___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcore___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcore___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
