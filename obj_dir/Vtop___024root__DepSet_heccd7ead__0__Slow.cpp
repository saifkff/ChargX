// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x696f6e73U;
    __Vtemp_1[2U] = 0x72756374U;
    __Vtemp_1[3U] = 0x696e7374U;
    VL_READMEM_N(true, 32, 4097, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.top__DOT__fetch__DOT__IM__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hd8a1beef_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hcace54c4_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50 = 0;
    CData/*0:0*/ top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_51;
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_51 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.if_pc_out = ((IData)(4U) + vlSelfRef.top__DOT__fetch__DOT__pc);
    vlSelfRef.id_rd = (0x1fU & (vlSelfRef.id_instruction 
                                >> 7U));
    vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit 
        = ((((IData)(vlSelfRef.top__DOT__ex_sb) << 3U) 
            | ((IData)(vlSelfRef.top__DOT__ex_sh) << 2U)) 
           | ((IData)(vlSelfRef.top__DOT__ex_sw) << 1U));
    vlSelfRef.top__DOT__immediate_generator__DOT__sel 
        = ((0x40U & vlSelfRef.id_instruction) ? ((0x20U 
                                                  & vlSelfRef.id_instruction)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelfRef.id_instruction)
                                                   ? 0xfU
                                                   : 
                                                  ((8U 
                                                    & vlSelfRef.id_instruction)
                                                    ? 
                                                   ((4U 
                                                     & vlSelfRef.id_instruction)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.id_instruction)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.id_instruction)
                                                       ? 4U
                                                       : 0xfU)
                                                      : 0xfU)
                                                     : 0xfU)
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.id_instruction)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.id_instruction)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.id_instruction)
                                                       ? 7U
                                                       : 0xfU)
                                                      : 0xfU)
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.id_instruction)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.id_instruction)
                                                       ? 2U
                                                       : 0xfU)
                                                      : 0xfU))))
                                                  : 0xfU)
            : ((0x20U & vlSelfRef.id_instruction) ? 
               ((0x10U & vlSelfRef.id_instruction) ? 
                ((8U & vlSelfRef.id_instruction) ? 0xfU
                  : ((4U & vlSelfRef.id_instruction)
                      ? ((2U & vlSelfRef.id_instruction)
                          ? ((1U & vlSelfRef.id_instruction)
                              ? 3U : 0xfU) : 0xfU) : 
                     ((2U & vlSelfRef.id_instruction)
                       ? ((1U & vlSelfRef.id_instruction)
                           ? 5U : 0xfU) : 0xfU))) : 
                ((8U & vlSelfRef.id_instruction) ? 0xfU
                  : ((4U & vlSelfRef.id_instruction)
                      ? 0xfU : ((2U & vlSelfRef.id_instruction)
                                 ? ((1U & vlSelfRef.id_instruction)
                                     ? 1U : 0xfU) : 0xfU))))
                : ((0x10U & vlSelfRef.id_instruction)
                    ? ((8U & vlSelfRef.id_instruction)
                        ? 0xfU : ((4U & vlSelfRef.id_instruction)
                                   ? ((2U & vlSelfRef.id_instruction)
                                       ? ((1U & vlSelfRef.id_instruction)
                                           ? 3U : 0xfU)
                                       : 0xfU) : ((2U 
                                                   & vlSelfRef.id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.id_instruction)
                                                    ? 0U
                                                    : 0xfU)
                                                   : 0xfU)))
                    : ((8U & vlSelfRef.id_instruction)
                        ? 0xfU : ((4U & vlSelfRef.id_instruction)
                                   ? 0xfU : ((2U & vlSelfRef.id_instruction)
                                              ? ((1U 
                                                  & vlSelfRef.id_instruction)
                                                  ? 6U
                                                  : 0xfU)
                                              : 0xfU))))));
    vlSelfRef.if_instruction = ((0x1000U >= (0x1fffU 
                                             & (vlSelfRef.top__DOT__fetch__DOT__pc 
                                                >> 2U)))
                                 ? vlSelfRef.top__DOT__fetch__DOT__IM__DOT__memory
                                [(0x1fffU & (vlSelfRef.top__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                 : 0U);
    vlSelfRef.mem_read_data = ((IData)(vlSelfRef.top__DOT__mem_load_enb)
                                ? ((IData)(vlSelfRef.top__DOT__mem_lb)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (((0x1000U 
                                                         >= 
                                                         (0x1fffU 
                                                          & vlSelfRef.top__DOT__mem_alu_result))
                                                         ? 
                                                        vlSelfRef.top__DOT__data_mem__DOT__memory
                                                        [
                                                        (0x1fffU 
                                                         & vlSelfRef.top__DOT__mem_alu_result)]
                                                         : 0U) 
                                                       >> 7U)))) 
                                        << 8U) | ((0x1000U 
                                                   >= 
                                                   (0x1fffU 
                                                    & vlSelfRef.top__DOT__mem_alu_result))
                                                   ? 
                                                  vlSelfRef.top__DOT__data_mem__DOT__memory
                                                  [
                                                  (0x1fffU 
                                                   & vlSelfRef.top__DOT__mem_alu_result)]
                                                   : 0U))
                                    : ((IData)(vlSelfRef.top__DOT__mem_lh)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (((0x1000U 
                                                             >= 
                                                             (0x1fffU 
                                                              & ((IData)(1U) 
                                                                 + vlSelfRef.top__DOT__mem_alu_result)))
                                                             ? 
                                                            vlSelfRef.top__DOT__data_mem__DOT__memory
                                                            [
                                                            (0x1fffU 
                                                             & ((IData)(1U) 
                                                                + vlSelfRef.top__DOT__mem_alu_result))]
                                                             : 0U) 
                                                           >> 7U)))) 
                                            << 0x10U) 
                                           | ((((0x1000U 
                                                 >= 
                                                 (0x1fffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.top__DOT__mem_alu_result)))
                                                 ? 
                                                vlSelfRef.top__DOT__data_mem__DOT__memory
                                                [(0x1fffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.top__DOT__mem_alu_result))]
                                                 : 0U) 
                                               << 8U) 
                                              | ((0x1000U 
                                                  >= 
                                                  (0x1fffU 
                                                   & vlSelfRef.top__DOT__mem_alu_result))
                                                  ? 
                                                 vlSelfRef.top__DOT__data_mem__DOT__memory
                                                 [(0x1fffU 
                                                   & vlSelfRef.top__DOT__mem_alu_result)]
                                                  : 0U)))
                                        : ((IData)(vlSelfRef.top__DOT__mem_lw)
                                            ? (((((0x1000U 
                                                   >= 
                                                   (0x1fffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.top__DOT__mem_alu_result)))
                                                   ? 
                                                  vlSelfRef.top__DOT__data_mem__DOT__memory
                                                  [
                                                  (0x1fffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.top__DOT__mem_alu_result))]
                                                   : 0U) 
                                                 << 0x18U) 
                                                | (((0x1000U 
                                                     >= 
                                                     (0x1fffU 
                                                      & ((IData)(2U) 
                                                         + vlSelfRef.top__DOT__mem_alu_result)))
                                                     ? 
                                                    vlSelfRef.top__DOT__data_mem__DOT__memory
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(2U) 
                                                        + vlSelfRef.top__DOT__mem_alu_result))]
                                                     : 0U) 
                                                   << 0x10U)) 
                                               | ((((0x1000U 
                                                     >= 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + vlSelfRef.top__DOT__mem_alu_result)))
                                                     ? 
                                                    vlSelfRef.top__DOT__data_mem__DOT__memory
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.top__DOT__mem_alu_result))]
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((0x1000U 
                                                      >= 
                                                      (0x1fffU 
                                                       & vlSelfRef.top__DOT__mem_alu_result))
                                                      ? 
                                                     vlSelfRef.top__DOT__data_mem__DOT__memory
                                                     [
                                                     (0x1fffU 
                                                      & vlSelfRef.top__DOT__mem_alu_result)]
                                                      : 0U)))
                                            : ((IData)(vlSelfRef.top__DOT__mem_lbu)
                                                ? (
                                                   (0x1000U 
                                                    >= 
                                                    (0x1fffU 
                                                     & vlSelfRef.top__DOT__mem_alu_result))
                                                    ? 
                                                   vlSelfRef.top__DOT__data_mem__DOT__memory
                                                   [
                                                   (0x1fffU 
                                                    & vlSelfRef.top__DOT__mem_alu_result)]
                                                    : 0U)
                                                : ((IData)(vlSelfRef.top__DOT__mem_lhu)
                                                    ? 
                                                   ((((0x1000U 
                                                       >= 
                                                       (0x1fffU 
                                                        & ((IData)(1U) 
                                                           + vlSelfRef.top__DOT__mem_alu_result)))
                                                       ? 
                                                      vlSelfRef.top__DOT__data_mem__DOT__memory
                                                      [
                                                      (0x1fffU 
                                                       & ((IData)(1U) 
                                                          + vlSelfRef.top__DOT__mem_alu_result))]
                                                       : 0U) 
                                                     << 8U) 
                                                    | ((0x1000U 
                                                        >= 
                                                        (0x1fffU 
                                                         & vlSelfRef.top__DOT__mem_alu_result))
                                                        ? 
                                                       vlSelfRef.top__DOT__data_mem__DOT__memory
                                                       [
                                                       (0x1fffU 
                                                        & vlSelfRef.top__DOT__mem_alu_result)]
                                                        : 0U))
                                                    : 0U)))))
                                : 0U);
    vlSelfRef.id_rs2 = (0x1fU & (vlSelfRef.id_instruction 
                                 >> 0x14U));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.id_instruction)));
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36 
        = (IData)((0x1000U == (0x3000U & vlSelfRef.id_instruction)));
    vlSelfRef.id_rs1 = (0x1fU & (vlSelfRef.id_instruction 
                                 >> 0xfU));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34 
        = (IData)((0x4000U == (0x40004000U & vlSelfRef.id_instruction)));
    vlSelfRef.forward_a = (((((IData)(vlSelfRef.top__DOT__mem_store_enb) 
                              | (IData)(vlSelfRef.top__DOT__mem_wenb)) 
                             & (0U != (IData)(vlSelfRef.top__DOT__mem_rd))) 
                            & ((IData)(vlSelfRef.top__DOT__mem_rd) 
                               == (IData)(vlSelfRef.top__DOT__ex_rs1)))
                            ? 2U : ((((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                      & (0U != (IData)(vlSelfRef.wb_rd))) 
                                     & ((IData)(vlSelfRef.wb_rd) 
                                        == (IData)(vlSelfRef.top__DOT__ex_rs1)))
                                     ? 1U : 0U));
    vlSelfRef.forward_b = (((((IData)(vlSelfRef.top__DOT__mem_store_enb) 
                              | (IData)(vlSelfRef.top__DOT__mem_wenb)) 
                             & (0U != (IData)(vlSelfRef.top__DOT__mem_rd))) 
                            & ((IData)(vlSelfRef.top__DOT__mem_rd) 
                               == (IData)(vlSelfRef.top__DOT__ex_rs2)))
                            ? 2U : ((((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                      & (0U != (IData)(vlSelfRef.wb_rd))) 
                                     & ((IData)(vlSelfRef.wb_rd) 
                                        == (IData)(vlSelfRef.top__DOT__ex_rs2)))
                                     ? 1U : 0U));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33 
        = (IData)((4U == (0xcU & vlSelfRef.id_instruction)));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31 
        = (IData)((0x20U == (0x60U & vlSelfRef.id_instruction)));
    __Vtableidx2 = ((((IData)(vlSelfRef.top__DOT__wb_lui_enb) 
                      << 4U) | (((IData)(vlSelfRef.top__DOT__wb_auipc_wenb) 
                                 << 3U) | ((IData)(vlSelfRef.top__DOT__wb_jal_enb) 
                                           << 2U))) 
                    | (((IData)(vlSelfRef.top__DOT__wb_load_enb) 
                        << 1U) | (1U & (~ ((IData)(vlSelfRef.top__DOT__wb_auipc_wenb) 
                                           | ((IData)(vlSelfRef.top__DOT__wb_lui_enb) 
                                              | ((IData)(vlSelfRef.top__DOT__wb_jal_enb) 
                                                 | (IData)(vlSelfRef.top__DOT__wb_load_enb))))))));
    vlSelfRef.top__DOT__pri_enc_sel = Vtop__ConstPool__TABLE_hd8a1beef_0
        [__Vtableidx2];
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32 
        = (IData)((0U == (0x40004000U & vlSelfRef.id_instruction)));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30 
        = (IData)((0U == (0x60U & vlSelfRef.id_instruction)));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1 
        = (IData)((0U == (0xcU & vlSelfRef.id_instruction)));
    vlSelfRef.top__DOT__id_imm = ((8U & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                   ? 0U : ((4U & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.id_instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.id_instruction 
                                                       >> 0x14U))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.id_instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.id_instruction 
                                                       >> 0x14U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                                    ? 0U
                                                    : 
                                                   ((((- (IData)(
                                                                 (vlSelfRef.id_instruction 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | (0x100000U 
                                                        & (vlSelfRef.id_instruction 
                                                           >> 0xbU))) 
                                                    | (((0xff000U 
                                                         & vlSelfRef.id_instruction) 
                                                        | (0x800U 
                                                           & (vlSelfRef.id_instruction 
                                                              >> 9U))) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.id_instruction 
                                                             >> 0x14U))))))
                                            : ((2U 
                                                & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelfRef.id_instruction)
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.id_instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | (((0x1000U 
                                                         & (vlSelfRef.id_instruction 
                                                            >> 0x13U)) 
                                                        | (0x800U 
                                                           & (vlSelfRef.id_instruction 
                                                              << 4U))) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.id_instruction 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.id_instruction 
                                                                >> 7U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__immediate_generator__DOT__sel))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.id_instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelfRef.id_instruction 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelfRef.id_instruction 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.id_instruction 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelfRef.id_instruction 
                                                       >> 0x14U))))));
    vlSelfRef.rvfi_o_valid_0 = (0U != vlSelfRef.if_instruction);
    vlSelfRef.id_rs2_data = ((0U == (IData)(vlSelfRef.id_rs2))
                              ? 0U : vlSelfRef.top__DOT__regfile__DOT__registers
                             [vlSelfRef.id_rs2]);
    vlSelfRef.id_rs1_data = ((0U == (IData)(vlSelfRef.id_rs1))
                              ? 0U : vlSelfRef.top__DOT__regfile__DOT__registers
                             [vlSelfRef.id_rs1]);
    vlSelfRef.top__DOT__forward_c = (((((IData)(vlSelfRef.id_rs1) 
                                        == (IData)(vlSelfRef.top__DOT__mem_rd)) 
                                       & (0U != (IData)(vlSelfRef.top__DOT__mem_rd))) 
                                      & (IData)(vlSelfRef.top__DOT__mem_store_enb))
                                      ? 2U : ((((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.wb_rd))) 
                                               & ((IData)(vlSelfRef.wb_rd) 
                                                  == (IData)(vlSelfRef.id_rs1)))
                                               ? 1U
                                               : 0U));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33) 
           & (vlSelfRef.id_instruction >> 4U));
    vlSelfRef.wb_data = ((4U & (IData)(vlSelfRef.top__DOT__pri_enc_sel))
                          ? ((2U & (IData)(vlSelfRef.top__DOT__pri_enc_sel))
                              ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__pri_enc_sel))
                                       ? 0U : vlSelfRef.top__DOT__ex_imm))
                          : ((2U & (IData)(vlSelfRef.top__DOT__pri_enc_sel))
                              ? ((1U & (IData)(vlSelfRef.top__DOT__pri_enc_sel))
                                  ? vlSelfRef.top__DOT__wb_pc_plus_imm
                                  : vlSelfRef.top__DOT__wb_jal_return_add)
                              : ((1U & (IData)(vlSelfRef.top__DOT__pri_enc_sel))
                                  ? vlSelfRef.top__DOT__wb_mem_data
                                  : vlSelfRef.top__DOT__wb_alu_result)));
    vlSelfRef.top__DOT__id_jalr = (IData)((((0x60U 
                                             == (0x3070U 
                                                 & vlSelfRef.id_instruction)) 
                                            & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33)) 
                                           & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41 
        = ((~ (vlSelfRef.id_instruction >> 4U)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_1) 
           & (vlSelfRef.id_instruction >> 4U));
    vlSelfRef.top__DOT__id_lui_enb = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21) 
                                      & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    vlSelfRef.top__DOT__id_auipc_wenb = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_21) 
                                         & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30));
    vlSelfRef.top__DOT__ex_rs1_forwarded = ((2U == (IData)(vlSelfRef.forward_a))
                                             ? vlSelfRef.top__DOT__mem_alu_result
                                             : ((1U 
                                                 == (IData)(vlSelfRef.forward_a))
                                                 ? vlSelfRef.wb_data
                                                 : vlSelfRef.top__DOT__ex_rs1_data));
    vlSelfRef.top__DOT__ex_rs2_forwarded = ((2U == (IData)(vlSelfRef.forward_b))
                                             ? vlSelfRef.top__DOT__mem_alu_result
                                             : ((1U 
                                                 == (IData)(vlSelfRef.forward_b))
                                                 ? vlSelfRef.wb_data
                                                 : vlSelfRef.top__DOT__ex_rs2_data));
    vlSelfRef.top__DOT__id_jal_enb = ((0x6fU == (0x7fU 
                                                 & vlSelfRef.id_instruction)) 
                                      | (IData)(vlSelfRef.top__DOT__id_jalr));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41) 
           & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_41) 
           & (vlSelfRef.id_instruction >> 5U));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_51 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2) 
           & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_2) 
           & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30));
    vlSelfRef.top__DOT__ex_alu_data_B = ((IData)(vlSelfRef.top__DOT__ex_rs2_imm_sel)
                                          ? vlSelfRef.top__DOT__ex_imm
                                          : vlSelfRef.top__DOT__ex_rs2_forwarded);
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38) 
           & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37 
        = ((~ (vlSelfRef.id_instruction >> 0xcU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_38));
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40 
        = ((~ (vlSelfRef.id_instruction >> 6U)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_17) 
           & (vlSelfRef.id_instruction >> 6U));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50 
        = ((~ (vlSelfRef.id_instruction >> 0xcU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_51));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_51) 
           & (vlSelfRef.id_instruction >> 0xcU));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45 
        = ((~ (vlSelfRef.id_instruction >> 0xcU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_46) 
           & (vlSelfRef.id_instruction >> 0xcU));
    vlSelfRef.top__DOT__ex_branch_taken = 0U;
    if ((8U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))) {
                    if ((vlSelfRef.top__DOT__ex_rs1_forwarded 
                         >= vlSelfRef.top__DOT__ex_alu_data_B)) {
                        vlSelfRef.ex_alu_result = 1U;
                        vlSelfRef.top__DOT__ex_branch_taken = 1U;
                    } else {
                        vlSelfRef.ex_alu_result = 0U;
                        vlSelfRef.top__DOT__ex_branch_taken = 0U;
                    }
                } else if ((vlSelfRef.top__DOT__ex_rs1_forwarded 
                            < vlSelfRef.top__DOT__ex_alu_data_B)) {
                    vlSelfRef.ex_alu_result = 1U;
                    vlSelfRef.top__DOT__ex_branch_taken = 1U;
                } else {
                    vlSelfRef.ex_alu_result = 0U;
                    vlSelfRef.top__DOT__ex_branch_taken = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))) {
                if (VL_GTES_III(32, vlSelfRef.top__DOT__ex_rs1_forwarded, vlSelfRef.top__DOT__ex_alu_data_B)) {
                    vlSelfRef.ex_alu_result = 1U;
                    vlSelfRef.top__DOT__ex_branch_taken = 1U;
                } else {
                    vlSelfRef.ex_alu_result = 0U;
                    vlSelfRef.top__DOT__ex_branch_taken = 0U;
                }
            } else if (VL_LTS_III(32, vlSelfRef.top__DOT__ex_rs1_forwarded, vlSelfRef.top__DOT__ex_alu_data_B)) {
                vlSelfRef.ex_alu_result = 1U;
                vlSelfRef.top__DOT__ex_branch_taken = 1U;
            } else {
                vlSelfRef.ex_alu_result = 0U;
                vlSelfRef.top__DOT__ex_branch_taken = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))) {
                if ((vlSelfRef.top__DOT__ex_rs1_forwarded 
                     != vlSelfRef.top__DOT__ex_alu_data_B)) {
                    vlSelfRef.ex_alu_result = 1U;
                    vlSelfRef.top__DOT__ex_branch_taken = 1U;
                } else {
                    vlSelfRef.ex_alu_result = 0U;
                    vlSelfRef.top__DOT__ex_branch_taken = 0U;
                }
            } else if ((vlSelfRef.top__DOT__ex_rs1_forwarded 
                        == vlSelfRef.top__DOT__ex_alu_data_B)) {
                vlSelfRef.ex_alu_result = 1U;
                vlSelfRef.top__DOT__ex_branch_taken = 1U;
            } else {
                vlSelfRef.ex_alu_result = 0U;
                vlSelfRef.top__DOT__ex_branch_taken = 0U;
            }
        } else {
            vlSelfRef.ex_alu_result = ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__ex_rs1_forwarded, 
                                                         (0x1fU 
                                                          & vlSelfRef.top__DOT__ex_alu_data_B))
                                        : (vlSelfRef.top__DOT__ex_rs1_forwarded 
                                           - vlSelfRef.top__DOT__ex_alu_data_B));
        }
    } else {
        vlSelfRef.ex_alu_result = ((4U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                    ? ((2U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                            ? (vlSelfRef.top__DOT__ex_rs1_forwarded 
                                               & vlSelfRef.top__DOT__ex_alu_data_B)
                                            : (vlSelfRef.top__DOT__ex_rs1_forwarded 
                                               | vlSelfRef.top__DOT__ex_alu_data_B))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                            ? (vlSelfRef.top__DOT__ex_rs1_forwarded 
                                               >> (0x1fU 
                                                   & vlSelfRef.top__DOT__ex_alu_data_B))
                                            : (vlSelfRef.top__DOT__ex_rs1_forwarded 
                                               ^ vlSelfRef.top__DOT__ex_alu_data_B)))
                                    : ((2U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                            ? ((vlSelfRef.top__DOT__ex_rs1_forwarded 
                                                < vlSelfRef.top__DOT__ex_alu_data_B)
                                                ? 1U
                                                : 0U)
                                            : ((vlSelfRef.top__DOT__ex_rs1_forwarded 
                                                < vlSelfRef.top__DOT__ex_alu_data_B)
                                                ? 1U
                                                : 0U))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__ex_alu_sel))
                                            ? (vlSelfRef.top__DOT__ex_rs1_forwarded 
                                               << (0x1fU 
                                                   & vlSelfRef.top__DOT__ex_alu_data_B))
                                            : (vlSelfRef.top__DOT__ex_rs1_forwarded 
                                               + vlSelfRef.top__DOT__ex_alu_data_B))));
    }
    vlSelfRef.top__DOT__id_lhu = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35) 
                                  & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    vlSelfRef.top__DOT__id_lh = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_35) 
                                 & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    vlSelfRef.top__DOT__id_lb = ((~ (vlSelfRef.id_instruction 
                                     >> 0xdU)) & ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37) 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_37) 
           & (vlSelfRef.id_instruction >> 0xdU));
    vlSelfRef.top__DOT__id_sh = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40) 
                                 & ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36) 
                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39 
        = ((~ (vlSelfRef.id_instruction >> 0xcU)) & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29 
        = ((~ (vlSelfRef.id_instruction >> 0xcU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_22) 
           & (vlSelfRef.id_instruction >> 0xcU));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50) 
           & (vlSelfRef.id_instruction >> 0xdU));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49 
        = ((~ (vlSelfRef.id_instruction >> 0xdU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_50));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8) 
           & (vlSelfRef.id_instruction >> 0xdU));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47 
        = ((~ (vlSelfRef.id_instruction >> 0xdU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_8));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45) 
           & (vlSelfRef.id_instruction >> 0xdU));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44 
        = ((~ (vlSelfRef.id_instruction >> 0xdU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_45));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12) 
           & (vlSelfRef.id_instruction >> 0xdU));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42 
        = ((~ (vlSelfRef.id_instruction >> 0xdU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_12));
    vlSelfRef.top__DOT__flush_for_if = 0U;
    vlSelfRef.stall = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__ex_branch_taken)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__id_jal_enb)))) {
            if (((IData)(vlSelfRef.top__DOT__ex_load_enb) 
                 & ((((IData)(vlSelfRef.top__DOT__ex_rd) 
                      == (IData)(vlSelfRef.id_rs1)) 
                     & (0U != (IData)(vlSelfRef.top__DOT__ex_rd))) 
                    | (((IData)(vlSelfRef.top__DOT__ex_rd) 
                        == (IData)(vlSelfRef.id_rs2)) 
                       & (0U != (IData)(vlSelfRef.top__DOT__ex_rd)))))) {
                vlSelfRef.stall = 1U;
            }
        }
    }
    vlSelfRef.flush = 0U;
    if (vlSelfRef.top__DOT__ex_branch_taken) {
        vlSelfRef.top__DOT__flush_for_if = 1U;
        vlSelfRef.flush = 1U;
    } else {
        if (vlSelfRef.top__DOT__id_jal_enb) {
            vlSelfRef.top__DOT__flush_for_if = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__id_jal_enb)))) {
            if (((IData)(vlSelfRef.top__DOT__ex_load_enb) 
                 & ((((IData)(vlSelfRef.top__DOT__ex_rd) 
                      == (IData)(vlSelfRef.id_rs1)) 
                     & (0U != (IData)(vlSelfRef.top__DOT__ex_rd))) 
                    | (((IData)(vlSelfRef.top__DOT__ex_rd) 
                        == (IData)(vlSelfRef.id_rs2)) 
                       & (0U != (IData)(vlSelfRef.top__DOT__ex_rd)))))) {
                vlSelfRef.flush = 1U;
            }
        }
    }
    __Vtableidx1 = (((8U & ((~ ((IData)(vlSelfRef.top__DOT__id_jal_enb) 
                                | (IData)(vlSelfRef.top__DOT__ex_branch_taken))) 
                            << 3U)) | ((IData)(vlSelfRef.top__DOT__id_jalr) 
                                       << 2U)) | ((
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.id_instruction)) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.top__DOT__ex_branch_taken)));
    vlSelfRef.top__DOT__ex_sel_bit_mux = Vtop__ConstPool__TABLE_hcace54c4_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19 
        = ((IData)(vlSelfRef.top__DOT__id_lb) | (IData)(vlSelfRef.top__DOT__id_lh));
    vlSelfRef.top__DOT__id_lw = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18) 
                                 & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    vlSelfRef.top__DOT__id_lbu = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18) 
                                  & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    vlSelfRef.top__DOT__id_sw = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39) 
                                 & ((vlSelfRef.id_instruction 
                                     >> 0xdU) & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    vlSelfRef.top__DOT__id_sb = ((~ (vlSelfRef.id_instruction 
                                     >> 0xdU)) & ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39) 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    vlSelfRef.top__DOT__id_bltu = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29) 
                                   & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26));
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28 
        = ((~ (vlSelfRef.id_instruction >> 0xdU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29));
    vlSelfRef.top__DOT__id_bgeu = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23) 
                                   & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_26));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27 
        = ((~ (vlSelfRef.id_instruction >> 0xdU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23));
    vlSelfRef.top__DOT__id_sltr = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9) 
                                   & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    vlSelfRef.top__DOT__id_orr = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_9) 
                                  & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    vlSelfRef.top__DOT__id_xorr = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49) 
                                   & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48 
        = ((~ (vlSelfRef.id_instruction >> 0xeU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_49));
    vlSelfRef.top__DOT__id_sltur = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10) 
                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    vlSelfRef.top__DOT__id_andr = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_10) 
                                   & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    vlSelfRef.top__DOT__id_sllr = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47) 
                                   & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_47) 
           & (vlSelfRef.id_instruction >> 0xeU));
    vlSelfRef.top__DOT__id_slti = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13) 
                                   & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    vlSelfRef.top__DOT__id_ori = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_13) 
                                  & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    vlSelfRef.top__DOT__id_xori = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44) 
                                   & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43 
        = ((~ (vlSelfRef.id_instruction >> 0xeU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_44));
    vlSelfRef.top__DOT__id_sltui = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14) 
                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    vlSelfRef.top__DOT__id_andi = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_14) 
                                   & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
    vlSelfRef.top__DOT__id_slli = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42) 
                                   & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15 
        = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_42) 
           & (vlSelfRef.id_instruction >> 0xeU));
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20 
        = ((IData)(vlSelfRef.top__DOT__id_sb) | (IData)(vlSelfRef.top__DOT__id_sh));
    vlSelfRef.top__DOT__id_blt = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28) 
                                  & (vlSelfRef.id_instruction 
                                     >> 0xeU));
    vlSelfRef.top__DOT__id_bge = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27) 
                                  & (vlSelfRef.id_instruction 
                                     >> 0xeU));
    vlSelfRef.top__DOT__id_bne = ((~ (vlSelfRef.id_instruction 
                                      >> 0xeU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27));
    vlSelfRef.top__DOT__id_addr = ((~ (vlSelfRef.id_instruction 
                                       >> 0x1eU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48));
    vlSelfRef.top__DOT__id_sub = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_48) 
                                  & (vlSelfRef.id_instruction 
                                     >> 0x1eU));
    vlSelfRef.top__DOT__id_srlr = ((~ (vlSelfRef.id_instruction 
                                       >> 0x1eU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11));
    vlSelfRef.top__DOT__id_srar = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_11) 
                                   & (vlSelfRef.id_instruction 
                                      >> 0x1eU));
    vlSelfRef.top__DOT__control_unit__DOT__orrr = ((IData)(vlSelfRef.top__DOT__id_orr) 
                                                   | (IData)(vlSelfRef.top__DOT__id_ori));
    vlSelfRef.top__DOT__id_addi = ((~ (vlSelfRef.id_instruction 
                                       >> 0x1eU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43));
    vlSelfRef.top__DOT__id_addi2 = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_43) 
                                    & (vlSelfRef.id_instruction 
                                       >> 0x1eU));
    vlSelfRef.top__DOT__control_unit__DOT__sltu = ((IData)(vlSelfRef.top__DOT__id_sltur) 
                                                   | (IData)(vlSelfRef.top__DOT__id_sltui));
    vlSelfRef.top__DOT__control_unit__DOT__andd = ((IData)(vlSelfRef.top__DOT__id_andr) 
                                                   | (IData)(vlSelfRef.top__DOT__id_andi));
    vlSelfRef.top__DOT__id_srli = ((~ (vlSelfRef.id_instruction 
                                       >> 0x1eU)) & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15));
    vlSelfRef.top__DOT__id_srai = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_15) 
                                   & (vlSelfRef.id_instruction 
                                      >> 0x1eU));
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24 
        = (((~ (vlSelfRef.id_instruction >> 0xeU)) 
            & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28)) 
           | (IData)(vlSelfRef.top__DOT__id_bne));
    vlSelfRef.top__DOT__control_unit__DOT__srl = ((IData)(vlSelfRef.top__DOT__id_srlr) 
                                                  | (IData)(vlSelfRef.top__DOT__id_srli));
    vlSelfRef.top__DOT__control_unit__DOT__sra = ((IData)(vlSelfRef.top__DOT__id_srar) 
                                                  | (IData)(vlSelfRef.top__DOT__id_srai));
    vlSelfRef.top__DOT__id_branch_enb = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24) 
                                         | ((IData)(vlSelfRef.top__DOT__id_blt) 
                                            | ((IData)(vlSelfRef.top__DOT__id_bge) 
                                               | ((IData)(vlSelfRef.top__DOT__id_bltu) 
                                                  | (IData)(vlSelfRef.top__DOT__id_bgeu)))));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->if_instruction = VL_RAND_RESET_I(32);
    vlSelf->if_pc_out = VL_RAND_RESET_I(32);
    vlSelf->id_instruction = VL_RAND_RESET_I(32);
    vlSelf->id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->id_rd = VL_RAND_RESET_I(5);
    vlSelf->wb_rd = VL_RAND_RESET_I(5);
    vlSelf->id_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->id_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ex_alu_result = VL_RAND_RESET_I(32);
    vlSelf->mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->wb_data = VL_RAND_RESET_I(32);
    vlSelf->stall = VL_RAND_RESET_I(1);
    vlSelf->flush = VL_RAND_RESET_I(1);
    vlSelf->forward_a = VL_RAND_RESET_I(2);
    vlSelf->forward_b = VL_RAND_RESET_I(2);
    vlSelf->rvfi_o_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->rvfi_o_insn_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_rs1_addr_0 = VL_RAND_RESET_I(5);
    vlSelf->rvfi_o_rs2_addr_0 = VL_RAND_RESET_I(5);
    vlSelf->rvfi_o_rs1_rdata_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_rs2_rdata_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_rd_addr_0 = VL_RAND_RESET_I(5);
    vlSelf->rvfi_o_rd_wdata_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_pc_rdata_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_pc_wdata_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_mem_addr_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_mem_wmask_0 = VL_RAND_RESET_I(4);
    vlSelf->rvfi_o_mem_rdata_0 = VL_RAND_RESET_I(32);
    vlSelf->rvfi_o_mem_wdata_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_sel_bit_mux = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__wb_sel_bit_mux = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mem_sel_bit_mux = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ex_pc_plus_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_rs1_plus_imm_for_jalr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__id_pcplus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ex_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ex_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__id_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_alu_sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__id_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_branch_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_addr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sllr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sltr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sltur = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_xorr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_srlr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_srar = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_orr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_andr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_addi2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_sltui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_wenb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_rs2_imm_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_branch_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_alu_data_B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_pcplus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_rs1_forwarded = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_rs2_forwarded = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_store_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_store_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_load_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_wenb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_load_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_store_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_mem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_pcplus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_pc_plus_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_pc_plus_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pri_enc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem_jal_return_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wb_jal_return_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__flush_for_if = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__forward_c = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__id_current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__if_current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_jal_return_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ex_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_load_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_wenb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mem_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mem_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellinp__mux_rs2__sel_bit = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4097; ++__Vi0) {
        vlSelf->top__DOT__fetch__DOT__IM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__immediate_generator__DOT__sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__control_unit__DOT__selected_bits = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__control_unit__DOT__orrr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__andd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4097; ++__Vi0) {
        vlSelf->top__DOT__data_mem__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_he4250159__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_he4250159__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_h2a021f05__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_he4250159__2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_h2a021f05__1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_h2a00ff9d__0 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__data_mem__DOT____Vlvbound_h2a05cf58__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
