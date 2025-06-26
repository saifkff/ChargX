// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========
CData/*1:0*/ Vtop::__Vtable1_top__DOT__ex_sel_bit_mux[16];
CData/*2:0*/ Vtop::__Vtable2_top__DOT__wb_mux_sel[32];

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vtop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst) {
        vlTOPp->top__DOT__regfile__DOT__i = 0x20U;
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_branch_enb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_branch_enb = ((((((IData)(vlTOPp->top__DOT__id_beq) 
                                                   | (IData)(vlTOPp->top__DOT__id_bne)) 
                                                  | (IData)(vlTOPp->top__DOT__id_blt)) 
                                                 | (IData)(vlTOPp->top__DOT__id_bge)) 
                                                | (IData)(vlTOPp->top__DOT__id_bltu)) 
                                               | (IData)(vlTOPp->top__DOT__id_bgeu));
        }
    }
    vlTOPp->top__DOT__wb_sel_bit_mux = ((IData)(vlTOPp->rst)
                                         ? 0U : (IData)(vlTOPp->top__DOT__mem_sel_bit_mux));
    vlTOPp->top__DOT__mem_lbu = ((~ (IData)(vlTOPp->rst)) 
                                 & (IData)(vlTOPp->top__DOT__ex_lbu));
    vlTOPp->top__DOT__mem_lhu = ((~ (IData)(vlTOPp->rst)) 
                                 & (IData)(vlTOPp->top__DOT__ex_lhu));
    vlTOPp->top__DOT__mem_lw = ((~ (IData)(vlTOPp->rst)) 
                                & (IData)(vlTOPp->top__DOT__ex_lw));
    vlTOPp->top__DOT__mem_lh = ((~ (IData)(vlTOPp->rst)) 
                                & (IData)(vlTOPp->top__DOT__ex_lh));
    vlTOPp->top__DOT__mem_lb = ((~ (IData)(vlTOPp->rst)) 
                                & (IData)(vlTOPp->top__DOT__ex_lb));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__id_current_pc = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__id_current_pc = vlTOPp->top__DOT__if_current_pc;
        }
    }
    vlTOPp->top__DOT__wb_pcplus4 = ((IData)(vlTOPp->rst)
                                     ? 0U : vlTOPp->top__DOT__ex_pcplus4);
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_alu_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_alu_sel = ((((((((
                                                   ((IData)(vlTOPp->top__DOT__id_sub) 
                                                    | (IData)(vlTOPp->top__DOT__control_unit__DOT__sra)) 
                                                   | (IData)(vlTOPp->top__DOT__id_beq)) 
                                                  | (IData)(vlTOPp->top__DOT__id_bne)) 
                                                 | (IData)(vlTOPp->top__DOT__id_blt)) 
                                                | (IData)(vlTOPp->top__DOT__id_bge)) 
                                               | (IData)(vlTOPp->top__DOT__id_bltu)) 
                                              | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                                             << 3U) 
                                            | (((((((((((IData)(vlTOPp->top__DOT__id_xorr) 
                                                        | (IData)(vlTOPp->top__DOT__id_xori)) 
                                                       | (IData)(vlTOPp->top__DOT__control_unit__DOT__orrr)) 
                                                      | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                                     | (IData)(vlTOPp->top__DOT__id_blt)) 
                                                    | (IData)(vlTOPp->top__DOT__id_bge)) 
                                                   | (IData)(vlTOPp->top__DOT__id_bltu)) 
                                                  | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                                                 | (IData)(vlTOPp->top__DOT__control_unit__DOT__srl)) 
                                                << 2U) 
                                               | ((((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__orrr) 
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
                                                     | (IData)(vlTOPp->top__DOT__control_unit__DOT__sltu)))));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_rs2_imm_sel = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_rs2_imm_sel = ((((
                                                   ((((((((((((((((((IData)(vlTOPp->top__DOT__id_lui_enb) 
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
                                                | (IData)(vlTOPp->top__DOT__id_addi2));
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->top__DOT__mem_rs1 = 0U;
        vlTOPp->top__DOT__mem_rs1 = 0U;
    } else {
        vlTOPp->top__DOT__mem_rs1 = vlTOPp->top__DOT__ex_rs1;
    }
    vlTOPp->top__DOT__wb_mem_data = ((IData)(vlTOPp->rst)
                                      ? 0U : vlTOPp->top__DOT__mem_read_data);
    vlTOPp->top__DOT__mem_store_enb = ((~ (IData)(vlTOPp->rst)) 
                                       & (IData)(vlTOPp->top__DOT__ex_store_enb));
    vlTOPp->top__DOT__wb_jal_return_add = ((IData)(vlTOPp->rst)
                                            ? 0U : vlTOPp->top__DOT__mem_jal_return_add);
    vlTOPp->top__DOT__wb_pc_plus_imm = ((IData)(vlTOPp->rst)
                                         ? 0U : vlTOPp->top__DOT__mem_pc_plus_imm);
    vlTOPp->top__DOT__mem_rs2 = ((IData)(vlTOPp->rst)
                                  ? 0U : (IData)(vlTOPp->top__DOT__ex_rs2));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_imm = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_imm = vlTOPp->top__DOT__id_imm;
        }
    }
    vlTOPp->top__DOT__wb_alu_result = ((IData)(vlTOPp->rst)
                                        ? 0U : vlTOPp->top__DOT__mem_alu_result);
    vlTOPp->top__DOT__wb_lui_enb = ((~ (IData)(vlTOPp->rst)) 
                                    & (IData)(vlTOPp->top__DOT__ex_lui_enb));
    vlTOPp->top__DOT__wb_auipc_wenb = ((~ (IData)(vlTOPp->rst)) 
                                       & (IData)(vlTOPp->top__DOT__ex_auipc_wenb));
    vlTOPp->top__DOT__wb_jal_enb = ((~ (IData)(vlTOPp->rst)) 
                                    & (IData)(vlTOPp->top__DOT__mem_jal_enb));
    vlTOPp->top__DOT__wb_load_enb = ((~ (IData)(vlTOPp->rst)) 
                                     & (IData)(vlTOPp->top__DOT__mem_load_enb));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_rs1_data = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_rs1_data = ((3U == 
                                              ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                                & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->top__DOT__id_instruction 
                                                       >> 0xfU))))
                                                ? 3U
                                                : 0U))
                                              ? vlTOPp->top__DOT__wb_data
                                              : vlTOPp->top__DOT__id_rs1_data);
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_rs2_data = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_rs2_data = ((3U == 
                                              ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                                & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->top__DOT__id_instruction 
                                                       >> 0x14U))))
                                                ? 3U
                                                : 0U))
                                              ? vlTOPp->top__DOT__wb_data
                                              : ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->top__DOT__id_instruction 
                                                      >> 0x14U)))
                                                  ? 0U
                                                  : 
                                                 vlTOPp->top__DOT__regfile__DOT__registers[
                                                 (0x1fU 
                                                  & (vlTOPp->top__DOT__id_instruction 
                                                     >> 0x14U))]));
        }
    }
    vlTOPp->top__DOT__mem_sel_bit_mux = ((IData)(vlTOPp->rst)
                                          ? 0U : (IData)(vlTOPp->top__DOT__ex_sel_bit_mux));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_lbu = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_lbu = vlTOPp->top__DOT__id_lbu;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_lhu = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_lhu = vlTOPp->top__DOT__id_lhu;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_lw = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_lw = vlTOPp->top__DOT__id_lw;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_lh = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_lh = vlTOPp->top__DOT__id_lh;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_lb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_lb = vlTOPp->top__DOT__id_lb;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush_for_if))) {
        vlTOPp->top__DOT__if_current_pc = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__if_current_pc = vlTOPp->top__DOT__fetch__DOT__pc;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_pcplus4 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_pcplus4 = vlTOPp->top__DOT__id_pcplus4;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_rs1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_rs1 = (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                 >> 0xfU));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_store_enb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_store_enb = (((IData)(vlTOPp->top__DOT__id_sb) 
                                               | (IData)(vlTOPp->top__DOT__id_sh)) 
                                              | (IData)(vlTOPp->top__DOT__id_sw));
        }
    }
    vlTOPp->top__DOT__mem_jal_return_add = ((IData)(vlTOPp->rst)
                                             ? 0U : vlTOPp->top__DOT__ex_jal_return_add);
    vlTOPp->top__DOT__mem_pc_plus_imm = ((IData)(vlTOPp->rst)
                                          ? 0U : vlTOPp->top__DOT__ex_pc_plus_imm);
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_rs2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_rs2 = (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                 >> 0x14U));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_lui_enb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_lui_enb = vlTOPp->top__DOT__id_lui_enb;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_auipc_wenb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_auipc_wenb = vlTOPp->top__DOT__id_auipc_wenb;
        }
    }
    vlTOPp->top__DOT__mem_jal_enb = ((~ (IData)(vlTOPp->rst)) 
                                     & (IData)(vlTOPp->top__DOT__ex_jal_enb));
    vlTOPp->top__DOT__mem_load_enb = ((~ (IData)(vlTOPp->rst)) 
                                      & (IData)(vlTOPp->top__DOT__ex_load_enb));
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                             << 4U) | (((IData)(vlTOPp->top__DOT__wb_auipc_wenb) 
                                        << 3U) | (((IData)(vlTOPp->top__DOT__wb_jal_enb) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->top__DOT__wb_load_enb) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ 
                                                           ((((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                                                              | (IData)(vlTOPp->top__DOT__wb_auipc_wenb)) 
                                                             | (IData)(vlTOPp->top__DOT__wb_jal_enb)) 
                                                            | (IData)(vlTOPp->top__DOT__wb_load_enb))))))));
    vlTOPp->top__DOT__wb_mux_sel = vlTOPp->__Vtable2_top__DOT__wb_mux_sel
        [vlTOPp->__Vtableidx2];
    if (vlTOPp->rst) {
        vlTOPp->top__DOT__regfile__DOT__registers[0U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[1U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[2U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[3U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[4U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[5U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[6U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[7U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[8U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[9U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0xaU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0xbU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0xcU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0xdU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0xeU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0xfU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x10U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x11U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x12U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x13U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x14U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x15U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x16U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x17U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x18U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x19U] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x1aU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x1bU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x1cU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x1dU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x1eU] = 0U;
        vlTOPp->top__DOT__regfile__DOT__registers[0x1fU] = 0U;
    } else {
        if (((IData)(vlTOPp->top__DOT__wb_wenb) & (0U 
                                                   != (IData)(vlTOPp->top__DOT__wb_rd)))) {
            VL_ASSIGNSEL_WIII(32,(0x3ffU & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                            << 5U)), vlTOPp->top__DOT__regfile__DOT__registers, vlTOPp->top__DOT__wb_data);
        }
    }
    vlTOPp->top__DOT__wb_data = ((4U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                  ? ((2U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                      ? 0U : ((1U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                               ? 0U
                                               : vlTOPp->top__DOT__ex_imm))
                                  : ((2U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                      ? ((1U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                          ? vlTOPp->top__DOT__wb_pc_plus_imm
                                          : vlTOPp->top__DOT__wb_jal_return_add)
                                      : ((1U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                          ? vlTOPp->top__DOT__wb_mem_data
                                          : vlTOPp->top__DOT__wb_alu_result)));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_jal_return_add = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_jal_return_add = vlTOPp->top__DOT__id_pcplus4;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_pc_plus_imm = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_pc_plus_imm = (vlTOPp->top__DOT__id_pcplus4 
                                                + vlTOPp->top__DOT__id_imm);
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_jal_enb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_jal_enb = vlTOPp->top__DOT__id_jal_enb;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_load_enb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_load_enb = (((((IData)(vlTOPp->top__DOT__id_lb) 
                                                | (IData)(vlTOPp->top__DOT__id_lh)) 
                                               | (IData)(vlTOPp->top__DOT__id_lw)) 
                                              | (IData)(vlTOPp->top__DOT__id_lbu)) 
                                             | (IData)(vlTOPp->top__DOT__id_lhu));
        }
    }
    vlTOPp->top__DOT__wb_rd = ((IData)(vlTOPp->rst)
                                ? 0U : (IData)(vlTOPp->top__DOT__mem_rd));
    vlTOPp->top__DOT__wb_wenb = ((~ (IData)(vlTOPp->rst)) 
                                 & (IData)(vlTOPp->top__DOT__mem_wenb));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush_for_if))) {
        vlTOPp->top__DOT__id_pcplus4 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__id_pcplus4 = ((IData)(4U) 
                                            + vlTOPp->top__DOT__fetch__DOT__pc);
        }
    }
    vlTOPp->top__DOT__mem_rd = ((IData)(vlTOPp->rst)
                                 ? 0U : (IData)(vlTOPp->top__DOT__ex_rd));
    vlTOPp->top__DOT__mem_wenb = ((~ (IData)(vlTOPp->rst)) 
                                  & (IData)(vlTOPp->top__DOT__ex_wenb));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_rd = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_rd = (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                >> 7U));
        }
    }
    vlTOPp->top__DOT__forward_a = (((((IData)(vlTOPp->top__DOT__mem_store_enb) 
                                      | (IData)(vlTOPp->top__DOT__mem_wenb)) 
                                     & (0U != (IData)(vlTOPp->top__DOT__mem_rd))) 
                                    & ((IData)(vlTOPp->top__DOT__mem_rd) 
                                       == (IData)(vlTOPp->top__DOT__ex_rs1)))
                                    ? 2U : ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                              & (0U 
                                                 != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                             & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                == (IData)(vlTOPp->top__DOT__ex_rs1)))
                                             ? 1U : 0U));
    vlTOPp->top__DOT__forward_b = (((((IData)(vlTOPp->top__DOT__mem_store_enb) 
                                      | (IData)(vlTOPp->top__DOT__mem_wenb)) 
                                     & (0U != (IData)(vlTOPp->top__DOT__mem_rd))) 
                                    & ((IData)(vlTOPp->top__DOT__mem_rd) 
                                       == (IData)(vlTOPp->top__DOT__ex_rs2)))
                                    ? 2U : ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                              & (0U 
                                                 != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                             & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                == (IData)(vlTOPp->top__DOT__ex_rs2)))
                                             ? 1U : 0U));
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_wenb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_wenb = (((((((((((
                                                   (((((((((((((((((((((IData)(vlTOPp->top__DOT__id_lw) 
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
                                         | (IData)(vlTOPp->top__DOT__id_addi2));
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush_for_if))) {
        vlTOPp->top__DOT__id_instruction = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__id_instruction = ((0x1000U 
                                                 >= 
                                                 (0x1fffU 
                                                  & (vlTOPp->top__DOT__fetch__DOT__pc 
                                                     >> 2U)))
                                                 ? 
                                                vlTOPp->top__DOT__fetch__DOT__IM__DOT__memory
                                                [(0x1fffU 
                                                  & (vlTOPp->top__DOT__fetch__DOT__pc 
                                                     >> 2U))]
                                                 : 0U);
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->top__DOT__fetch__DOT__pc = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__fetch__DOT__pc = vlTOPp->top__DOT__fetch__DOT__pc_next;
        }
    }
    vlTOPp->top__DOT__id_addr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_sub = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xdU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xeU))) 
                                      & (vlTOPp->top__DOT__id_instruction 
                                         >> 0x1eU)));
    vlTOPp->top__DOT__id_sllr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_sltr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_xorr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_addi = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_addi2 = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 5U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 6U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 0xcU))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xdU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xeU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU)));
    vlTOPp->top__DOT__id_slli = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_slti = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_xori = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_lb = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 5U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_lh = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 5U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_lw = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 5U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_lbu = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 5U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_lhu = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 5U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xcU)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xdU))) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_lui_enb = (1U & (((((vlTOPp->top__DOT__id_instruction 
                                              >> 2U) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))));
    vlTOPp->top__DOT__id_auipc_wenb = (1U & (((((vlTOPp->top__DOT__id_instruction 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlTOPp->top__DOT__id_instruction 
                                                    >> 3U))) 
                                               & (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 6U))));
    vlTOPp->top__DOT__id_beq = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))));
    vlTOPp->top__DOT__id_bne = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))));
    vlTOPp->top__DOT__id_blt = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (vlTOPp->top__DOT__id_instruction 
                                         >> 0xeU)));
    vlTOPp->top__DOT__id_bge = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (vlTOPp->top__DOT__id_instruction 
                                         >> 0xeU)));
    vlTOPp->top__DOT__id_bltu = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 6U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)));
    vlTOPp->top__DOT__id_bgeu = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 6U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xcU)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)));
    vlTOPp->top__DOT__id_sltur = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U)) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 5U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 6U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xeU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0x1eU))));
    vlTOPp->top__DOT__id_srlr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_srar = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0x1eU)));
    vlTOPp->top__DOT__id_orr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_andr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_sltui = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 5U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 6U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xeU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0x1eU))));
    vlTOPp->top__DOT__id_srli = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_srai = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0x1eU)));
    vlTOPp->top__DOT__id_ori = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 5U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_andi = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_rs1_data = ((0U == (0x1fU 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 0xfU)))
                                      ? 0U : vlTOPp->top__DOT__regfile__DOT__registers[
                                     (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                               >> 0xfU))]);
    vlTOPp->top__DOT__forward_c = (((((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                >> 0xfU)) 
                                      == (IData)(vlTOPp->top__DOT__mem_rd)) 
                                     & (0U != (IData)(vlTOPp->top__DOT__mem_rd))) 
                                    & (IData)(vlTOPp->top__DOT__mem_store_enb))
                                    ? 2U : ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                              & (0U 
                                                 != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                             & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top__DOT__id_instruction 
                                                    >> 0xfU))))
                                             ? 1U : 0U));
    vlTOPp->top__DOT__immediate_generator__DOT__sel 
        = ((0x40U & vlTOPp->top__DOT__id_instruction)
            ? ((0x20U & vlTOPp->top__DOT__id_instruction)
                ? ((0x10U & vlTOPp->top__DOT__id_instruction)
                    ? 0xfU : ((8U & vlTOPp->top__DOT__id_instruction)
                               ? ((4U & vlTOPp->top__DOT__id_instruction)
                                   ? ((2U & vlTOPp->top__DOT__id_instruction)
                                       ? ((1U & vlTOPp->top__DOT__id_instruction)
                                           ? 4U : 0xfU)
                                       : 0xfU) : 0xfU)
                               : ((4U & vlTOPp->top__DOT__id_instruction)
                                   ? ((2U & vlTOPp->top__DOT__id_instruction)
                                       ? ((1U & vlTOPp->top__DOT__id_instruction)
                                           ? 7U : 0xfU)
                                       : 0xfU) : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 2U
                                                    : 0xfU)
                                                   : 0xfU))))
                : 0xfU) : ((0x20U & vlTOPp->top__DOT__id_instruction)
                            ? ((0x10U & vlTOPp->top__DOT__id_instruction)
                                ? ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 3U
                                                    : 0xfU)
                                                   : 0xfU)
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 5U
                                                    : 0xfU)
                                                   : 0xfU)))
                                : ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? 0xfU
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 1U
                                                    : 0xfU)
                                                   : 0xfU))))
                            : ((0x10U & vlTOPp->top__DOT__id_instruction)
                                ? ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 3U
                                                    : 0xfU)
                                                   : 0xfU)
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 0U
                                                    : 0xfU)
                                                   : 0xfU)))
                                : ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? 0xfU
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 6U
                                                    : 0xfU)
                                                   : 0xfU))))));
    vlTOPp->top__DOT__id_jalr = (1U & (((((((((vlTOPp->top__DOT__id_instruction 
                                               >> 2U) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 4U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 6U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__control_unit__DOT__sltu = ((IData)(vlTOPp->top__DOT__id_sltur) 
                                                 | (IData)(vlTOPp->top__DOT__id_sltui));
    vlTOPp->top__DOT__control_unit__DOT__srl = ((IData)(vlTOPp->top__DOT__id_srlr) 
                                                | (IData)(vlTOPp->top__DOT__id_srli));
    vlTOPp->top__DOT__control_unit__DOT__sra = ((IData)(vlTOPp->top__DOT__id_srar) 
                                                | (IData)(vlTOPp->top__DOT__id_srai));
    vlTOPp->top__DOT__control_unit__DOT__orrr = ((IData)(vlTOPp->top__DOT__id_orr) 
                                                 | (IData)(vlTOPp->top__DOT__id_ori));
    vlTOPp->top__DOT__control_unit__DOT__andd = ((IData)(vlTOPp->top__DOT__id_andr) 
                                                 | (IData)(vlTOPp->top__DOT__id_andi));
    vlTOPp->top__DOT__id_imm = ((8U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                 ? 0U : ((4U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                          ? ((2U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->top__DOT__id_instruction 
                                                        >> 0x14U)))
                                                  : 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->top__DOT__id_instruction 
                                                        >> 0x14U))))
                                              : ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 0U
                                                  : 
                                                 ((0xffe00000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & (vlTOPp->top__DOT__id_instruction 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlTOPp->top__DOT__id_instruction) 
                                                        | ((0x800U 
                                                            & (vlTOPp->top__DOT__id_instruction 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlTOPp->top__DOT__id_instruction 
                                                                 >> 0x14U))))))))
                                          : ((2U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlTOPp->top__DOT__id_instruction)
                                                  : 
                                                 ((0xffffe000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (vlTOPp->top__DOT__id_instruction 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlTOPp->top__DOT__id_instruction 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlTOPp->top__DOT__id_instruction 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlTOPp->top__DOT__id_instruction 
                                                                 >> 7U)))))))
                                              : ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->top__DOT__id_instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->top__DOT__id_instruction 
                                                           >> 7U))))
                                                  : 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->top__DOT__id_instruction 
                                                        >> 0x14U)))))));
    vlTOPp->top__DOT__id_jal_enb = ((0x6fU == (0x7fU 
                                               & vlTOPp->top__DOT__id_instruction)) 
                                    | (IData)(vlTOPp->top__DOT__id_jalr));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__top__DOT__data_mem__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_mem__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_mem__DOT__memory__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_mem__DOT__memory__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_mem__DOT__memory__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__memory__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_mem__DOT__memory__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__memory__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_mem__DOT__memory__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__memory__v6;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v0;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v1;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v2;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v3;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v4;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v5;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v6;
    // Body
    __Vdlyvset__top__DOT__data_mem__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__data_mem__DOT__memory__v1 = 0U;
    __Vdlyvset__top__DOT__data_mem__DOT__memory__v2 = 0U;
    __Vdlyvset__top__DOT__data_mem__DOT__memory__v3 = 0U;
    __Vdlyvset__top__DOT__data_mem__DOT__memory__v4 = 0U;
    __Vdlyvset__top__DOT__data_mem__DOT__memory__v5 = 0U;
    __Vdlyvset__top__DOT__data_mem__DOT__memory__v6 = 0U;
    if (vlTOPp->top__DOT__mem_sb) {
        vlTOPp->top__DOT__data_mem__DOT____Vlvbound1 
            = (0xffU & vlTOPp->top__DOT__mem_store_data);
        if ((0x1000U >= (0x1fffU & vlTOPp->top__DOT__mem_alu_result))) {
            __Vdlyvval__top__DOT__data_mem__DOT__memory__v0 
                = vlTOPp->top__DOT__data_mem__DOT____Vlvbound1;
            __Vdlyvset__top__DOT__data_mem__DOT__memory__v0 = 1U;
            __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v0 
                = (0x1fffU & vlTOPp->top__DOT__mem_alu_result);
        }
    } else {
        if (vlTOPp->top__DOT__mem_sh) {
            vlTOPp->top__DOT__data_mem__DOT____Vlvbound2 
                = (0xffU & vlTOPp->top__DOT__mem_store_data);
            if ((0x1000U >= (0x1fffU & vlTOPp->top__DOT__mem_alu_result))) {
                __Vdlyvval__top__DOT__data_mem__DOT__memory__v1 
                    = vlTOPp->top__DOT__data_mem__DOT____Vlvbound2;
                __Vdlyvset__top__DOT__data_mem__DOT__memory__v1 = 1U;
                __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v1 
                    = (0x1fffU & vlTOPp->top__DOT__mem_alu_result);
            }
            vlTOPp->top__DOT__data_mem__DOT____Vlvbound3 
                = (0xffU & (vlTOPp->top__DOT__mem_store_data 
                            >> 8U));
            if ((0x1000U >= (0x1fffU & ((IData)(1U) 
                                        + vlTOPp->top__DOT__mem_alu_result)))) {
                __Vdlyvval__top__DOT__data_mem__DOT__memory__v2 
                    = vlTOPp->top__DOT__data_mem__DOT____Vlvbound3;
                __Vdlyvset__top__DOT__data_mem__DOT__memory__v2 = 1U;
                __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v2 
                    = (0x1fffU & ((IData)(1U) + vlTOPp->top__DOT__mem_alu_result));
            }
        } else {
            if (vlTOPp->top__DOT__mem_sw) {
                vlTOPp->top__DOT__data_mem__DOT____Vlvbound4 
                    = (0xffU & vlTOPp->top__DOT__mem_store_data);
                if ((0x1000U >= (0x1fffU & vlTOPp->top__DOT__mem_alu_result))) {
                    __Vdlyvval__top__DOT__data_mem__DOT__memory__v3 
                        = vlTOPp->top__DOT__data_mem__DOT____Vlvbound4;
                    __Vdlyvset__top__DOT__data_mem__DOT__memory__v3 = 1U;
                    __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v3 
                        = (0x1fffU & vlTOPp->top__DOT__mem_alu_result);
                }
                vlTOPp->top__DOT__data_mem__DOT____Vlvbound5 
                    = (0xffU & (vlTOPp->top__DOT__mem_store_data 
                                >> 8U));
                if ((0x1000U >= (0x1fffU & ((IData)(1U) 
                                            + vlTOPp->top__DOT__mem_alu_result)))) {
                    __Vdlyvval__top__DOT__data_mem__DOT__memory__v4 
                        = vlTOPp->top__DOT__data_mem__DOT____Vlvbound5;
                    __Vdlyvset__top__DOT__data_mem__DOT__memory__v4 = 1U;
                    __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v4 
                        = (0x1fffU & ((IData)(1U) + vlTOPp->top__DOT__mem_alu_result));
                }
                vlTOPp->top__DOT__data_mem__DOT____Vlvbound6 
                    = (0xffU & (vlTOPp->top__DOT__mem_store_data 
                                >> 0x10U));
                if ((0x1000U >= (0x1fffU & ((IData)(2U) 
                                            + vlTOPp->top__DOT__mem_alu_result)))) {
                    __Vdlyvval__top__DOT__data_mem__DOT__memory__v5 
                        = vlTOPp->top__DOT__data_mem__DOT____Vlvbound6;
                    __Vdlyvset__top__DOT__data_mem__DOT__memory__v5 = 1U;
                    __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v5 
                        = (0x1fffU & ((IData)(2U) + vlTOPp->top__DOT__mem_alu_result));
                }
                vlTOPp->top__DOT__data_mem__DOT____Vlvbound7 
                    = (0xffU & (vlTOPp->top__DOT__mem_store_data 
                                >> 0x18U));
                if ((0x1000U >= (0x1fffU & ((IData)(3U) 
                                            + vlTOPp->top__DOT__mem_alu_result)))) {
                    __Vdlyvval__top__DOT__data_mem__DOT__memory__v6 
                        = vlTOPp->top__DOT__data_mem__DOT____Vlvbound7;
                    __Vdlyvset__top__DOT__data_mem__DOT__memory__v6 = 1U;
                    __Vdlyvdim0__top__DOT__data_mem__DOT__memory__v6 
                        = (0x1fffU & ((IData)(3U) + vlTOPp->top__DOT__mem_alu_result));
                }
            }
        }
    }
    if (__Vdlyvset__top__DOT__data_mem__DOT__memory__v0) {
        vlTOPp->top__DOT__data_mem__DOT__memory[__Vdlyvdim0__top__DOT__data_mem__DOT__memory__v0] 
            = __Vdlyvval__top__DOT__data_mem__DOT__memory__v0;
    }
    if (__Vdlyvset__top__DOT__data_mem__DOT__memory__v1) {
        vlTOPp->top__DOT__data_mem__DOT__memory[__Vdlyvdim0__top__DOT__data_mem__DOT__memory__v1] 
            = __Vdlyvval__top__DOT__data_mem__DOT__memory__v1;
    }
    if (__Vdlyvset__top__DOT__data_mem__DOT__memory__v2) {
        vlTOPp->top__DOT__data_mem__DOT__memory[__Vdlyvdim0__top__DOT__data_mem__DOT__memory__v2] 
            = __Vdlyvval__top__DOT__data_mem__DOT__memory__v2;
    }
    if (__Vdlyvset__top__DOT__data_mem__DOT__memory__v3) {
        vlTOPp->top__DOT__data_mem__DOT__memory[__Vdlyvdim0__top__DOT__data_mem__DOT__memory__v3] 
            = __Vdlyvval__top__DOT__data_mem__DOT__memory__v3;
    }
    if (__Vdlyvset__top__DOT__data_mem__DOT__memory__v4) {
        vlTOPp->top__DOT__data_mem__DOT__memory[__Vdlyvdim0__top__DOT__data_mem__DOT__memory__v4] 
            = __Vdlyvval__top__DOT__data_mem__DOT__memory__v4;
    }
    if (__Vdlyvset__top__DOT__data_mem__DOT__memory__v5) {
        vlTOPp->top__DOT__data_mem__DOT__memory[__Vdlyvdim0__top__DOT__data_mem__DOT__memory__v5] 
            = __Vdlyvval__top__DOT__data_mem__DOT__memory__v5;
    }
    if (__Vdlyvset__top__DOT__data_mem__DOT__memory__v6) {
        vlTOPp->top__DOT__data_mem__DOT__memory[__Vdlyvdim0__top__DOT__data_mem__DOT__memory__v6] 
            = __Vdlyvval__top__DOT__data_mem__DOT__memory__v6;
    }
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                             << 4U) | (((IData)(vlTOPp->top__DOT__wb_auipc_wenb) 
                                        << 3U) | (((IData)(vlTOPp->top__DOT__wb_jal_enb) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->top__DOT__wb_load_enb) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (~ 
                                                           ((((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                                                              | (IData)(vlTOPp->top__DOT__wb_auipc_wenb)) 
                                                             | (IData)(vlTOPp->top__DOT__wb_jal_enb)) 
                                                            | (IData)(vlTOPp->top__DOT__wb_load_enb))))))));
    vlTOPp->top__DOT__wb_mux_sel = vlTOPp->__Vtable2_top__DOT__wb_mux_sel
        [vlTOPp->__Vtableidx2];
    if (vlTOPp->top__DOT__mem_lb) {
        vlTOPp->top__DOT__mem_read_data = ((0xffffff00U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (((0x1000U 
                                                                         >= 
                                                                         (0x1fffU 
                                                                          & vlTOPp->top__DOT__mem_alu_result))
                                                                         ? 
                                                                        vlTOPp->top__DOT__data_mem__DOT__memory
                                                                        [
                                                                        (0x1fffU 
                                                                         & vlTOPp->top__DOT__mem_alu_result)]
                                                                         : 0U) 
                                                                       >> 7U)))) 
                                               << 8U)) 
                                           | ((0x1000U 
                                               >= (0x1fffU 
                                                   & vlTOPp->top__DOT__mem_alu_result))
                                               ? vlTOPp->top__DOT__data_mem__DOT__memory
                                              [(0x1fffU 
                                                & vlTOPp->top__DOT__mem_alu_result)]
                                               : 0U));
    } else {
        if (vlTOPp->top__DOT__mem_lh) {
            vlTOPp->top__DOT__mem_read_data = ((0xffff0000U 
                                                & (VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (((0x1000U 
                                                                             >= 
                                                                             (0x1fffU 
                                                                              & ((IData)(1U) 
                                                                                + vlTOPp->top__DOT__mem_alu_result)))
                                                                             ? 
                                                                            vlTOPp->top__DOT__data_mem__DOT__memory
                                                                            [
                                                                            (0x1fffU 
                                                                             & ((IData)(1U) 
                                                                                + vlTOPp->top__DOT__mem_alu_result))]
                                                                             : 0U) 
                                                                           >> 7U)))) 
                                                   << 0x10U)) 
                                               | ((((0x1000U 
                                                     >= 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + vlTOPp->top__DOT__mem_alu_result)))
                                                     ? 
                                                    vlTOPp->top__DOT__data_mem__DOT__memory
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + vlTOPp->top__DOT__mem_alu_result))]
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((0x1000U 
                                                      >= 
                                                      (0x1fffU 
                                                       & vlTOPp->top__DOT__mem_alu_result))
                                                      ? 
                                                     vlTOPp->top__DOT__data_mem__DOT__memory
                                                     [
                                                     (0x1fffU 
                                                      & vlTOPp->top__DOT__mem_alu_result)]
                                                      : 0U)));
        } else {
            if (vlTOPp->top__DOT__mem_lw) {
                vlTOPp->top__DOT__mem_read_data = (
                                                   (((0x1000U 
                                                      >= 
                                                      (0x1fffU 
                                                       & ((IData)(3U) 
                                                          + vlTOPp->top__DOT__mem_alu_result)))
                                                      ? 
                                                     vlTOPp->top__DOT__data_mem__DOT__memory
                                                     [
                                                     (0x1fffU 
                                                      & ((IData)(3U) 
                                                         + vlTOPp->top__DOT__mem_alu_result))]
                                                      : 0U) 
                                                    << 0x18U) 
                                                   | ((((0x1000U 
                                                         >= 
                                                         (0x1fffU 
                                                          & ((IData)(2U) 
                                                             + vlTOPp->top__DOT__mem_alu_result)))
                                                         ? 
                                                        vlTOPp->top__DOT__data_mem__DOT__memory
                                                        [
                                                        (0x1fffU 
                                                         & ((IData)(2U) 
                                                            + vlTOPp->top__DOT__mem_alu_result))]
                                                         : 0U) 
                                                       << 0x10U) 
                                                      | ((((0x1000U 
                                                            >= 
                                                            (0x1fffU 
                                                             & ((IData)(1U) 
                                                                + vlTOPp->top__DOT__mem_alu_result)))
                                                            ? 
                                                           vlTOPp->top__DOT__data_mem__DOT__memory
                                                           [
                                                           (0x1fffU 
                                                            & ((IData)(1U) 
                                                               + vlTOPp->top__DOT__mem_alu_result))]
                                                            : 0U) 
                                                          << 8U) 
                                                         | ((0x1000U 
                                                             >= 
                                                             (0x1fffU 
                                                              & vlTOPp->top__DOT__mem_alu_result))
                                                             ? 
                                                            vlTOPp->top__DOT__data_mem__DOT__memory
                                                            [
                                                            (0x1fffU 
                                                             & vlTOPp->top__DOT__mem_alu_result)]
                                                             : 0U))));
            } else {
                if (vlTOPp->top__DOT__mem_lbu) {
                    vlTOPp->top__DOT__mem_read_data 
                        = ((0x1000U >= (0x1fffU & vlTOPp->top__DOT__mem_alu_result))
                            ? vlTOPp->top__DOT__data_mem__DOT__memory
                           [(0x1fffU & vlTOPp->top__DOT__mem_alu_result)]
                            : 0U);
                } else {
                    if (vlTOPp->top__DOT__mem_lhu) {
                        vlTOPp->top__DOT__mem_read_data 
                            = ((((0x1000U >= (0x1fffU 
                                              & ((IData)(1U) 
                                                 + vlTOPp->top__DOT__mem_alu_result)))
                                  ? vlTOPp->top__DOT__data_mem__DOT__memory
                                 [(0x1fffU & ((IData)(1U) 
                                              + vlTOPp->top__DOT__mem_alu_result))]
                                  : 0U) << 8U) | ((0x1000U 
                                                   >= 
                                                   (0x1fffU 
                                                    & vlTOPp->top__DOT__mem_alu_result))
                                                   ? 
                                                  vlTOPp->top__DOT__data_mem__DOT__memory
                                                  [
                                                  (0x1fffU 
                                                   & vlTOPp->top__DOT__mem_alu_result)]
                                                   : 0U));
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit 
        = (((IData)(vlTOPp->top__DOT__ex_sb) << 3U) 
           | (((IData)(vlTOPp->top__DOT__ex_sh) << 2U) 
              | ((IData)(vlTOPp->top__DOT__ex_sw) << 1U)));
    vlTOPp->top__DOT__forward_a = (((((IData)(vlTOPp->top__DOT__mem_store_enb) 
                                      | (IData)(vlTOPp->top__DOT__mem_wenb)) 
                                     & (0U != (IData)(vlTOPp->top__DOT__mem_rd))) 
                                    & ((IData)(vlTOPp->top__DOT__mem_rd) 
                                       == (IData)(vlTOPp->top__DOT__ex_rs1)))
                                    ? 2U : ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                              & (0U 
                                                 != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                             & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                == (IData)(vlTOPp->top__DOT__ex_rs1)))
                                             ? 1U : 0U));
    vlTOPp->top__DOT__forward_b = (((((IData)(vlTOPp->top__DOT__mem_store_enb) 
                                      | (IData)(vlTOPp->top__DOT__mem_wenb)) 
                                     & (0U != (IData)(vlTOPp->top__DOT__mem_rd))) 
                                    & ((IData)(vlTOPp->top__DOT__mem_rd) 
                                       == (IData)(vlTOPp->top__DOT__ex_rs2)))
                                    ? 2U : ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                              & (0U 
                                                 != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                             & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                == (IData)(vlTOPp->top__DOT__ex_rs2)))
                                             ? 1U : 0U));
    vlTOPp->top__DOT__id_addr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_sub = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xdU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xeU))) 
                                      & (vlTOPp->top__DOT__id_instruction 
                                         >> 0x1eU)));
    vlTOPp->top__DOT__id_sllr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_sltr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_xorr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_addi = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_addi2 = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 5U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 6U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 0xcU))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xdU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xeU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU)));
    vlTOPp->top__DOT__id_slli = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_slti = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_xori = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_sw = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_sh = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_sb = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_lb = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 5U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_lh = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 5U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_lw = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 5U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_lbu = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 5U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_lhu = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 5U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xcU)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xdU))) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_lui_enb = (1U & (((((vlTOPp->top__DOT__id_instruction 
                                              >> 2U) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))));
    vlTOPp->top__DOT__id_auipc_wenb = (1U & (((((vlTOPp->top__DOT__id_instruction 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlTOPp->top__DOT__id_instruction 
                                                    >> 3U))) 
                                               & (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 6U))));
    vlTOPp->top__DOT__id_beq = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))));
    vlTOPp->top__DOT__id_bne = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))));
    vlTOPp->top__DOT__id_blt = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (vlTOPp->top__DOT__id_instruction 
                                         >> 0xeU)));
    vlTOPp->top__DOT__id_bge = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 6U)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (vlTOPp->top__DOT__id_instruction 
                                         >> 0xeU)));
    vlTOPp->top__DOT__id_bltu = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 6U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)));
    vlTOPp->top__DOT__id_bgeu = (1U & ((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 4U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 6U)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xcU)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)));
    vlTOPp->top__DOT__id_sltur = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U)) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 5U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 6U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xeU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0x1eU))));
    vlTOPp->top__DOT__id_srlr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_srar = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0x1eU)));
    vlTOPp->top__DOT__id_orr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 5U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_andr = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_sltui = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 2U)) 
                                               & (~ 
                                                  (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                              & (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 5U))) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 6U))) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU)) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xeU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0x1eU))));
    vlTOPp->top__DOT__id_srli = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_srai = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0x1eU)));
    vlTOPp->top__DOT__id_ori = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 2U)) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 3U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 4U)) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 5U))) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 6U))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xcU))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xdU)) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xeU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0x1eU))));
    vlTOPp->top__DOT__id_andi = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 2U)) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 4U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 5U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 6U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 0xcU)) 
                                         & (vlTOPp->top__DOT__id_instruction 
                                            >> 0xdU)) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xeU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__id_rs1_data = ((0U == (0x1fU 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 0xfU)))
                                      ? 0U : vlTOPp->top__DOT__regfile__DOT__registers[
                                     (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                               >> 0xfU))]);
    vlTOPp->top__DOT__forward_c = (((((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                                >> 0xfU)) 
                                      == (IData)(vlTOPp->top__DOT__mem_rd)) 
                                     & (0U != (IData)(vlTOPp->top__DOT__mem_rd))) 
                                    & (IData)(vlTOPp->top__DOT__mem_store_enb))
                                    ? 2U : ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                              & (0U 
                                                 != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                             & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->top__DOT__id_instruction 
                                                    >> 0xfU))))
                                             ? 1U : 0U));
    vlTOPp->top__DOT__immediate_generator__DOT__sel 
        = ((0x40U & vlTOPp->top__DOT__id_instruction)
            ? ((0x20U & vlTOPp->top__DOT__id_instruction)
                ? ((0x10U & vlTOPp->top__DOT__id_instruction)
                    ? 0xfU : ((8U & vlTOPp->top__DOT__id_instruction)
                               ? ((4U & vlTOPp->top__DOT__id_instruction)
                                   ? ((2U & vlTOPp->top__DOT__id_instruction)
                                       ? ((1U & vlTOPp->top__DOT__id_instruction)
                                           ? 4U : 0xfU)
                                       : 0xfU) : 0xfU)
                               : ((4U & vlTOPp->top__DOT__id_instruction)
                                   ? ((2U & vlTOPp->top__DOT__id_instruction)
                                       ? ((1U & vlTOPp->top__DOT__id_instruction)
                                           ? 7U : 0xfU)
                                       : 0xfU) : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 2U
                                                    : 0xfU)
                                                   : 0xfU))))
                : 0xfU) : ((0x20U & vlTOPp->top__DOT__id_instruction)
                            ? ((0x10U & vlTOPp->top__DOT__id_instruction)
                                ? ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 3U
                                                    : 0xfU)
                                                   : 0xfU)
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 5U
                                                    : 0xfU)
                                                   : 0xfU)))
                                : ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? 0xfU
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 1U
                                                    : 0xfU)
                                                   : 0xfU))))
                            : ((0x10U & vlTOPp->top__DOT__id_instruction)
                                ? ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 3U
                                                    : 0xfU)
                                                   : 0xfU)
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 0U
                                                    : 0xfU)
                                                   : 0xfU)))
                                : ((8U & vlTOPp->top__DOT__id_instruction)
                                    ? 0xfU : ((4U & vlTOPp->top__DOT__id_instruction)
                                               ? 0xfU
                                               : ((2U 
                                                   & vlTOPp->top__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->top__DOT__id_instruction)
                                                    ? 6U
                                                    : 0xfU)
                                                   : 0xfU))))));
    vlTOPp->top__DOT__id_jalr = (1U & (((((((((vlTOPp->top__DOT__id_instruction 
                                               >> 2U) 
                                              & (~ 
                                                 (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                             & (~ (vlTOPp->top__DOT__id_instruction 
                                                   >> 4U))) 
                                            & (vlTOPp->top__DOT__id_instruction 
                                               >> 5U)) 
                                           & (vlTOPp->top__DOT__id_instruction 
                                              >> 6U)) 
                                          & (~ (vlTOPp->top__DOT__id_instruction 
                                                >> 0xcU))) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 0xdU))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xeU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0x1eU))));
    vlTOPp->top__DOT__wb_data = ((4U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                  ? ((2U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                      ? 0U : ((1U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                               ? 0U
                                               : vlTOPp->top__DOT__ex_imm))
                                  : ((2U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                      ? ((1U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                          ? vlTOPp->top__DOT__wb_pc_plus_imm
                                          : vlTOPp->top__DOT__wb_jal_return_add)
                                      : ((1U & (IData)(vlTOPp->top__DOT__wb_mux_sel))
                                          ? vlTOPp->top__DOT__wb_mem_data
                                          : vlTOPp->top__DOT__wb_alu_result)));
    vlTOPp->top__DOT__control_unit__DOT__sltu = ((IData)(vlTOPp->top__DOT__id_sltur) 
                                                 | (IData)(vlTOPp->top__DOT__id_sltui));
    vlTOPp->top__DOT__control_unit__DOT__srl = ((IData)(vlTOPp->top__DOT__id_srlr) 
                                                | (IData)(vlTOPp->top__DOT__id_srli));
    vlTOPp->top__DOT__control_unit__DOT__sra = ((IData)(vlTOPp->top__DOT__id_srar) 
                                                | (IData)(vlTOPp->top__DOT__id_srai));
    vlTOPp->top__DOT__control_unit__DOT__orrr = ((IData)(vlTOPp->top__DOT__id_orr) 
                                                 | (IData)(vlTOPp->top__DOT__id_ori));
    vlTOPp->top__DOT__control_unit__DOT__andd = ((IData)(vlTOPp->top__DOT__id_andr) 
                                                 | (IData)(vlTOPp->top__DOT__id_andi));
    vlTOPp->top__DOT__id_imm = ((8U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                 ? 0U : ((4U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                          ? ((2U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->top__DOT__id_instruction 
                                                        >> 0x14U)))
                                                  : 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->top__DOT__id_instruction 
                                                        >> 0x14U))))
                                              : ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 0U
                                                  : 
                                                 ((0xffe00000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & (vlTOPp->top__DOT__id_instruction 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlTOPp->top__DOT__id_instruction) 
                                                        | ((0x800U 
                                                            & (vlTOPp->top__DOT__id_instruction 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlTOPp->top__DOT__id_instruction 
                                                                 >> 0x14U))))))))
                                          : ((2U & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlTOPp->top__DOT__id_instruction)
                                                  : 
                                                 ((0xffffe000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (vlTOPp->top__DOT__id_instruction 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlTOPp->top__DOT__id_instruction 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlTOPp->top__DOT__id_instruction 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlTOPp->top__DOT__id_instruction 
                                                                 >> 7U)))))))
                                              : ((1U 
                                                  & (IData)(vlTOPp->top__DOT__immediate_generator__DOT__sel))
                                                  ? 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->top__DOT__id_instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->top__DOT__id_instruction 
                                                           >> 7U))))
                                                  : 
                                                 ((0xfffff000U 
                                                   & (VL_NEGATE_I((IData)(
                                                                          (1U 
                                                                           & (vlTOPp->top__DOT__id_instruction 
                                                                              >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | (0xfffU 
                                                     & (vlTOPp->top__DOT__id_instruction 
                                                        >> 0x14U)))))));
    vlTOPp->top__DOT__id_jal_enb = ((0x6fU == (0x7fU 
                                               & vlTOPp->top__DOT__id_instruction)) 
                                    | (IData)(vlTOPp->top__DOT__id_jalr));
    vlTOPp->top__DOT__ex_rs1_forwarded = ((2U == (IData)(vlTOPp->top__DOT__forward_a))
                                           ? vlTOPp->top__DOT__mem_alu_result
                                           : ((1U == (IData)(vlTOPp->top__DOT__forward_a))
                                               ? vlTOPp->top__DOT__wb_data
                                               : vlTOPp->top__DOT__ex_rs1_data));
    vlTOPp->top__DOT__ex_rs2_forwarded = ((2U == (IData)(vlTOPp->top__DOT__forward_b))
                                           ? vlTOPp->top__DOT__mem_alu_result
                                           : ((1U == (IData)(vlTOPp->top__DOT__forward_b))
                                               ? vlTOPp->top__DOT__wb_data
                                               : vlTOPp->top__DOT__ex_rs2_data));
    vlTOPp->top__DOT__ex_alu_data_B = ((IData)(vlTOPp->top__DOT__ex_rs2_imm_sel)
                                        ? vlTOPp->top__DOT__ex_imm
                                        : vlTOPp->top__DOT__ex_rs2_forwarded);
    vlTOPp->top__DOT__ex_alu_result = ((8U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                        ? ((4U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                            ? ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     >= vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     < vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (VL_GTES_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)))
                                            : ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     != vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     == vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__ex_rs1_forwarded, 
                                                                  (0x1fU 
                                                                   & vlTOPp->top__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    - vlTOPp->top__DOT__ex_alu_data_B))))
                                        : ((4U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                            ? ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    & vlTOPp->top__DOT__ex_alu_data_B)
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    | vlTOPp->top__DOT__ex_alu_data_B))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    >> 
                                                    (0x1fU 
                                                     & vlTOPp->top__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    ^ vlTOPp->top__DOT__ex_alu_data_B)))
                                            : ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     < vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     < vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->top__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    + vlTOPp->top__DOT__ex_alu_data_B)))));
    vlTOPp->top__DOT__ex_branch_taken = 0U;
    if ((8U & (IData)(vlTOPp->top__DOT__ex_alu_sel))) {
        if ((4U & (IData)(vlTOPp->top__DOT__ex_alu_sel))) {
            vlTOPp->top__DOT__ex_branch_taken = ((2U 
                                                  & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                   ? 
                                                  (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                   >= vlTOPp->top__DOT__ex_alu_data_B)
                                                   : 
                                                  (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                   < vlTOPp->top__DOT__ex_alu_data_B))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                   ? 
                                                  VL_GTES_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)
                                                   : 
                                                  VL_LTS_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)));
        } else {
            if ((2U & (IData)(vlTOPp->top__DOT__ex_alu_sel))) {
                vlTOPp->top__DOT__ex_branch_taken = 
                    ((1U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                      ? (vlTOPp->top__DOT__ex_rs1_forwarded 
                         != vlTOPp->top__DOT__ex_alu_data_B)
                      : (vlTOPp->top__DOT__ex_rs1_forwarded 
                         == vlTOPp->top__DOT__ex_alu_data_B));
            }
        }
    }
    vlTOPp->__Vtableidx1 = ((8U & ((~ (((0x6fU == (0x7fU 
                                                   & vlTOPp->top__DOT__id_instruction)) 
                                        | (IData)(vlTOPp->top__DOT__id_jalr)) 
                                       | (IData)(vlTOPp->top__DOT__ex_branch_taken))) 
                                   << 3U)) | (((IData)(vlTOPp->top__DOT__id_jalr) 
                                               << 2U) 
                                              | (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->top__DOT__id_instruction)) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__ex_branch_taken))));
    vlTOPp->top__DOT__ex_sel_bit_mux = vlTOPp->__Vtable1_top__DOT__ex_sel_bit_mux
        [vlTOPp->__Vtableidx1];
    vlTOPp->top__DOT__flush_for_if = 0U;
    if (vlTOPp->top__DOT__ex_branch_taken) {
        vlTOPp->top__DOT__flush_for_if = 1U;
    } else {
        if (vlTOPp->top__DOT__id_jal_enb) {
            vlTOPp->top__DOT__flush_for_if = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__ex_load_enb) 
                 & ((((IData)(vlTOPp->top__DOT__ex_rd) 
                      == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                   >> 0xfU))) & (0U 
                                                 != (IData)(vlTOPp->top__DOT__ex_rd))) 
                    | (((IData)(vlTOPp->top__DOT__ex_rd) 
                        == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlTOPp->top__DOT__ex_rd)))))) {
                vlTOPp->top__DOT__flush_for_if = 1U;
            }
        }
    }
    vlTOPp->top__DOT__stall = 0U;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__ex_branch_taken)))) {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__id_jal_enb)))) {
            if (((IData)(vlTOPp->top__DOT__ex_load_enb) 
                 & ((((IData)(vlTOPp->top__DOT__ex_rd) 
                      == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                   >> 0xfU))) & (0U 
                                                 != (IData)(vlTOPp->top__DOT__ex_rd))) 
                    | (((IData)(vlTOPp->top__DOT__ex_rd) 
                        == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlTOPp->top__DOT__ex_rd)))))) {
                vlTOPp->top__DOT__stall = 1U;
            }
        }
    }
    vlTOPp->top__DOT__flush = 0U;
    if (vlTOPp->top__DOT__ex_branch_taken) {
        vlTOPp->top__DOT__flush = 1U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__id_jal_enb)))) {
            if (((IData)(vlTOPp->top__DOT__ex_load_enb) 
                 & ((((IData)(vlTOPp->top__DOT__ex_rd) 
                      == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                   >> 0xfU))) & (0U 
                                                 != (IData)(vlTOPp->top__DOT__ex_rd))) 
                    | (((IData)(vlTOPp->top__DOT__ex_rd) 
                        == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlTOPp->top__DOT__ex_rd)))))) {
                vlTOPp->top__DOT__flush = 1U;
            }
        }
    }
    vlTOPp->top__DOT__fetch__DOT__pc_next = ((2U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                                  ? vlTOPp->top__DOT__ex_pc_plus_imm
                                                  : 
                                                 (vlTOPp->top__DOT__if_current_pc 
                                                  + vlTOPp->top__DOT__id_imm))
                                              : ((1U 
                                                  & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                                  ? 
                                                 (((2U 
                                                    == (IData)(vlTOPp->top__DOT__forward_c))
                                                    ? vlTOPp->top__DOT__mem_alu_result
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->top__DOT__forward_c))
                                                     ? vlTOPp->top__DOT__wb_data
                                                     : vlTOPp->top__DOT__id_rs1_data)) 
                                                  + vlTOPp->top__DOT__id_imm)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlTOPp->top__DOT__fetch__DOT__pc)));
}

