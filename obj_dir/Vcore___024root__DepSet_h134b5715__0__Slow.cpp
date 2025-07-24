// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___eval_static(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vcore___024root___eval_initial__TOP(Vcore___024root* vlSelf);
VL_ATTR_COLD void Vcore___024root____Vm_traceActivitySetAll(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore___024root___eval_initial__TOP(vlSelf);
    Vcore___024root____Vm_traceActivitySetAll(vlSelf);
}

extern const VlWide<10>/*319:0*/ Vcore__ConstPool__CONST_hdc74baf5_0;

VL_ATTR_COLD void Vcore___024root___eval_initial__TOP(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial__TOP\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 8192, 0, VL_CVT_PACK_STR_NW(10, Vcore__ConstPool__CONST_hdc74baf5_0)
                 ,  &(vlSelfRef.core__DOT__fetch__DOT__IM__DOT__memory)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 8192, 0, std::string{"/home/saif/Five-Stages-RISC-V-/dmem.hex"}
                 ,  &(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcore___024root___eval_final(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_final\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcore___024root___stl_sequent__TOP__0(vlSelf);
        Vcore___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vcore__ConstPool__TABLE_hd8a1beef_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vcore__ConstPool__TABLE_hcace54c4_0;

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.rvfi_o_valid_0 = vlSelfRef.core__DOT__mem_wb_ins_valid_pin;
    vlSelfRef.rvfi_o_insn_0 = vlSelfRef.core__DOT__instruction_final;
    vlSelfRef.rvfi_o_rs1_addr_0 = vlSelfRef.core__DOT__rs1_final;
    vlSelfRef.rvfi_o_rs2_addr_0 = vlSelfRef.core__DOT__rs2_final;
    vlSelfRef.rvfi_o_rs1_rdata_0 = vlSelfRef.core__DOT__rs1_data_final;
    vlSelfRef.rvfi_o_rs2_rdata_0 = vlSelfRef.core__DOT__rs2_data_final;
    vlSelfRef.rvfi_o_rd_addr_0 = vlSelfRef.core__DOT__wb_rd;
    vlSelfRef.rvfi_o_pc_rdata_0 = vlSelfRef.core__DOT__current_pc_final;
    vlSelfRef.rvfi_o_pc_wdata_0 = vlSelfRef.core__DOT__pc_w_final;
    vlSelfRef.rvfi_o_mem_addr_0 = vlSelfRef.core__DOT__wb_alu_result;
    vlSelfRef.rvfi_o_mem_wmask_0 = vlSelfRef.core__DOT__wmask_final;
    vlSelfRef.rvfi_o_mem_rdata_0 = vlSelfRef.core__DOT__wb_mem_data;
    vlSelfRef.rvfi_o_mem_wdata_0 = vlSelfRef.core__DOT__store_data_final;
    vlSelfRef.core__DOT__mem_read_data = vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__mem
        [(0x1fffU & vlSelfRef.core__DOT__mem_alu_result)];
    vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit 
        = ((((IData)(vlSelfRef.core__DOT__ex_sw) << 3U) 
            | ((IData)(vlSelfRef.core__DOT__ex_sh) 
               << 2U)) | ((IData)(vlSelfRef.core__DOT__ex_sb) 
                          << 1U));
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
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32 
        = (IData)((4U == (0xcU & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_30 
        = (IData)((0x20U == (0x60U & vlSelfRef.core__DOT__id_instruction)));
    core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_29 
        = (IData)((0U == (0x60U & vlSelfRef.core__DOT__id_instruction)));
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
    vlSelfRef.rvfi_o_rd_wdata_0 = vlSelfRef.core__DOT__wb_data;
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
    vlSelfRef.core__DOT__ex_alu_data_B = ((IData)(vlSelfRef.core__DOT__ex_rs2_imm_sel)
                                           ? vlSelfRef.core__DOT__ex_imm
                                           : vlSelfRef.core__DOT__ex_rs2_forwarded);
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

VL_ATTR_COLD void Vcore___024root___eval_triggers__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcore___024root____Vm_traceActivitySetAll(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vm_traceActivitySetAll\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
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
    vlSelf->core__DOT__id_instruction = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__wb_rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__id_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_alu_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ex_sel_bit_mux = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__wb_sel_bit_mux = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__mem_sel_bit_mux = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ex_pc_plus_imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_rs1_plus_imm_for_jalr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__id_pcplus4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__ex_rs1 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__ex_rs2 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__id_imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_alu_sel = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__id_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_branch_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sh = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_addr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sub = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sllr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sltr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sltur = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_xorr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_srlr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_srar = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_orr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_andr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_addi = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_addi2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_slli = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_slti = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_sltui = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_xori = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_srli = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_srai = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_ori = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_andi = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_jalr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_bne = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_blt = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_bge = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_bltu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_bgeu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_wenb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_rs2_imm_sel = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_branch_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_sb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_sh = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_sw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_alu_data_B = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_pcplus4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_rs1_forwarded = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_rs2_forwarded = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_store_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_store_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_store_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__wb_load_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__wb_jal_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__wb_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__wb_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_wenb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_load_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_sb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_sh = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_sw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_store_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__wb_mem_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__wb_alu_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__wb_pcplus4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_pc_plus_imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__wb_pc_plus_imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__pri_enc_sel = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__mem_jal_return_add = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__wb_jal_return_add = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__flush_for_if = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_lb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_lh = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_lhu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_lbu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_lw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__forward_c = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__id_current_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_current_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_current_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_jal_return_add = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_lb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_lh = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_lw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_lbu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_lhu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_load_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_lb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_lh = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_lw = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_lbu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_lhu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__wb_wenb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_rs1 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__mem_rs2 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__mem_auipc_wenb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_lui_enb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__id_ex_ins_valid_pin = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_mem_ins_valid_pin = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_wb_ins_valid_pin = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ex_wmask = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__wmask_final = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__ex_we = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__rs1_final = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__rs2_final = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__ex_instruction = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__instruction_final = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rs1_data_final = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rs2_data_final = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__current_pc_final = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__if_pc_w = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_current_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__id_pc_w = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ex_pc_w = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__pc_w_final = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__store_data_final = VL_RAND_RESET_I(32);
    vlSelf->core__DOT____Vcellinp__mux_rs2__sel_bit = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->core__DOT__fetch__DOT__IM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__if_id__DOT__ins_valid_pin_in = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__if_id__DOT__ins_valid_pin_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core__DOT__regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__immediate_generator__DOT__sel = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__control_unit__DOT__selected_bits = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__control_unit__DOT__orrr = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT__andd = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__data_mem__DOT__csb = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__data_mem__DOT__addr_o = VL_RAND_RESET_I(13);
    vlSelf->core__DOT__data_mem__DOT__wdata_o = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__data_mem__DOT__wmask_o = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__data_mem__DOT__we_o = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__data_mem__DOT__rdata_i = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__data_mem__DOT__memory__DOT__csb_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__data_mem__DOT__memory__DOT__web_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__data_mem__DOT__memory__DOT__wmask_reg = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__data_mem__DOT__memory__DOT__addr_reg = VL_RAND_RESET_I(13);
    vlSelf->core__DOT__data_mem__DOT__memory__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__data_mem__DOT__memory__DOT__dout_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__data_mem__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->core__DOT__data_mem__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__delayRegister__DOT__instruction_1_delay = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__delayRegister__DOT__rs1_data_1_delay = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__delayRegister__DOT__rs2_data_1_delay = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__delayRegister__DOT__pc_w_1_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
