// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t = (Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((0x1000U >= (0x1fffU & (vlTOPp->top__DOT__fetch__DOT__pc 
                                                   >> 2U)))
                            ? vlTOPp->top__DOT__fetch__DOT__IM__DOT__memory
                           [(0x1fffU & (vlTOPp->top__DOT__fetch__DOT__pc 
                                        >> 2U))] : 0U)),32);
        vcdp->chgBus(c+9,(vlTOPp->top__DOT__id_rs1_data),32);
        vcdp->chgBus(c+17,(vlTOPp->top__DOT__id_imm),32);
        vcdp->chgBus(c+25,(((((((((((IData)(vlTOPp->top__DOT__id_sub) 
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
                                        << 2U) | ((
                                                   ((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__orrr) 
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
        vcdp->chgBit(c+33,((((((IData)(vlTOPp->top__DOT__id_lb) 
                               | (IData)(vlTOPp->top__DOT__id_lh)) 
                              | (IData)(vlTOPp->top__DOT__id_lw)) 
                             | (IData)(vlTOPp->top__DOT__id_lbu)) 
                            | (IData)(vlTOPp->top__DOT__id_lhu))));
        vcdp->chgBit(c+41,(vlTOPp->top__DOT__id_jal_enb));
        vcdp->chgBit(c+49,(((((((IData)(vlTOPp->top__DOT__id_beq) 
                                | (IData)(vlTOPp->top__DOT__id_bne)) 
                               | (IData)(vlTOPp->top__DOT__id_blt)) 
                              | (IData)(vlTOPp->top__DOT__id_bge)) 
                             | (IData)(vlTOPp->top__DOT__id_bltu)) 
                            | (IData)(vlTOPp->top__DOT__id_bgeu))));
        vcdp->chgBit(c+57,(vlTOPp->top__DOT__id_lui_enb));
        vcdp->chgBit(c+65,(vlTOPp->top__DOT__id_auipc_wenb));
        vcdp->chgBit(c+73,(vlTOPp->top__DOT__id_addr));
        vcdp->chgBit(c+81,(vlTOPp->top__DOT__id_sub));
        vcdp->chgBit(c+89,(vlTOPp->top__DOT__id_sllr));
        vcdp->chgBit(c+97,(vlTOPp->top__DOT__id_sltr));
        vcdp->chgBit(c+105,(vlTOPp->top__DOT__id_sltur));
        vcdp->chgBit(c+113,(vlTOPp->top__DOT__id_xorr));
        vcdp->chgBit(c+121,(vlTOPp->top__DOT__id_srlr));
        vcdp->chgBit(c+129,(vlTOPp->top__DOT__id_srar));
        vcdp->chgBit(c+137,(vlTOPp->top__DOT__id_orr));
        vcdp->chgBit(c+145,(vlTOPp->top__DOT__id_andr));
        vcdp->chgBit(c+153,(vlTOPp->top__DOT__id_addi));
        vcdp->chgBit(c+161,(vlTOPp->top__DOT__id_addi2));
        vcdp->chgBit(c+169,(vlTOPp->top__DOT__id_slli));
        vcdp->chgBit(c+177,(vlTOPp->top__DOT__id_slti));
        vcdp->chgBit(c+185,(vlTOPp->top__DOT__id_sltui));
        vcdp->chgBit(c+193,(vlTOPp->top__DOT__id_xori));
        vcdp->chgBit(c+201,(vlTOPp->top__DOT__id_srli));
        vcdp->chgBit(c+209,(vlTOPp->top__DOT__id_srai));
        vcdp->chgBit(c+217,(vlTOPp->top__DOT__id_ori));
        vcdp->chgBit(c+225,(vlTOPp->top__DOT__id_andi));
        vcdp->chgBit(c+233,(vlTOPp->top__DOT__id_jalr));
        vcdp->chgBit(c+241,(vlTOPp->top__DOT__id_beq));
        vcdp->chgBit(c+249,(vlTOPp->top__DOT__id_bne));
        vcdp->chgBit(c+257,(vlTOPp->top__DOT__id_blt));
        vcdp->chgBit(c+265,(vlTOPp->top__DOT__id_bge));
        vcdp->chgBit(c+273,(vlTOPp->top__DOT__id_bltu));
        vcdp->chgBit(c+281,(vlTOPp->top__DOT__id_bgeu));
        vcdp->chgBus(c+289,(vlTOPp->top__DOT__wb_data),32);
        vcdp->chgBus(c+297,(vlTOPp->top__DOT__forward_a),2);
        vcdp->chgBus(c+305,(vlTOPp->top__DOT__forward_b),2);
        vcdp->chgBus(c+313,((vlTOPp->top__DOT__id_pcplus4 
                             + vlTOPp->top__DOT__id_imm)),32);
        vcdp->chgBus(c+321,(((3U == ((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                       & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                                      & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                         == (0x1fU 
                                             & (vlTOPp->top__DOT__id_instruction 
                                                >> 0xfU))))
                                      ? 3U : 0U)) ? vlTOPp->top__DOT__wb_data
                              : vlTOPp->top__DOT__id_rs1_data)),32);
        vcdp->chgBus(c+329,(((3U == ((((IData)(vlTOPp->top__DOT__wb_wenb) 
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
        vcdp->chgBus(c+337,(vlTOPp->top__DOT__wb_mux_sel),3);
        vcdp->chgBus(c+345,((vlTOPp->top__DOT__if_current_pc 
                             + vlTOPp->top__DOT__id_imm)),32);
        vcdp->chgBit(c+353,(vlTOPp->top__DOT__id_lb));
        vcdp->chgBit(c+361,(vlTOPp->top__DOT__id_lh));
        vcdp->chgBit(c+369,(vlTOPp->top__DOT__id_lhu));
        vcdp->chgBit(c+377,(vlTOPp->top__DOT__id_lbu));
        vcdp->chgBit(c+385,(vlTOPp->top__DOT__id_lw));
        vcdp->chgBus(c+393,(vlTOPp->top__DOT__forward_c),2);
        vcdp->chgBus(c+401,(vlTOPp->top__DOT__immediate_generator__DOT__sel),4);
        vcdp->chgBit(c+409,(((((((((IData)(vlTOPp->top__DOT__id_sub) 
                                   | (IData)(vlTOPp->top__DOT__control_unit__DOT__sra)) 
                                  | (IData)(vlTOPp->top__DOT__id_beq)) 
                                 | (IData)(vlTOPp->top__DOT__id_bne)) 
                                | (IData)(vlTOPp->top__DOT__id_blt)) 
                               | (IData)(vlTOPp->top__DOT__id_bge)) 
                              | (IData)(vlTOPp->top__DOT__id_bltu)) 
                             | (IData)(vlTOPp->top__DOT__id_bgeu))));
        vcdp->chgBit(c+417,((((((((((IData)(vlTOPp->top__DOT__id_xorr) 
                                    | (IData)(vlTOPp->top__DOT__id_xori)) 
                                   | (IData)(vlTOPp->top__DOT__control_unit__DOT__orrr)) 
                                  | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                 | (IData)(vlTOPp->top__DOT__id_blt)) 
                                | (IData)(vlTOPp->top__DOT__id_bge)) 
                               | (IData)(vlTOPp->top__DOT__id_bltu)) 
                              | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                             | (IData)(vlTOPp->top__DOT__control_unit__DOT__srl))));
        vcdp->chgBit(c+425,(((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__orrr) 
                                   | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                                  | (IData)(vlTOPp->top__DOT__id_beq)) 
                                 | (IData)(vlTOPp->top__DOT__id_bne)) 
                                | (IData)(vlTOPp->top__DOT__id_bltu)) 
                               | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                              | ((IData)(vlTOPp->top__DOT__id_sltr) 
                                 | (IData)(vlTOPp->top__DOT__id_slti))) 
                             | (IData)(vlTOPp->top__DOT__control_unit__DOT__sltu))));
        vcdp->chgBit(c+433,(((((((((IData)(vlTOPp->top__DOT__control_unit__DOT__sra) 
                                   | (IData)(vlTOPp->top__DOT__id_bne)) 
                                  | (IData)(vlTOPp->top__DOT__id_bge)) 
                                 | (IData)(vlTOPp->top__DOT__id_bgeu)) 
                                | (IData)(vlTOPp->top__DOT__control_unit__DOT__andd)) 
                               | ((IData)(vlTOPp->top__DOT__id_sllr) 
                                  | (IData)(vlTOPp->top__DOT__id_slli))) 
                              | (IData)(vlTOPp->top__DOT__control_unit__DOT__srl)) 
                             | (IData)(vlTOPp->top__DOT__control_unit__DOT__sltu))));
        vcdp->chgBit(c+441,(vlTOPp->top__DOT__control_unit__DOT__orrr));
        vcdp->chgBit(c+449,(vlTOPp->top__DOT__control_unit__DOT__andd));
        vcdp->chgBit(c+457,(((IData)(vlTOPp->top__DOT__id_addr) 
                             | (IData)(vlTOPp->top__DOT__id_addi))));
        vcdp->chgBit(c+465,(((IData)(vlTOPp->top__DOT__id_sllr) 
                             | (IData)(vlTOPp->top__DOT__id_slli))));
        vcdp->chgBit(c+473,(((IData)(vlTOPp->top__DOT__id_sltr) 
                             | (IData)(vlTOPp->top__DOT__id_slti))));
        vcdp->chgBit(c+481,(vlTOPp->top__DOT__control_unit__DOT__sltu));
        vcdp->chgBit(c+489,(((IData)(vlTOPp->top__DOT__id_xorr) 
                             | (IData)(vlTOPp->top__DOT__id_xori))));
        vcdp->chgBit(c+497,(vlTOPp->top__DOT__control_unit__DOT__srl));
        vcdp->chgBit(c+505,(vlTOPp->top__DOT__control_unit__DOT__sra));
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+513,((((((((((((((((((((((((
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
        vcdp->chgBit(c+521,(((((((((((((((((((((((IData)(vlTOPp->top__DOT__id_lui_enb) 
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
        vcdp->chgBit(c+529,((1U & (~ (((0x6fU == (0x7fU 
                                                  & vlTOPp->top__DOT__id_instruction)) 
                                       | (IData)(vlTOPp->top__DOT__id_jalr)) 
                                      | (IData)(vlTOPp->top__DOT__ex_branch_taken))))));
        vcdp->chgBus(c+537,((((2U == (IData)(vlTOPp->top__DOT__forward_c))
                               ? vlTOPp->top__DOT__mem_alu_result
                               : ((1U == (IData)(vlTOPp->top__DOT__forward_c))
                                   ? vlTOPp->top__DOT__wb_data
                                   : vlTOPp->top__DOT__id_rs1_data)) 
                             + vlTOPp->top__DOT__id_imm)),32);
        vcdp->chgBus(c+545,(((2U == (IData)(vlTOPp->top__DOT__forward_c))
                              ? vlTOPp->top__DOT__mem_alu_result
                              : ((1U == (IData)(vlTOPp->top__DOT__forward_c))
                                  ? vlTOPp->top__DOT__wb_data
                                  : vlTOPp->top__DOT__id_rs1_data))),32);
        vcdp->chgBus(c+553,(((2U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                              ? ((1U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                  ? vlTOPp->top__DOT__ex_pc_plus_imm
                                  : (vlTOPp->top__DOT__if_current_pc 
                                     + vlTOPp->top__DOT__id_imm))
                              : ((1U & (IData)(vlTOPp->top__DOT__ex_sel_bit_mux))
                                  ? (((2U == (IData)(vlTOPp->top__DOT__forward_c))
                                       ? vlTOPp->top__DOT__mem_alu_result
                                       : ((1U == (IData)(vlTOPp->top__DOT__forward_c))
                                           ? vlTOPp->top__DOT__wb_data
                                           : vlTOPp->top__DOT__id_rs1_data)) 
                                     + vlTOPp->top__DOT__id_imm)
                                  : ((IData)(4U) + vlTOPp->top__DOT__fetch__DOT__pc)))),32);
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+561,(vlTOPp->top__DOT__ex_sel_bit_mux),2);
        vcdp->chgBit(c+569,(vlTOPp->top__DOT__stall));
        vcdp->chgBit(c+577,(vlTOPp->top__DOT__flush));
        vcdp->chgBit(c+585,(vlTOPp->top__DOT__id_sb));
        vcdp->chgBit(c+593,(vlTOPp->top__DOT__id_sw));
        vcdp->chgBit(c+601,(vlTOPp->top__DOT__id_sh));
        vcdp->chgBit(c+609,(vlTOPp->top__DOT__ex_branch_taken));
        vcdp->chgBus(c+617,(((0U == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                              ? vlTOPp->top__DOT__ex_rs2_forwarded
                              : ((2U == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                                  ? (0xffU & vlTOPp->top__DOT__ex_rs2_forwarded)
                                  : ((4U == (IData)(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit))
                                      ? (0xffffU & vlTOPp->top__DOT__ex_rs2_forwarded)
                                      : 0U)))),32);
        vcdp->chgBus(c+625,(vlTOPp->top__DOT__ex_alu_result),32);
        vcdp->chgBus(c+633,(vlTOPp->top__DOT__ex_alu_data_B),32);
        vcdp->chgBus(c+641,(vlTOPp->top__DOT__ex_rs1_forwarded),32);
        vcdp->chgBus(c+649,(vlTOPp->top__DOT__ex_rs2_forwarded),32);
        vcdp->chgBit(c+657,((((IData)(vlTOPp->top__DOT__id_sb) 
                              | (IData)(vlTOPp->top__DOT__id_sh)) 
                             | (IData)(vlTOPp->top__DOT__id_sw))));
        vcdp->chgBus(c+665,(vlTOPp->top__DOT__mem_read_data),32);
        vcdp->chgBit(c+673,(vlTOPp->top__DOT__flush_for_if));
        vcdp->chgBit(c+681,((1U & (~ (IData)(vlTOPp->top__DOT__stall)))));
        vcdp->chgBus(c+689,(vlTOPp->top__DOT____Vcellinp__mux_rs2__sel_bit),4);
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+697,(((IData)(4U) + vlTOPp->top__DOT__fetch__DOT__pc)),32);
        vcdp->chgBus(c+705,(vlTOPp->top__DOT__wb_sel_bit_mux),2);
        vcdp->chgBus(c+713,(vlTOPp->top__DOT__mem_sel_bit_mux),2);
        vcdp->chgBus(c+721,(vlTOPp->top__DOT__ex_pc_plus_imm),32);
        vcdp->chgBus(c+729,(vlTOPp->top__DOT__id_instruction),32);
        vcdp->chgBus(c+737,(vlTOPp->top__DOT__id_pcplus4),32);
        vcdp->chgBit(c+745,(vlTOPp->top__DOT__mem_jal_enb));
        vcdp->chgBus(c+753,((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+761,((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+769,((0x1fU & (vlTOPp->top__DOT__id_instruction 
                                      >> 7U))),5);
        vcdp->chgBus(c+777,(vlTOPp->top__DOT__wb_rd),5);
        vcdp->chgBus(c+785,(vlTOPp->top__DOT__ex_rd),5);
        vcdp->chgBus(c+793,(vlTOPp->top__DOT__ex_rs1),5);
        vcdp->chgBus(c+801,(vlTOPp->top__DOT__ex_rs2),5);
        vcdp->chgBus(c+809,(vlTOPp->top__DOT__mem_rd),5);
        vcdp->chgBus(c+817,(((0U == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                              >> 0x14U)))
                              ? 0U : vlTOPp->top__DOT__regfile__DOT__registers[
                             (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                       >> 0x14U))])),32);
        vcdp->chgBus(c+825,(vlTOPp->top__DOT__ex_alu_sel),4);
        vcdp->chgBit(c+833,((0x6fU == (0x7fU & vlTOPp->top__DOT__id_instruction))));
        vcdp->chgBit(c+841,(vlTOPp->top__DOT__ex_jal_enb));
        vcdp->chgBit(c+849,(vlTOPp->top__DOT__ex_wenb));
        vcdp->chgBit(c+857,(vlTOPp->top__DOT__ex_rs2_imm_sel));
        vcdp->chgBit(c+865,(vlTOPp->top__DOT__ex_branch_enb));
        vcdp->chgBit(c+873,(vlTOPp->top__DOT__ex_lui_enb));
        vcdp->chgBit(c+881,(vlTOPp->top__DOT__ex_auipc_wenb));
        vcdp->chgBus(c+889,(vlTOPp->top__DOT__ex_rs1_data),32);
        vcdp->chgBus(c+897,(vlTOPp->top__DOT__ex_rs2_data),32);
        vcdp->chgBus(c+905,(vlTOPp->top__DOT__ex_imm),32);
        vcdp->chgBus(c+913,(vlTOPp->top__DOT__ex_pcplus4),32);
        vcdp->chgBit(c+921,(vlTOPp->top__DOT__mem_store_enb));
        vcdp->chgBit(c+929,(vlTOPp->top__DOT__ex_store_enb));
        vcdp->chgBit(c+937,(vlTOPp->top__DOT__wb_load_enb));
        vcdp->chgBit(c+945,(vlTOPp->top__DOT__wb_jal_enb));
        vcdp->chgBit(c+953,(vlTOPp->top__DOT__wb_lui_enb));
        vcdp->chgBit(c+961,(vlTOPp->top__DOT__wb_auipc_wenb));
        vcdp->chgBit(c+969,(vlTOPp->top__DOT__mem_wenb));
        vcdp->chgBit(c+977,(vlTOPp->top__DOT__mem_load_enb));
        vcdp->chgBus(c+985,(vlTOPp->top__DOT__wb_mem_data),32);
        vcdp->chgBus(c+993,(vlTOPp->top__DOT__wb_alu_result),32);
        vcdp->chgBus(c+1001,(vlTOPp->top__DOT__wb_pcplus4),32);
        vcdp->chgBus(c+1009,(vlTOPp->top__DOT__mem_pc_plus_imm),32);
        vcdp->chgBus(c+1017,(vlTOPp->top__DOT__wb_pc_plus_imm),32);
        vcdp->chgBus(c+1025,(vlTOPp->top__DOT__mem_jal_return_add),32);
        vcdp->chgBus(c+1033,(vlTOPp->top__DOT__wb_jal_return_add),32);
        vcdp->chgBit(c+1041,((1U & (~ ((((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                                         | (IData)(vlTOPp->top__DOT__wb_auipc_wenb)) 
                                        | (IData)(vlTOPp->top__DOT__wb_jal_enb)) 
                                       | (IData)(vlTOPp->top__DOT__wb_load_enb))))));
        vcdp->chgBus(c+1049,(((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                               & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                  == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                               >> 0xfU))))
                               ? 3U : 0U)),2);
        vcdp->chgBus(c+1057,(((((IData)(vlTOPp->top__DOT__wb_wenb) 
                                & (0U != (IData)(vlTOPp->top__DOT__wb_rd))) 
                               & ((IData)(vlTOPp->top__DOT__wb_rd) 
                                  == (0x1fU & (vlTOPp->top__DOT__id_instruction 
                                               >> 0x14U))))
                               ? 3U : 0U)),2);
        vcdp->chgBus(c+1065,(vlTOPp->top__DOT__id_current_pc),32);
        vcdp->chgBus(c+1073,(vlTOPp->top__DOT__if_current_pc),32);
        vcdp->chgBus(c+1081,(vlTOPp->top__DOT__ex_jal_return_add),32);
        vcdp->chgBit(c+1089,(vlTOPp->top__DOT__ex_lb));
        vcdp->chgBit(c+1097,(vlTOPp->top__DOT__ex_lh));
        vcdp->chgBit(c+1105,(vlTOPp->top__DOT__ex_lw));
        vcdp->chgBit(c+1113,(vlTOPp->top__DOT__ex_lbu));
        vcdp->chgBit(c+1121,(vlTOPp->top__DOT__ex_lhu));
        vcdp->chgBit(c+1129,(vlTOPp->top__DOT__ex_load_enb));
        vcdp->chgBit(c+1137,(vlTOPp->top__DOT__mem_lb));
        vcdp->chgBit(c+1145,(vlTOPp->top__DOT__mem_lh));
        vcdp->chgBit(c+1153,(vlTOPp->top__DOT__mem_lw));
        vcdp->chgBit(c+1161,(vlTOPp->top__DOT__mem_lbu));
        vcdp->chgBit(c+1169,(vlTOPp->top__DOT__mem_lhu));
        vcdp->chgBit(c+1177,(vlTOPp->top__DOT__wb_wenb));
        vcdp->chgBus(c+1185,(vlTOPp->top__DOT__mem_rs1),5);
        vcdp->chgBus(c+1193,(vlTOPp->top__DOT__mem_rs2),5);
        vcdp->chgBus(c+1201,(vlTOPp->top__DOT__fetch__DOT__pc),32);
        vcdp->chgArray(c+1209,(vlTOPp->top__DOT__regfile__DOT__registers),1024);
        vcdp->chgBus(c+1465,(vlTOPp->top__DOT__regfile__DOT__i),32);
        vcdp->chgBus(c+1473,((0x7fU & vlTOPp->top__DOT__id_instruction)),7);
        vcdp->chgBus(c+1481,((7U & (vlTOPp->top__DOT__id_instruction 
                                    >> 0xcU))),3);
        vcdp->chgBus(c+1489,(((0x3f8U & (vlTOPp->top__DOT__id_instruction 
                                         << 3U)) | 
                              (7U & (vlTOPp->top__DOT__id_instruction 
                                     >> 0xcU)))),10);
        vcdp->chgBit(c+1497,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 2U))));
        vcdp->chgBit(c+1505,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 3U))));
        vcdp->chgBit(c+1513,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 4U))));
        vcdp->chgBit(c+1521,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 5U))));
        vcdp->chgBit(c+1529,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 6U))));
        vcdp->chgBit(c+1537,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 0xcU))));
        vcdp->chgBit(c+1545,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 0xdU))));
        vcdp->chgBit(c+1553,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 0xeU))));
        vcdp->chgBit(c+1561,((1U & (vlTOPp->top__DOT__id_instruction 
                                    >> 0x1eU))));
        vcdp->chgBus(c+1569,((((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                               << 4U) | (((IData)(vlTOPp->top__DOT__wb_auipc_wenb) 
                                          << 3U) | 
                                         (((IData)(vlTOPp->top__DOT__wb_jal_enb) 
                                           << 2U) | 
                                          (((IData)(vlTOPp->top__DOT__wb_load_enb) 
                                            << 1U) 
                                           | (1U & 
                                              (~ ((
                                                   ((IData)(vlTOPp->top__DOT__wb_lui_enb) 
                                                    | (IData)(vlTOPp->top__DOT__wb_auipc_wenb)) 
                                                   | (IData)(vlTOPp->top__DOT__wb_jal_enb)) 
                                                  | (IData)(vlTOPp->top__DOT__wb_load_enb))))))))),5);
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1577,(vlTOPp->top__DOT__ex_sb));
        vcdp->chgBit(c+1585,(vlTOPp->top__DOT__ex_sh));
        vcdp->chgBit(c+1593,(vlTOPp->top__DOT__ex_sw));
        vcdp->chgBit(c+1601,(vlTOPp->top__DOT__mem_sb));
        vcdp->chgBit(c+1609,(vlTOPp->top__DOT__mem_sh));
        vcdp->chgBit(c+1617,(vlTOPp->top__DOT__mem_sw));
        vcdp->chgBus(c+1625,(vlTOPp->top__DOT__mem_alu_result),32);
        vcdp->chgBus(c+1633,(vlTOPp->top__DOT__mem_store_data),32);
    }
}

void Vtop::traceChgThis__7(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1641,(vlTOPp->clk));
        vcdp->chgBit(c+1649,(vlTOPp->rst));
    }
}