void Vtop::_initial__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x696f6e73U;
    __Vtemp1[2U] = 0x72756374U;
    __Vtemp1[3U] = 0x696e7374U;
    VL_READMEM_N(true, 32, 4097, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlTOPp->top__DOT__fetch__DOT__IM__DOT__memory
                 , 0, ~VL_ULL(0));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__mem_sb = ((~ (IData)(vlTOPp->rst)) 
                                & (IData)(vlTOPp->top__DOT__ex_sb));
    vlTOPp->top__DOT__mem_sh = ((~ (IData)(vlTOPp->rst)) 
                                & (IData)(vlTOPp->top__DOT__ex_sh));
    vlTOPp->top__DOT__mem_sw = ((~ (IData)(vlTOPp->rst)) 
                                & (IData)(vlTOPp->top__DOT__ex_sw));
    vlTOPp->top__DOT__mem_store_data = ((IData)(vlTOPp->rst)
                                         ? 0U : ((0U 
                                                  == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                                                  ? vlTOPp->top__DOT__ex_rs2_forwarded
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                                                   ? 
                                                  (0xffU 
                                                   & vlTOPp->top__DOT__ex_rs2_forwarded)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                                                    ? 
                                                   (0xffffU 
                                                    & vlTOPp->top__DOT__ex_rs2_forwarded)
                                                    : 0U))));
    vlTOPp->top__DOT__mem_alu_result = ((IData)(vlTOPp->rst)
                                         ? 0U : vlTOPp->top__DOT__ex_alu_result);
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_sb = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_sb = vlTOPp->top__DOT__id_sb;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_sh = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_sh = vlTOPp->top__DOT__id_sh;
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->top__DOT__flush))) {
        vlTOPp->top__DOT__ex_sw = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__stall)))) {
            vlTOPp->top__DOT__ex_sw = vlTOPp->top__DOT__id_sw;
        }
    }
    if (vlTOPp->top__DOT__mem_lb) {
        vlTOPp->top__DOT__mem_read_data = ((0xffffff00U 
                                            & (VL_NEGATE_I((IData)(
                                                                   (1U 
                                                                    & (((0x1000U 
                                                                         >= 
                                                                         (0x1fffU 
                                                                          & vlTOPp->top__DOT__mem_alu_result))
                                                                         ? 
                                                                        vlTOPp->top__DOT__data_mem__DOT__memory
                                                                        [
                                                                        (0x1fffU 
                                                                         & vlTOPp->top__DOT__mem_alu_result)]
                                                                         : 0U) 
                                                                       >> 7U)))) 
                                               << 8U)) 
                                           | ((0x1000U 
                                               >= (0x1fffU 
                                                   & vlTOPp->top__DOT__mem_alu_result))
                                               ? vlTOPp->top__DOT__data_mem__DOT__memory
                                              [(0x1fffU 
                                                & vlTOPp->top__DOT__mem_alu_result)]
                                               : 0U));
    } else {
        if (vlTOPp->top__DOT__mem_lh) {
            vlTOPp->top__DOT__mem_read_data = ((0xffff0000U 
                                                & (VL_NEGATE_I((IData)(
                                                                       (1U 
                                                                        & (((0x1000U 
                                                                             >= 
                                                                             (0x1fffU 
                                                                              & ((IData)(1U) 
                                                                                + vlTOPp->top__DOT__mem_alu_result)))
                                                                             ? 
                                                                            vlTOPp->top__DOT__data_mem__DOT__memory
                                                                            [
                                                                            (0x1fffU 
                                                                             & ((IData)(1U) 
                                                                                + vlTOPp->top__DOT__mem_alu_result))]
                                                                             : 0U) 
                                                                           >> 7U)))) 
                                                   << 0x10U)) 
                                               | ((((0x1000U 
                                                     >= 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + vlTOPp->top__DOT__mem_alu_result)))
                                                     ? 
                                                    vlTOPp->top__DOT__data_mem__DOT__memory
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + vlTOPp->top__DOT__mem_alu_result))]
                                                     : 0U) 
                                                   << 8U) 
                                                  | ((0x1000U 
                                                      >= 
                                                      (0x1fffU 
                                                       & vlTOPp->top__DOT__mem_alu_result))
                                                      ? 
                                                     vlTOPp->top__DOT__data_mem__DOT__memory
                                                     [
                                                     (0x1fffU 
                                                      & vlTOPp->top__DOT__mem_alu_result)]
                                                      : 0U)));
        } else {
            if (vlTOPp->top__DOT__mem_lw) {
                vlTOPp->top__DOT__mem_read_data = (
                                                   (((0x1000U 
                                                      >= 
                                                      (0x1fffU 
                                                       & ((IData)(3U) 
                                                          + vlTOPp->top__DOT__mem_alu_result)))
                                                      ? 
                                                     vlTOPp->top__DOT__data_mem__DOT__memory
                                                     [
                                                     (0x1fffU 
                                                      & ((IData)(3U) 
                                                         + vlTOPp->top__DOT__mem_alu_result))]
                                                      : 0U) 
                                                    << 0x18U) 
                                                   | ((((0x1000U 
                                                         >= 
                                                         (0x1fffU 
                                                          & ((IData)(2U) 
                                                             + vlTOPp->top__DOT__mem_alu_result)))
                                                         ? 
                                                        vlTOPp->top__DOT__data_mem__DOT__memory
                                                        [
                                                        (0x1fffU 
                                                         & ((IData)(2U) 
                                                            + vlTOPp->top__DOT__mem_alu_result))]
                                                         : 0U) 
                                                       << 0x10U) 
                                                      | ((((0x1000U 
                                                            >= 
                                                            (0x1fffU 
                                                             & ((IData)(1U) 
                                                                + vlTOPp->top__DOT__mem_alu_result)))
                                                            ? 
                                                           vlTOPp->top__DOT__data_mem__DOT__memory
                                                           [
                                                           (0x1fffU 
                                                            & ((IData)(1U) 
                                                               + vlTOPp->top__DOT__mem_alu_result))]
                                                            : 0U) 
                                                          << 8U) 
                                                         | ((0x1000U 
                                                             >= 
                                                             (0x1fffU 
                                                              & vlTOPp->top__DOT__mem_alu_result))
                                                             ? 
                                                            vlTOPp->top__DOT__data_mem__DOT__memory
                                                            [
                                                            (0x1fffU 
                                                             & vlTOPp->top__DOT__mem_alu_result)]
                                                             : 0U))));
            } else {
                if (vlTOPp->top__DOT__mem_lbu) {
                    vlTOPp->top__DOT__mem_read_data 
                        = ((0x1000U >= (0x1fffU & vlTOPp->top__DOT__mem_alu_result))
                            ? vlTOPp->top__DOT__data_mem__DOT__memory
                           [(0x1fffU & vlTOPp->top__DOT__mem_alu_result)]
                            : 0U);
                } else {
                    if (vlTOPp->top__DOT__mem_lhu) {
                        vlTOPp->top__DOT__mem_read_data 
                            = ((((0x1000U >= (0x1fffU 
                                              & ((IData)(1U) 
                                                 + vlTOPp->top__DOT__mem_alu_result)))
                                  ? vlTOPp->top__DOT__data_mem__DOT__memory
                                 [(0x1fffU & ((IData)(1U) 
                                              + vlTOPp->top__DOT__mem_alu_result))]
                                  : 0U) << 8U) | ((0x1000U 
                                                   >= 
                                                   (0x1fffU 
                                                    & vlTOPp->top__DOT__mem_alu_result))
                                                   ? 
                                                  vlTOPp->top__DOT__data_mem__DOT__memory
                                                  [
                                                  (0x1fffU 
                                                   & vlTOPp->top__DOT__mem_alu_result)]
                                                   : 0U));
                    }
                }
            }
        }
    }
    vlTOPp->top__DOT__ex_rs1_forwarded = ((2U == (IData)(vlTOPp->top__DOT__forward_a))
                                           ? vlTOPp->top__DOT__mem_alu_result
                                           : ((1U == (IData)(vlTOPp->top__DOT__forward_a))
                                               ? vlTOPp->top__DOT__wb_data
                                               : vlTOPp->top__DOT__ex_rs1_data));
    vlTOPp->top__DOT__ex_rs2_forwarded = ((2U == (IData)(vlTOPp->top__DOT__forward_b))
                                           ? vlTOPp->top__DOT__mem_alu_result
                                           : ((1U == (IData)(vlTOPp->top__DOT__forward_b))
                                               ? vlTOPp->top__DOT__wb_data
                                               : vlTOPp->top__DOT__ex_rs2_data));
    vlTOPp->top__DOT__id_sb = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_sh = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (vlTOPp->top__DOT__id_instruction 
                                           >> 0xcU)) 
                                       & (~ (vlTOPp->top__DOT__id_instruction 
                                             >> 0xdU))) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__id_sw = (1U & (((((((((~ (vlTOPp->top__DOT__id_instruction 
                                                >> 2U)) 
                                            & (~ (vlTOPp->top__DOT__id_instruction 
                                                  >> 3U))) 
                                           & (~ (vlTOPp->top__DOT__id_instruction 
                                                 >> 4U))) 
                                          & (vlTOPp->top__DOT__id_instruction 
                                             >> 5U)) 
                                         & (~ (vlTOPp->top__DOT__id_instruction 
                                               >> 6U))) 
                                        & (~ (vlTOPp->top__DOT__id_instruction 
                                              >> 0xcU))) 
                                       & (vlTOPp->top__DOT__id_instruction 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->top__DOT__id_instruction 
                                            >> 0xeU))) 
                                     & (~ (vlTOPp->top__DOT__id_instruction 
                                           >> 0x1eU))));
    vlTOPp->top__DOT__ex_alu_data_B = ((IData)(vlTOPp->top__DOT__ex_rs2_imm_sel)
                                        ? vlTOPp->top__DOT__ex_imm
                                        : vlTOPp->top__DOT__ex_rs2_forwarded);
    vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit 
        = (((IData)(vlTOPp->top__DOT__ex_sb) << 3U) 
           | (((IData)(vlTOPp->top__DOT__ex_sh) << 2U) 
              | ((IData)(vlTOPp->top__DOT__ex_sw) << 1U)));
    vlTOPp->top__DOT__ex_alu_result = ((8U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                        ? ((4U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                            ? ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     >= vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     < vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (VL_GTES_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)))
                                            : ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     != vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     == vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlTOPp->top__DOT__ex_rs1_forwarded, 
                                                                  (0x1fU 
                                                                   & vlTOPp->top__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    - vlTOPp->top__DOT__ex_alu_data_B))))
                                        : ((4U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                            ? ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    & vlTOPp->top__DOT__ex_alu_data_B)
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    | vlTOPp->top__DOT__ex_alu_data_B))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    >> 
                                                    (0x1fU 
                                                     & vlTOPp->top__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    ^ vlTOPp->top__DOT__ex_alu_data_B)))
                                            : ((2U 
                                                & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     < vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlTOPp->top__DOT__ex_rs1_forwarded 
                                                     < vlTOPp->top__DOT__ex_alu_data_B)
                                                     ? 1U
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                    ? 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    << 
                                                    (0x1fU 
                                                     & vlTOPp->top__DOT__ex_alu_data_B))
                                                    : 
                                                   (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                    + vlTOPp->top__DOT__ex_alu_data_B)))));
    vlTOPp->top__DOT__ex_branch_taken = 0U;
    if ((8U & (IData)(vlTOPp->top__DOT__ex_alu_sel))) {
        if ((4U & (IData)(vlTOPp->top__DOT__ex_alu_sel))) {
            vlTOPp->top__DOT__ex_branch_taken = ((2U 
                                                  & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                   ? 
                                                  (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                   >= vlTOPp->top__DOT__ex_alu_data_B)
                                                   : 
                                                  (vlTOPp->top__DOT__ex_rs1_forwarded 
                                                   < vlTOPp->top__DOT__ex_alu_data_B))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                                                   ? 
                                                  VL_GTES_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)
                                                   : 
                                                  VL_LTS_III(1,32,32, vlTOPp->top__DOT__ex_rs1_forwarded, vlTOPp->top__DOT__ex_alu_data_B)));
        } else {
            if ((2U & (IData)(vlTOPp->top__DOT__ex_alu_sel))) {
                vlTOPp->top__DOT__ex_branch_taken = 
                    ((1U & (IData)(vlTOPp->top__DOT__ex_alu_sel))
                      ? (vlTOPp->top__DOT__ex_rs1_forwarded 
                         != vlTOPp->top__DOT__ex_alu_data_B)
                      : (vlTOPp->top__DOT__ex_rs1_forwarded 
                         == vlTOPp->top__DOT__ex_alu_data_B));
            }
        }
    }
    vlTOPp->__Vtableidx1 = ((8U & ((~ (((0x6fU == (0x7fU 
                                                   & vlTOPp->top__DOT__id_instruction)) 
                                        | (IData)(vlTOPp->top__DOT__id_jalr)) 
                                       | (IData)(vlTOPp->top__DOT__ex_branch_taken))) 
                                   << 3U)) | (((IData)(vlTOPp->top__DOT__id_jalr) 
                                               << 2U) 
                                              | (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->top__DOT__id_instruction)) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->top__DOT__ex_branch_taken))));
    vlTOPp->top__DOT__ex_sel_bit_mux = vlTOPp->__Vtable1_top__DOT__ex_sel_bit_mux
        [vlTOPp->__Vtableidx1];
    vlTOPp->top__DOT__flush_for_if = 0U;
    if (vlTOPp->top__DOT__ex_branch_taken) {
        vlTOPp->top__DOT__flush_for_if = 1U;
    } else {
        if (vlTOPp->top__DOT__id_jal_enb) {
            vlTOPp->top__DOT__flush_for_if = 1U;
        } else {
            if (((IData)(vlTOPp->top__DOT__ex_load_enb) 
                 & ((((IData)(vlTOPp->top__DOT__ex_rd) 
                      == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                   >> 0xfU))) & (0U 
                                                 != (IData)(vlTOPp->top__DOT__ex_rd))) 
                    | (((IData)(vlTOPp->top__DOT__ex_rd) 
                        == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlTOPp->top__DOT__ex_rd)))))) {
                vlTOPp->top__DOT__flush_for_if = 1U;
            }
        }
    }
    vlTOPp->top__DOT__stall = 0U;
    if ((1U & (~ (IData)(vlTOPp->top__DOT__ex_branch_taken)))) {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__id_jal_enb)))) {
            if (((IData)(vlTOPp->top__DOT__ex_load_enb) 
                 & ((((IData)(vlTOPp->top__DOT__ex_rd) 
                      == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                   >> 0xfU))) & (0U 
                                                 != (IData)(vlTOPp->top__DOT__ex_rd))) 
                    | (((IData)(vlTOPp->top__DOT__ex_rd) 
                        == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlTOPp->top__DOT__ex_rd)))))) {
                vlTOPp->top__DOT__stall = 1U;
            }
        }
    }
    vlTOPp->top__DOT__flush = 0U;
    if (vlTOPp->top__DOT__ex_branch_taken) {
        vlTOPp->top__DOT__flush = 1U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->top__DOT__id_jal_enb)))) {
            if (((IData)(vlTOPp->top__DOT__ex_load_enb) 
                 & ((((IData)(vlTOPp->top__DOT__ex_rd) 
                      == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                   >> 0xfU))) & (0U 
                                                 != (IData)(vlTOPp->top__DOT__ex_rd))) 
                    | (((IData)(vlTOPp->top__DOT__ex_rd) 
                        == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                     >> 0x14U))) & 
                       (0U != (IData)(vlTOPp->top__DOT__ex_rd)))))) {
                vlTOPp->top__DOT__flush = 1U;
            }
        }
    }
    vlTOPp->top__DOT__fetch__DOT__pc_next = ((2U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                                  ? vlTOPp->top__DOT__ex_pc_plus_imm
                                                  : 
                                                 (vlTOPp->top__DOT__if_current_pc 
                                                  + vlTOPp->top__DOT__id_imm))
                                              : ((1U 
                                                  & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                                  ? 
                                                 (((2U 
                                                    == (IData)(vlTOPp->top__DOT__forward_c))
                                                    ? vlTOPp->top__DOT__mem_alu_result
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->top__DOT__forward_c))
                                                     ? vlTOPp->top__DOT__wb_data
                                                     : vlTOPp->top__DOT__id_rs1_data)) 
                                                  + vlTOPp->top__DOT__id_imm)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlTOPp->top__DOT__fetch__DOT__pc)));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
    vlTOPp->_initial__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    top__DOT__ex_sel_bit_mux = VL_RAND_RESET_I(2);
    top__DOT__wb_sel_bit_mux = VL_RAND_RESET_I(2);
    top__DOT__mem_sel_bit_mux = VL_RAND_RESET_I(2);
    top__DOT__ex_pc_plus_imm = VL_RAND_RESET_I(32);
    top__DOT__ex_rs1_plus_imm_for_jalr = VL_RAND_RESET_I(32);
    top__DOT__id_instruction = VL_RAND_RESET_I(32);
    top__DOT__id_pcplus4 = VL_RAND_RESET_I(32);
    top__DOT__stall = VL_RAND_RESET_I(1);
    top__DOT__flush = VL_RAND_RESET_I(1);
    top__DOT__mem_jal_enb = VL_RAND_RESET_I(1);
    top__DOT__wb_rd = VL_RAND_RESET_I(5);
    top__DOT__ex_rd = VL_RAND_RESET_I(5);
    top__DOT__ex_rs1 = VL_RAND_RESET_I(5);
    top__DOT__ex_rs2 = VL_RAND_RESET_I(5);
    top__DOT__mem_rd = VL_RAND_RESET_I(5);
    top__DOT__id_rs1_data = VL_RAND_RESET_I(32);
    top__DOT__id_imm = VL_RAND_RESET_I(32);
    top__DOT__ex_alu_sel = VL_RAND_RESET_I(4);
    top__DOT__id_jal_enb = VL_RAND_RESET_I(1);
    top__DOT__id_lui_enb = VL_RAND_RESET_I(1);
    top__DOT__id_auipc_wenb = VL_RAND_RESET_I(1);
    top__DOT__id_sb = VL_RAND_RESET_I(1);
    top__DOT__id_sw = VL_RAND_RESET_I(1);
    top__DOT__id_sh = VL_RAND_RESET_I(1);
    top__DOT__id_addr = VL_RAND_RESET_I(1);
    top__DOT__id_sub = VL_RAND_RESET_I(1);
    top__DOT__id_sllr = VL_RAND_RESET_I(1);
    top__DOT__id_sltr = VL_RAND_RESET_I(1);
    top__DOT__id_sltur = VL_RAND_RESET_I(1);
    top__DOT__id_xorr = VL_RAND_RESET_I(1);
    top__DOT__id_srlr = VL_RAND_RESET_I(1);
    top__DOT__id_srar = VL_RAND_RESET_I(1);
    top__DOT__id_orr = VL_RAND_RESET_I(1);
    top__DOT__id_andr = VL_RAND_RESET_I(1);
    top__DOT__id_addi = VL_RAND_RESET_I(1);
    top__DOT__id_addi2 = VL_RAND_RESET_I(1);
    top__DOT__id_slli = VL_RAND_RESET_I(1);
    top__DOT__id_slti = VL_RAND_RESET_I(1);
    top__DOT__id_sltui = VL_RAND_RESET_I(1);
    top__DOT__id_xori = VL_RAND_RESET_I(1);
    top__DOT__id_srli = VL_RAND_RESET_I(1);
    top__DOT__id_srai = VL_RAND_RESET_I(1);
    top__DOT__id_ori = VL_RAND_RESET_I(1);
    top__DOT__id_andi = VL_RAND_RESET_I(1);
    top__DOT__id_jalr = VL_RAND_RESET_I(1);
    top__DOT__id_beq = VL_RAND_RESET_I(1);
    top__DOT__id_bne = VL_RAND_RESET_I(1);
    top__DOT__id_blt = VL_RAND_RESET_I(1);
    top__DOT__id_bge = VL_RAND_RESET_I(1);
    top__DOT__id_bltu = VL_RAND_RESET_I(1);
    top__DOT__id_bgeu = VL_RAND_RESET_I(1);
    top__DOT__wb_data = VL_RAND_RESET_I(32);
    top__DOT__ex_branch_taken = VL_RAND_RESET_I(1);
    top__DOT__ex_jal_enb = VL_RAND_RESET_I(1);
    top__DOT__ex_wenb = VL_RAND_RESET_I(1);
    top__DOT__ex_rs2_imm_sel = VL_RAND_RESET_I(1);
    top__DOT__ex_branch_enb = VL_RAND_RESET_I(1);
    top__DOT__ex_lui_enb = VL_RAND_RESET_I(1);
    top__DOT__ex_auipc_wenb = VL_RAND_RESET_I(1);
    top__DOT__ex_sb = VL_RAND_RESET_I(1);
    top__DOT__ex_sh = VL_RAND_RESET_I(1);
    top__DOT__ex_sw = VL_RAND_RESET_I(1);
    top__DOT__ex_alu_result = VL_RAND_RESET_I(32);
    top__DOT__ex_alu_data_B = VL_RAND_RESET_I(32);
    top__DOT__ex_rs1_data = VL_RAND_RESET_I(32);
    top__DOT__ex_rs2_data = VL_RAND_RESET_I(32);
    top__DOT__ex_imm = VL_RAND_RESET_I(32);
    top__DOT__ex_pcplus4 = VL_RAND_RESET_I(32);
    top__DOT__ex_rs1_forwarded = VL_RAND_RESET_I(32);
    top__DOT__ex_rs2_forwarded = VL_RAND_RESET_I(32);
    top__DOT__mem_store_enb = VL_RAND_RESET_I(1);
    top__DOT__ex_store_enb = VL_RAND_RESET_I(1);
    top__DOT__wb_load_enb = VL_RAND_RESET_I(1);
    top__DOT__wb_jal_enb = VL_RAND_RESET_I(1);
    top__DOT__wb_lui_enb = VL_RAND_RESET_I(1);
    top__DOT__wb_auipc_wenb = VL_RAND_RESET_I(1);
    top__DOT__mem_wenb = VL_RAND_RESET_I(1);
    top__DOT__mem_load_enb = VL_RAND_RESET_I(1);
    top__DOT__mem_sb = VL_RAND_RESET_I(1);
    top__DOT__mem_sh = VL_RAND_RESET_I(1);
    top__DOT__mem_sw = VL_RAND_RESET_I(1);
    top__DOT__forward_a = VL_RAND_RESET_I(2);
    top__DOT__forward_b = VL_RAND_RESET_I(2);
    top__DOT__mem_alu_result = VL_RAND_RESET_I(32);
    top__DOT__mem_store_data = VL_RAND_RESET_I(32);
    top__DOT__mem_read_data = VL_RAND_RESET_I(32);
    top__DOT__wb_mem_data = VL_RAND_RESET_I(32);
    top__DOT__wb_alu_result = VL_RAND_RESET_I(32);
    top__DOT__wb_pcplus4 = VL_RAND_RESET_I(32);
    top__DOT__mem_pc_plus_imm = VL_RAND_RESET_I(32);
    top__DOT__wb_pc_plus_imm = VL_RAND_RESET_I(32);
    top__DOT__wb_mux_sel = VL_RAND_RESET_I(3);
    top__DOT__mem_jal_return_add = VL_RAND_RESET_I(32);
    top__DOT__wb_jal_return_add = VL_RAND_RESET_I(32);
    top__DOT__flush_for_if = VL_RAND_RESET_I(1);
    top__DOT__id_lb = VL_RAND_RESET_I(1);
    top__DOT__id_lh = VL_RAND_RESET_I(1);
    top__DOT__id_lhu = VL_RAND_RESET_I(1);
    top__DOT__id_lbu = VL_RAND_RESET_I(1);
    top__DOT__id_lw = VL_RAND_RESET_I(1);
    top__DOT__forward_c = VL_RAND_RESET_I(2);
    top__DOT__id_current_pc = VL_RAND_RESET_I(32);
    top__DOT__ex_current_pc = VL_RAND_RESET_I(32);
    top__DOT__if_current_pc = VL_RAND_RESET_I(32);
    top__DOT__ex_jal_return_add = VL_RAND_RESET_I(32);
    top__DOT__ex_lb = VL_RAND_RESET_I(1);
    top__DOT__ex_lh = VL_RAND_RESET_I(1);
    top__DOT__ex_lw = VL_RAND_RESET_I(1);
    top__DOT__ex_lbu = VL_RAND_RESET_I(1);
    top__DOT__ex_lhu = VL_RAND_RESET_I(1);
    top__DOT__ex_load_enb = VL_RAND_RESET_I(1);
    top__DOT__mem_lb = VL_RAND_RESET_I(1);
    top__DOT__mem_lh = VL_RAND_RESET_I(1);
    top__DOT__mem_lw = VL_RAND_RESET_I(1);
    top__DOT__mem_lbu = VL_RAND_RESET_I(1);
    top__DOT__mem_lhu = VL_RAND_RESET_I(1);
    top__DOT__wb_wenb = VL_RAND_RESET_I(1);
    top__DOT__mem_rs1 = VL_RAND_RESET_I(5);
    top__DOT__mem_rs2 = VL_RAND_RESET_I(5);
    top__DOT____Vcellinp__mux_rs2__sel_bit = VL_RAND_RESET_I(4);
    top__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    top__DOT__fetch__DOT__pc_next = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4097; ++__Vi0) {
            top__DOT__fetch__DOT__IM__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    VL_RAND_RESET_W(1024, top__DOT__regfile__DOT__registers);
    top__DOT__regfile__DOT__i = VL_RAND_RESET_I(32);
    top__DOT__immediate_generator__DOT__sel = VL_RAND_RESET_I(4);
    top__DOT__control_unit__DOT__selected_bits = VL_RAND_RESET_I(9);
    top__DOT__control_unit__DOT__orrr = VL_RAND_RESET_I(1);
    top__DOT__control_unit__DOT__andd = VL_RAND_RESET_I(1);
    top__DOT__control_unit__DOT__sltu = VL_RAND_RESET_I(1);
    top__DOT__control_unit__DOT__srl = VL_RAND_RESET_I(1);
    top__DOT__control_unit__DOT__sra = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4097; ++__Vi0) {
            top__DOT__data_mem__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top__DOT__data_mem__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    top__DOT__data_mem__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    top__DOT__data_mem__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    top__DOT__data_mem__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    top__DOT__data_mem__DOT____Vlvbound5 = VL_RAND_RESET_I(8);
    top__DOT__data_mem__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    top__DOT__data_mem__DOT____Vlvbound7 = VL_RAND_RESET_I(8);
    __Vtableidx1 = 0;
    __Vtable1_top__DOT__ex_sel_bit_mux[0] = 0U;
    __Vtable1_top__DOT__ex_sel_bit_mux[1] = 3U;
    __Vtable1_top__DOT__ex_sel_bit_mux[2] = 2U;
    __Vtable1_top__DOT__ex_sel_bit_mux[3] = 3U;
    __Vtable1_top__DOT__ex_sel_bit_mux[4] = 1U;
    __Vtable1_top__DOT__ex_sel_bit_mux[5] = 3U;
    __Vtable1_top__DOT__ex_sel_bit_mux[6] = 2U;
    __Vtable1_top__DOT__ex_sel_bit_mux[7] = 3U;
    __Vtable1_top__DOT__ex_sel_bit_mux[8] = 0U;
    __Vtable1_top__DOT__ex_sel_bit_mux[9] = 3U;
    __Vtable1_top__DOT__ex_sel_bit_mux[10] = 2U;
    __Vtable1_top__DOT__ex_sel_bit_mux[11] = 3U;
    __Vtable1_top__DOT__ex_sel_bit_mux[12] = 1U;
    __Vtable1_top__DOT__ex_sel_bit_mux[13] = 3U;
    __Vtable1_top__DOT__ex_sel_bit_mux[14] = 2U;
    __Vtable1_top__DOT__ex_sel_bit_mux[15] = 3U;
    __Vtableidx2 = 0;
    __Vtable2_top__DOT__wb_mux_sel[0] = 0U;
    __Vtable2_top__DOT__wb_mux_sel[1] = 0U;
    __Vtable2_top__DOT__wb_mux_sel[2] = 1U;
    __Vtable2_top__DOT__wb_mux_sel[3] = 1U;
    __Vtable2_top__DOT__wb_mux_sel[4] = 2U;
    __Vtable2_top__DOT__wb_mux_sel[5] = 2U;
    __Vtable2_top__DOT__wb_mux_sel[6] = 2U;
    __Vtable2_top__DOT__wb_mux_sel[7] = 2U;
    __Vtable2_top__DOT__wb_mux_sel[8] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[9] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[10] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[11] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[12] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[13] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[14] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[15] = 3U;
    __Vtable2_top__DOT__wb_mux_sel[16] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[17] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[18] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[19] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[20] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[21] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[22] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[23] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[24] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[25] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[26] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[27] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[28] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[29] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[30] = 4U;
    __Vtable2_top__DOT__wb_mux_sel[31] = 4U;
    __Vm_traceActivity = 0;
}
