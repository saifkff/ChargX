// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hd8a1beef_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
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
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__top__DOT__if_current_pc;
    __Vdly__top__DOT__if_current_pc = 0;
    CData/*0:0*/ __VdlySet__top__DOT__regfile__DOT__registers__v0;
    __VdlySet__top__DOT__regfile__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__regfile__DOT__registers__v32;
    __VdlyVal__top__DOT__regfile__DOT__registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__regfile__DOT__registers__v32;
    __VdlyDim0__top__DOT__regfile__DOT__registers__v32 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__regfile__DOT__registers__v32;
    __VdlySet__top__DOT__regfile__DOT__registers__v32 = 0;
    // Body
    __Vdly__top__DOT__if_current_pc = vlSelfRef.top__DOT__if_current_pc;
    __VdlySet__top__DOT__regfile__DOT__registers__v0 = 0U;
    __VdlySet__top__DOT__regfile__DOT__registers__v32 = 0U;
    vlSelfRef.top__DOT__mem_lh = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && (IData)(vlSelfRef.top__DOT__ex_lh));
    vlSelfRef.top__DOT__mem_lw = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && (IData)(vlSelfRef.top__DOT__ex_lw));
    vlSelfRef.top__DOT__mem_lhu = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.top__DOT__ex_lhu));
    vlSelfRef.top__DOT__mem_lbu = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.top__DOT__ex_lbu));
    vlSelfRef.top__DOT__mem_lb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && (IData)(vlSelfRef.top__DOT__ex_lb));
    vlSelfRef.top__DOT__mem_store_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                         && (IData)(vlSelfRef.top__DOT__ex_store_enb));
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__regfile__DOT__i = 0x20U;
        __VdlySet__top__DOT__regfile__DOT__registers__v0 = 1U;
        vlSelfRef.top__DOT__wb_sel_bit_mux = 0U;
        vlSelfRef.top__DOT__wb_mem_data = 0U;
        vlSelfRef.top__DOT__mem_rs1 = 0U;
        vlSelfRef.top__DOT__mem_rs1 = 0U;
        vlSelfRef.top__DOT__mem_rs2 = 0U;
        vlSelfRef.top__DOT__wb_pcplus4 = 0U;
        vlSelfRef.top__DOT__wb_alu_result = 0U;
        vlSelfRef.top__DOT__wb_jal_return_add = 0U;
        vlSelfRef.top__DOT__wb_pc_plus_imm = 0U;
    } else {
        if (((IData)(vlSelfRef.top__DOT__wb_wenb) & 
             (0U != (IData)(vlSelfRef.wb_rd)))) {
            __VdlyVal__top__DOT__regfile__DOT__registers__v32 
                = vlSelfRef.wb_data;
            __VdlyDim0__top__DOT__regfile__DOT__registers__v32 
                = vlSelfRef.wb_rd;
            __VdlySet__top__DOT__regfile__DOT__registers__v32 = 1U;
        }
        vlSelfRef.top__DOT__wb_sel_bit_mux = vlSelfRef.top__DOT__mem_sel_bit_mux;
        vlSelfRef.top__DOT__wb_mem_data = vlSelfRef.mem_read_data;
        vlSelfRef.top__DOT__mem_rs1 = vlSelfRef.top__DOT__ex_rs1;
        vlSelfRef.top__DOT__mem_rs2 = vlSelfRef.top__DOT__ex_rs2;
        vlSelfRef.top__DOT__wb_pcplus4 = vlSelfRef.top__DOT__ex_pcplus4;
        vlSelfRef.top__DOT__wb_alu_result = vlSelfRef.top__DOT__mem_alu_result;
        vlSelfRef.top__DOT__wb_jal_return_add = vlSelfRef.top__DOT__mem_jal_return_add;
        vlSelfRef.top__DOT__wb_pc_plus_imm = vlSelfRef.top__DOT__mem_pc_plus_imm;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.top__DOT__flush_for_if))) {
        __Vdly__top__DOT__if_current_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        __Vdly__top__DOT__if_current_pc = vlSelfRef.top__DOT__fetch__DOT__pc;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__fetch__DOT__pc = 0U;
        vlSelfRef.top__DOT__mem_sel_bit_mux = 0U;
        vlSelfRef.top__DOT__mem_jal_return_add = 0U;
        vlSelfRef.top__DOT__mem_pc_plus_imm = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.stall)))) {
            vlSelfRef.top__DOT__fetch__DOT__pc = ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__ex_sel_bit_mux))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__ex_sel_bit_mux))
                                                    ? vlSelfRef.top__DOT__ex_pc_plus_imm
                                                    : 
                                                   (vlSelfRef.top__DOT__id_imm 
                                                    + vlSelfRef.top__DOT__if_current_pc))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__ex_sel_bit_mux))
                                                    ? 
                                                   (vlSelfRef.top__DOT__id_imm 
                                                    + 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.top__DOT__forward_c))
                                                      ? vlSelfRef.top__DOT__mem_alu_result
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelfRef.top__DOT__forward_c))
                                                       ? vlSelfRef.wb_data
                                                       : vlSelfRef.id_rs1_data)))
                                                    : vlSelfRef.if_pc_out));
        }
        vlSelfRef.top__DOT__mem_sel_bit_mux = vlSelfRef.top__DOT__ex_sel_bit_mux;
        vlSelfRef.top__DOT__mem_jal_return_add = vlSelfRef.top__DOT__ex_jal_return_add;
        vlSelfRef.top__DOT__mem_pc_plus_imm = vlSelfRef.top__DOT__ex_pc_plus_imm;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.flush))) {
        vlSelfRef.top__DOT__id_current_pc = 0U;
        vlSelfRef.top__DOT__ex_branch_enb = 0U;
        vlSelfRef.top__DOT__ex_alu_sel = 0U;
        vlSelfRef.top__DOT__ex_imm = 0U;
        vlSelfRef.top__DOT__ex_rs2_imm_sel = 0U;
        vlSelfRef.top__DOT__ex_rs1_data = 0U;
        vlSelfRef.top__DOT__ex_rs2_data = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        vlSelfRef.top__DOT__id_current_pc = vlSelfRef.top__DOT__if_current_pc;
        vlSelfRef.top__DOT__ex_branch_enb = vlSelfRef.top__DOT__id_branch_enb;
        vlSelfRef.top__DOT__ex_alu_sel = (((((IData)(vlSelfRef.top__DOT__id_sub) 
                                             | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__sra) 
                                                | (IData)(vlSelfRef.top__DOT__id_branch_enb))) 
                                            << 3U) 
                                           | ((((IData)(vlSelfRef.top__DOT__id_xorr) 
                                                | (IData)(vlSelfRef.top__DOT__id_xori)) 
                                               | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__orrr) 
                                                  | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__andd) 
                                                     | ((IData)(vlSelfRef.top__DOT__id_blt) 
                                                        | ((IData)(vlSelfRef.top__DOT__id_bge) 
                                                           | ((IData)(vlSelfRef.top__DOT__id_bltu) 
                                                              | ((IData)(vlSelfRef.top__DOT__id_bgeu) 
                                                                 | (IData)(vlSelfRef.top__DOT__control_unit__DOT__srl)))))))) 
                                              << 2U)) 
                                          | ((((IData)(vlSelfRef.top__DOT__control_unit__DOT__orrr) 
                                               | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__andd) 
                                                  | ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24) 
                                                     | ((IData)(vlSelfRef.top__DOT__id_bltu) 
                                                        | ((IData)(vlSelfRef.top__DOT__id_bgeu) 
                                                           | (((IData)(vlSelfRef.top__DOT__id_sltr) 
                                                               | (IData)(vlSelfRef.top__DOT__id_slti)) 
                                                              | (IData)(vlSelfRef.top__DOT__control_unit__DOT__sltu))))))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__sra) 
                                                | ((IData)(vlSelfRef.top__DOT__id_bne) 
                                                   | ((IData)(vlSelfRef.top__DOT__id_bge) 
                                                      | ((IData)(vlSelfRef.top__DOT__id_bgeu) 
                                                         | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__andd) 
                                                            | (((IData)(vlSelfRef.top__DOT__id_sllr) 
                                                                | (IData)(vlSelfRef.top__DOT__id_slli)) 
                                                               | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__srl) 
                                                                  | (IData)(vlSelfRef.top__DOT__control_unit__DOT__sltu))))))))));
        vlSelfRef.top__DOT__ex_imm = vlSelfRef.top__DOT__id_imm;
        vlSelfRef.top__DOT__ex_rs2_imm_sel = ((IData)(vlSelfRef.top__DOT__id_lui_enb) 
                                              | ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelfRef.id_instruction)) 
                                                 | ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19) 
                                                    | ((IData)(vlSelfRef.top__DOT__id_addi) 
                                                       | ((IData)(vlSelfRef.top__DOT__id_sh) 
                                                          | ((IData)(vlSelfRef.top__DOT__id_sb) 
                                                             | ((IData)(vlSelfRef.top__DOT__id_sw) 
                                                                | ((IData)(vlSelfRef.top__DOT__id_slli) 
                                                                   | ((IData)(vlSelfRef.top__DOT__id_srai) 
                                                                      | ((IData)(vlSelfRef.top__DOT__id_auipc_wenb) 
                                                                         | ((IData)(vlSelfRef.top__DOT__id_ori) 
                                                                            | ((IData)(vlSelfRef.top__DOT__id_andi) 
                                                                               | ((IData)(vlSelfRef.top__DOT__id_srli) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_xori) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_sltui) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_slti) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_lbu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_lhu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_jalr) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_lw) 
                                                                                | (IData)(vlSelfRef.top__DOT__id_addi2)))))))))))))))))))));
        vlSelfRef.top__DOT__ex_rs1_data = ((3U == (
                                                   (((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.wb_rd))) 
                                                    & ((IData)(vlSelfRef.wb_rd) 
                                                       == (IData)(vlSelfRef.id_rs1)))
                                                    ? 3U
                                                    : 0U))
                                            ? vlSelfRef.wb_data
                                            : vlSelfRef.id_rs1_data);
        vlSelfRef.top__DOT__ex_rs2_data = ((3U == (
                                                   (((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.wb_rd))) 
                                                    & ((IData)(vlSelfRef.wb_rd) 
                                                       == (IData)(vlSelfRef.id_rs2)))
                                                    ? 3U
                                                    : 0U))
                                            ? vlSelfRef.wb_data
                                            : vlSelfRef.id_rs2_data);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.wb_rd = 0U;
        vlSelfRef.top__DOT__mem_rd = 0U;
    } else {
        vlSelfRef.wb_rd = vlSelfRef.top__DOT__mem_rd;
        vlSelfRef.top__DOT__mem_rd = vlSelfRef.top__DOT__ex_rd;
    }
    vlSelfRef.top__DOT__wb_auipc_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                         && (IData)(vlSelfRef.top__DOT__mem_auipc_wenb));
    vlSelfRef.top__DOT__wb_lui_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                      && (IData)(vlSelfRef.top__DOT__mem_lui_enb));
    vlSelfRef.top__DOT__wb_jal_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                      && (IData)(vlSelfRef.top__DOT__mem_jal_enb));
    vlSelfRef.top__DOT__wb_load_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                       && (IData)(vlSelfRef.top__DOT__mem_load_enb));
    if (__VdlySet__top__DOT__regfile__DOT__registers__v0) {
        vlSelfRef.top__DOT__regfile__DOT__registers[0U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[1U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[2U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[3U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[4U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[5U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[6U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[7U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[8U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[9U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0xaU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0xbU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0xcU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0xdU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0xeU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0xfU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x10U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x11U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x12U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x13U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x14U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x15U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x16U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x17U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x18U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x19U] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x1aU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x1bU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x1cU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x1dU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x1eU] = 0U;
        vlSelfRef.top__DOT__regfile__DOT__registers[0x1fU] = 0U;
    }
    if (__VdlySet__top__DOT__regfile__DOT__registers__v32) {
        vlSelfRef.top__DOT__regfile__DOT__registers[__VdlyDim0__top__DOT__regfile__DOT__registers__v32] 
            = __VdlyVal__top__DOT__regfile__DOT__registers__v32;
    }
    vlSelfRef.top__DOT__mem_auipc_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                          && (IData)(vlSelfRef.top__DOT__ex_auipc_wenb));
    vlSelfRef.top__DOT__mem_lui_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                       && (IData)(vlSelfRef.top__DOT__ex_lui_enb));
    vlSelfRef.top__DOT__mem_jal_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                       && (IData)(vlSelfRef.top__DOT__ex_jal_enb));
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
    vlSelfRef.top__DOT__mem_load_enb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                        && (IData)(vlSelfRef.top__DOT__ex_load_enb));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.flush))) {
        vlSelfRef.top__DOT__ex_lh = 0U;
        vlSelfRef.top__DOT__ex_lw = 0U;
        vlSelfRef.top__DOT__ex_lhu = 0U;
        vlSelfRef.top__DOT__ex_lbu = 0U;
        vlSelfRef.top__DOT__ex_lb = 0U;
        vlSelfRef.top__DOT__ex_rs1 = 0U;
        vlSelfRef.top__DOT__ex_rs2 = 0U;
        vlSelfRef.top__DOT__ex_pcplus4 = 0U;
        vlSelfRef.top__DOT__ex_store_enb = 0U;
        vlSelfRef.top__DOT__ex_auipc_wenb = 0U;
        vlSelfRef.top__DOT__ex_lui_enb = 0U;
        vlSelfRef.top__DOT__ex_jal_enb = 0U;
        vlSelfRef.top__DOT__ex_load_enb = 0U;
        vlSelfRef.top__DOT__ex_jal_return_add = 0U;
        vlSelfRef.top__DOT__ex_pc_plus_imm = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        vlSelfRef.top__DOT__ex_lh = vlSelfRef.top__DOT__id_lh;
        vlSelfRef.top__DOT__ex_lw = vlSelfRef.top__DOT__id_lw;
        vlSelfRef.top__DOT__ex_lhu = vlSelfRef.top__DOT__id_lhu;
        vlSelfRef.top__DOT__ex_lbu = vlSelfRef.top__DOT__id_lbu;
        vlSelfRef.top__DOT__ex_lb = vlSelfRef.top__DOT__id_lb;
        vlSelfRef.top__DOT__ex_rs1 = vlSelfRef.id_rs1;
        vlSelfRef.top__DOT__ex_rs2 = vlSelfRef.id_rs2;
        vlSelfRef.top__DOT__ex_pcplus4 = vlSelfRef.top__DOT__id_pcplus4;
        vlSelfRef.top__DOT__ex_store_enb = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20) 
                                            | (IData)(vlSelfRef.top__DOT__id_sw));
        vlSelfRef.top__DOT__ex_auipc_wenb = vlSelfRef.top__DOT__id_auipc_wenb;
        vlSelfRef.top__DOT__ex_lui_enb = vlSelfRef.top__DOT__id_lui_enb;
        vlSelfRef.top__DOT__ex_jal_enb = vlSelfRef.top__DOT__id_jal_enb;
        vlSelfRef.top__DOT__ex_load_enb = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19) 
                                           | ((IData)(vlSelfRef.top__DOT__id_lw) 
                                              | ((IData)(vlSelfRef.top__DOT__id_lbu) 
                                                 | (IData)(vlSelfRef.top__DOT__id_lhu))));
        vlSelfRef.top__DOT__ex_jal_return_add = vlSelfRef.top__DOT__id_pcplus4;
        vlSelfRef.top__DOT__ex_pc_plus_imm = (vlSelfRef.top__DOT__id_imm 
                                              + vlSelfRef.top__DOT__id_pcplus4);
    }
    vlSelfRef.top__DOT__wb_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                   && (IData)(vlSelfRef.top__DOT__mem_wenb));
    vlSelfRef.top__DOT__if_current_pc = __Vdly__top__DOT__if_current_pc;
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
    vlSelfRef.top__DOT__mem_wenb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                    && (IData)(vlSelfRef.top__DOT__ex_wenb));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.flush))) {
        vlSelfRef.top__DOT__ex_rd = 0U;
        vlSelfRef.top__DOT__ex_wenb = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        vlSelfRef.top__DOT__ex_rd = vlSelfRef.id_rd;
        vlSelfRef.top__DOT__ex_wenb = ((IData)(vlSelfRef.top__DOT__id_lw) 
                                       | ((0x6fU == 
                                           (0x7fU & vlSelfRef.id_instruction)) 
                                          | ((IData)(vlSelfRef.top__DOT__id_lh) 
                                             | ((IData)(vlSelfRef.top__DOT__id_lb) 
                                                | ((IData)(vlSelfRef.top__DOT__id_addr) 
                                                   | ((IData)(vlSelfRef.top__DOT__id_sub) 
                                                      | ((IData)(vlSelfRef.top__DOT__id_srar) 
                                                         | ((IData)(vlSelfRef.top__DOT__id_sllr) 
                                                            | ((IData)(vlSelfRef.top__DOT__id_orr) 
                                                               | ((IData)(vlSelfRef.top__DOT__id_andr) 
                                                                  | ((IData)(vlSelfRef.top__DOT__id_sltur) 
                                                                     | ((IData)(vlSelfRef.top__DOT__id_sltr) 
                                                                        | ((IData)(vlSelfRef.top__DOT__id_srai) 
                                                                           | ((IData)(vlSelfRef.top__DOT__id_xorr) 
                                                                              | ((IData)(vlSelfRef.top__DOT__id_srlr) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_andi) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_auipc_wenb) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_ori) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_xori) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_sltui) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_srli) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_slli) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_addi) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_slti) 
                                                                                | ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_sw) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_lbu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_lhu) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_jalr) 
                                                                                | ((IData)(vlSelfRef.top__DOT__id_lui_enb) 
                                                                                | (IData)(vlSelfRef.top__DOT__id_addi2)))))))))))))))))))))))))))))));
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.top__DOT__flush_for_if))) {
        vlSelfRef.top__DOT__id_pcplus4 = 0U;
        vlSelfRef.id_instruction = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        vlSelfRef.top__DOT__id_pcplus4 = vlSelfRef.if_pc_out;
        vlSelfRef.id_instruction = vlSelfRef.if_instruction;
    }
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
    vlSelfRef.if_pc_out = ((IData)(4U) + vlSelfRef.top__DOT__fetch__DOT__pc);
    vlSelfRef.if_instruction = ((0x1000U >= (0x1fffU 
                                             & (vlSelfRef.top__DOT__fetch__DOT__pc 
                                                >> 2U)))
                                 ? vlSelfRef.top__DOT__fetch__DOT__IM__DOT__memory
                                [(0x1fffU & (vlSelfRef.top__DOT__fetch__DOT__pc 
                                             >> 2U))]
                                 : 0U);
    vlSelfRef.rvfi_o_valid_0 = (0U != vlSelfRef.if_instruction);
    vlSelfRef.id_rd = (0x1fU & (vlSelfRef.id_instruction 
                                >> 7U));
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
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_33 
        = (IData)((4U == (0xcU & vlSelfRef.id_instruction)));
    top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_31 
        = (IData)((0x20U == (0x60U & vlSelfRef.id_instruction)));
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
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19 
        = ((IData)(vlSelfRef.top__DOT__id_lb) | (IData)(vlSelfRef.top__DOT__id_lh));
    vlSelfRef.top__DOT__id_lw = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18) 
                                 & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32));
    vlSelfRef.top__DOT__id_lbu = ((IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18) 
                                  & (IData)(top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_34));
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem__DOT__memory__v0;
    __VdlyVal__top__DOT__data_mem__DOT__memory__v0 = 0;
    SData/*12:0*/ __VdlyDim0__top__DOT__data_mem__DOT__memory__v0;
    __VdlyDim0__top__DOT__data_mem__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__memory__v0;
    __VdlySet__top__DOT__data_mem__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem__DOT__memory__v1;
    __VdlyVal__top__DOT__data_mem__DOT__memory__v1 = 0;
    SData/*12:0*/ __VdlyDim0__top__DOT__data_mem__DOT__memory__v1;
    __VdlyDim0__top__DOT__data_mem__DOT__memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__memory__v1;
    __VdlySet__top__DOT__data_mem__DOT__memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem__DOT__memory__v2;
    __VdlyVal__top__DOT__data_mem__DOT__memory__v2 = 0;
    SData/*12:0*/ __VdlyDim0__top__DOT__data_mem__DOT__memory__v2;
    __VdlyDim0__top__DOT__data_mem__DOT__memory__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__memory__v2;
    __VdlySet__top__DOT__data_mem__DOT__memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem__DOT__memory__v3;
    __VdlyVal__top__DOT__data_mem__DOT__memory__v3 = 0;
    SData/*12:0*/ __VdlyDim0__top__DOT__data_mem__DOT__memory__v3;
    __VdlyDim0__top__DOT__data_mem__DOT__memory__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__memory__v3;
    __VdlySet__top__DOT__data_mem__DOT__memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem__DOT__memory__v4;
    __VdlyVal__top__DOT__data_mem__DOT__memory__v4 = 0;
    SData/*12:0*/ __VdlyDim0__top__DOT__data_mem__DOT__memory__v4;
    __VdlyDim0__top__DOT__data_mem__DOT__memory__v4 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__memory__v4;
    __VdlySet__top__DOT__data_mem__DOT__memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem__DOT__memory__v5;
    __VdlyVal__top__DOT__data_mem__DOT__memory__v5 = 0;
    SData/*12:0*/ __VdlyDim0__top__DOT__data_mem__DOT__memory__v5;
    __VdlyDim0__top__DOT__data_mem__DOT__memory__v5 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__memory__v5;
    __VdlySet__top__DOT__data_mem__DOT__memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_mem__DOT__memory__v6;
    __VdlyVal__top__DOT__data_mem__DOT__memory__v6 = 0;
    SData/*12:0*/ __VdlyDim0__top__DOT__data_mem__DOT__memory__v6;
    __VdlyDim0__top__DOT__data_mem__DOT__memory__v6 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_mem__DOT__memory__v6;
    __VdlySet__top__DOT__data_mem__DOT__memory__v6 = 0;
    // Body
    __VdlySet__top__DOT__data_mem__DOT__memory__v0 = 0U;
    __VdlySet__top__DOT__data_mem__DOT__memory__v1 = 0U;
    __VdlySet__top__DOT__data_mem__DOT__memory__v2 = 0U;
    __VdlySet__top__DOT__data_mem__DOT__memory__v3 = 0U;
    __VdlySet__top__DOT__data_mem__DOT__memory__v4 = 0U;
    __VdlySet__top__DOT__data_mem__DOT__memory__v5 = 0U;
    __VdlySet__top__DOT__data_mem__DOT__memory__v6 = 0U;
    if (vlSelfRef.top__DOT__mem_sb) {
        vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_he4250159__0 
            = (0xffU & vlSelfRef.top__DOT__mem_store_data);
        if ((0x1000U >= (0x1fffU & vlSelfRef.top__DOT__mem_alu_result))) {
            __VdlyVal__top__DOT__data_mem__DOT__memory__v0 
                = vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_he4250159__0;
            __VdlyDim0__top__DOT__data_mem__DOT__memory__v0 
                = (0x1fffU & vlSelfRef.top__DOT__mem_alu_result);
            __VdlySet__top__DOT__data_mem__DOT__memory__v0 = 1U;
        }
    } else if (vlSelfRef.top__DOT__mem_sh) {
        vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_he4250159__1 
            = (0xffU & vlSelfRef.top__DOT__mem_store_data);
        if ((0x1000U >= (0x1fffU & vlSelfRef.top__DOT__mem_alu_result))) {
            __VdlyVal__top__DOT__data_mem__DOT__memory__v1 
                = vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_he4250159__1;
            __VdlyDim0__top__DOT__data_mem__DOT__memory__v1 
                = (0x1fffU & vlSelfRef.top__DOT__mem_alu_result);
            __VdlySet__top__DOT__data_mem__DOT__memory__v1 = 1U;
        }
        vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a021f05__0 
            = (0xffU & (vlSelfRef.top__DOT__mem_store_data 
                        >> 8U));
        if ((0x1000U >= (0x1fffU & ((IData)(1U) + vlSelfRef.top__DOT__mem_alu_result)))) {
            __VdlyVal__top__DOT__data_mem__DOT__memory__v2 
                = vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a021f05__0;
            __VdlyDim0__top__DOT__data_mem__DOT__memory__v2 
                = (0x1fffU & ((IData)(1U) + vlSelfRef.top__DOT__mem_alu_result));
            __VdlySet__top__DOT__data_mem__DOT__memory__v2 = 1U;
        }
    } else if (vlSelfRef.top__DOT__mem_sw) {
        vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_he4250159__2 
            = (0xffU & vlSelfRef.top__DOT__mem_store_data);
        if ((0x1000U >= (0x1fffU & vlSelfRef.top__DOT__mem_alu_result))) {
            __VdlyVal__top__DOT__data_mem__DOT__memory__v3 
                = vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_he4250159__2;
            __VdlyDim0__top__DOT__data_mem__DOT__memory__v3 
                = (0x1fffU & vlSelfRef.top__DOT__mem_alu_result);
            __VdlySet__top__DOT__data_mem__DOT__memory__v3 = 1U;
        }
        vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a021f05__1 
            = (0xffU & (vlSelfRef.top__DOT__mem_store_data 
                        >> 8U));
        if ((0x1000U >= (0x1fffU & ((IData)(1U) + vlSelfRef.top__DOT__mem_alu_result)))) {
            __VdlyVal__top__DOT__data_mem__DOT__memory__v4 
                = vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a021f05__1;
            __VdlyDim0__top__DOT__data_mem__DOT__memory__v4 
                = (0x1fffU & ((IData)(1U) + vlSelfRef.top__DOT__mem_alu_result));
            __VdlySet__top__DOT__data_mem__DOT__memory__v4 = 1U;
        }
        vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a00ff9d__0 
            = (0xffU & (vlSelfRef.top__DOT__mem_store_data 
                        >> 0x10U));
        if ((0x1000U >= (0x1fffU & ((IData)(2U) + vlSelfRef.top__DOT__mem_alu_result)))) {
            __VdlyVal__top__DOT__data_mem__DOT__memory__v5 
                = vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a00ff9d__0;
            __VdlyDim0__top__DOT__data_mem__DOT__memory__v5 
                = (0x1fffU & ((IData)(2U) + vlSelfRef.top__DOT__mem_alu_result));
            __VdlySet__top__DOT__data_mem__DOT__memory__v5 = 1U;
        }
        vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a05cf58__0 
            = (vlSelfRef.top__DOT__mem_store_data >> 0x18U);
        if ((0x1000U >= (0x1fffU & ((IData)(3U) + vlSelfRef.top__DOT__mem_alu_result)))) {
            __VdlyVal__top__DOT__data_mem__DOT__memory__v6 
                = vlSelfRef.top__DOT__data_mem__DOT____Vlvbound_h2a05cf58__0;
            __VdlyDim0__top__DOT__data_mem__DOT__memory__v6 
                = (0x1fffU & ((IData)(3U) + vlSelfRef.top__DOT__mem_alu_result));
            __VdlySet__top__DOT__data_mem__DOT__memory__v6 = 1U;
        }
    }
    if (__VdlySet__top__DOT__data_mem__DOT__memory__v0) {
        vlSelfRef.top__DOT__data_mem__DOT__memory[__VdlyDim0__top__DOT__data_mem__DOT__memory__v0] 
            = __VdlyVal__top__DOT__data_mem__DOT__memory__v0;
    }
    if (__VdlySet__top__DOT__data_mem__DOT__memory__v1) {
        vlSelfRef.top__DOT__data_mem__DOT__memory[__VdlyDim0__top__DOT__data_mem__DOT__memory__v1] 
            = __VdlyVal__top__DOT__data_mem__DOT__memory__v1;
    }
    if (__VdlySet__top__DOT__data_mem__DOT__memory__v2) {
        vlSelfRef.top__DOT__data_mem__DOT__memory[__VdlyDim0__top__DOT__data_mem__DOT__memory__v2] 
            = __VdlyVal__top__DOT__data_mem__DOT__memory__v2;
    }
    if (__VdlySet__top__DOT__data_mem__DOT__memory__v3) {
        vlSelfRef.top__DOT__data_mem__DOT__memory[__VdlyDim0__top__DOT__data_mem__DOT__memory__v3] 
            = __VdlyVal__top__DOT__data_mem__DOT__memory__v3;
    }
    if (__VdlySet__top__DOT__data_mem__DOT__memory__v4) {
        vlSelfRef.top__DOT__data_mem__DOT__memory[__VdlyDim0__top__DOT__data_mem__DOT__memory__v4] 
            = __VdlyVal__top__DOT__data_mem__DOT__memory__v4;
    }
    if (__VdlySet__top__DOT__data_mem__DOT__memory__v5) {
        vlSelfRef.top__DOT__data_mem__DOT__memory[__VdlyDim0__top__DOT__data_mem__DOT__memory__v5] 
            = __VdlyVal__top__DOT__data_mem__DOT__memory__v5;
    }
    if (__VdlySet__top__DOT__data_mem__DOT__memory__v6) {
        vlSelfRef.top__DOT__data_mem__DOT__memory[__VdlyDim0__top__DOT__data_mem__DOT__memory__v6] 
            = __VdlyVal__top__DOT__data_mem__DOT__memory__v6;
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hcace54c4_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__mem_store_data = 0U;
        vlSelfRef.top__DOT__mem_alu_result = 0U;
    } else {
        vlSelfRef.top__DOT__mem_store_data = ((0U == (IData)(vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit))
                                               ? vlSelfRef.top__DOT__ex_rs2_forwarded
                                               : ((2U 
                                                   == (IData)(vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit))
                                                   ? 
                                                  (0xffU 
                                                   & vlSelfRef.top__DOT__ex_rs2_forwarded)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelfRef.top__DOT__ex_rs2_forwarded)
                                                    : 0U)));
        vlSelfRef.top__DOT__mem_alu_result = vlSelfRef.ex_alu_result;
    }
    vlSelfRef.top__DOT__mem_sb = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && (IData)(vlSelfRef.top__DOT__ex_sb));
    vlSelfRef.top__DOT__mem_sh = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && (IData)(vlSelfRef.top__DOT__ex_sh));
    vlSelfRef.top__DOT__mem_sw = ((1U & (~ (IData)(vlSelfRef.rst))) 
                                  && (IData)(vlSelfRef.top__DOT__ex_sw));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.flush))) {
        vlSelfRef.top__DOT__ex_sb = 0U;
        vlSelfRef.top__DOT__ex_sh = 0U;
        vlSelfRef.top__DOT__ex_sw = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.stall)))) {
        vlSelfRef.top__DOT__ex_sb = vlSelfRef.top__DOT__id_sb;
        vlSelfRef.top__DOT__ex_sh = vlSelfRef.top__DOT__id_sh;
        vlSelfRef.top__DOT__ex_sw = vlSelfRef.top__DOT__id_sw;
    }
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
    vlSelfRef.top__DOT__id_sb = ((~ (vlSelfRef.id_instruction 
                                     >> 0xdU)) & ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39) 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    vlSelfRef.top__DOT__id_sh = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_40) 
                                 & ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_36) 
                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    vlSelfRef.top__DOT__id_sw = ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_39) 
                                 & ((vlSelfRef.id_instruction 
                                     >> 0xdU) & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_32)));
    vlSelfRef.top__DOT__ex_alu_data_B = ((IData)(vlSelfRef.top__DOT__ex_rs2_imm_sel)
                                          ? vlSelfRef.top__DOT__ex_imm
                                          : vlSelfRef.top__DOT__ex_rs2_forwarded);
    vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20 
        = ((IData)(vlSelfRef.top__DOT__id_sb) | (IData)(vlSelfRef.top__DOT__id_sh));
    vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit 
        = ((((IData)(vlSelfRef.top__DOT__ex_sb) << 3U) 
            | ((IData)(vlSelfRef.top__DOT__ex_sh) << 2U)) 
           | ((IData)(vlSelfRef.top__DOT__ex_sw) << 1U));
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
