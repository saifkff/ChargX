// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.top__DOT__wb_sel_bit_mux),2);
        bufp->chgCData(oldp+1,(vlSelfRef.top__DOT__mem_sel_bit_mux),2);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__ex_pc_plus_imm),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__id_pcplus4),32);
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__mem_jal_enb));
        bufp->chgCData(oldp+5,(vlSelfRef.top__DOT__ex_rd),5);
        bufp->chgCData(oldp+6,(vlSelfRef.top__DOT__ex_rs1),5);
        bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__ex_rs2),5);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__mem_rd),5);
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__id_imm),32);
        bufp->chgCData(oldp+10,((((((IData)(vlSelfRef.top__DOT__id_sub) 
                                    | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__sra) 
                                       | (IData)(vlSelfRef.top__DOT__id_branch_enb))) 
                                   << 3U) | ((((IData)(vlSelfRef.top__DOT__id_xorr) 
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
                                     << 1U) | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__sra) 
                                               | ((IData)(vlSelfRef.top__DOT__id_bne) 
                                                  | ((IData)(vlSelfRef.top__DOT__id_bge) 
                                                     | ((IData)(vlSelfRef.top__DOT__id_bgeu) 
                                                        | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__andd) 
                                                           | (((IData)(vlSelfRef.top__DOT__id_sllr) 
                                                               | (IData)(vlSelfRef.top__DOT__id_slli)) 
                                                              | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__srl) 
                                                                 | (IData)(vlSelfRef.top__DOT__control_unit__DOT__sltu))))))))))),4);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__ex_alu_sel),4);
        bufp->chgBit(oldp+12,(((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19) 
                               | ((IData)(vlSelfRef.top__DOT__id_lw) 
                                  | ((IData)(vlSelfRef.top__DOT__id_lbu) 
                                     | (IData)(vlSelfRef.top__DOT__id_lhu))))));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__id_jal_enb));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__id_branch_enb));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__id_lui_enb));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__id_auipc_wenb));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__id_addr));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__id_sub));
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__id_sllr));
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__id_sltr));
        bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__id_sltur));
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__id_xorr));
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__id_srlr));
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__id_srar));
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__id_orr));
        bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__id_andr));
        bufp->chgBit(oldp+27,(vlSelfRef.top__DOT__id_addi));
        bufp->chgBit(oldp+28,(vlSelfRef.top__DOT__id_addi2));
        bufp->chgBit(oldp+29,(vlSelfRef.top__DOT__id_slli));
        bufp->chgBit(oldp+30,(vlSelfRef.top__DOT__id_slti));
        bufp->chgBit(oldp+31,(vlSelfRef.top__DOT__id_sltui));
        bufp->chgBit(oldp+32,(vlSelfRef.top__DOT__id_xori));
        bufp->chgBit(oldp+33,(vlSelfRef.top__DOT__id_srli));
        bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__id_srai));
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__id_ori));
        bufp->chgBit(oldp+36,(vlSelfRef.top__DOT__id_andi));
        bufp->chgBit(oldp+37,(vlSelfRef.top__DOT__id_jalr));
        bufp->chgBit(oldp+38,(vlSelfRef.top__DOT__id_bne));
        bufp->chgBit(oldp+39,(vlSelfRef.top__DOT__id_blt));
        bufp->chgBit(oldp+40,(vlSelfRef.top__DOT__id_bge));
        bufp->chgBit(oldp+41,(vlSelfRef.top__DOT__id_bltu));
        bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__id_bgeu));
        bufp->chgBit(oldp+43,(vlSelfRef.top__DOT__ex_jal_enb));
        bufp->chgBit(oldp+44,(vlSelfRef.top__DOT__ex_wenb));
        bufp->chgBit(oldp+45,(vlSelfRef.top__DOT__ex_rs2_imm_sel));
        bufp->chgBit(oldp+46,(vlSelfRef.top__DOT__ex_branch_enb));
        bufp->chgBit(oldp+47,(vlSelfRef.top__DOT__ex_lui_enb));
        bufp->chgBit(oldp+48,(vlSelfRef.top__DOT__ex_auipc_wenb));
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__ex_rs1_data),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__ex_rs2_data),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__ex_imm),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__ex_pcplus4),32);
        bufp->chgBit(oldp+53,(vlSelfRef.top__DOT__mem_store_enb));
        bufp->chgBit(oldp+54,(vlSelfRef.top__DOT__ex_store_enb));
        bufp->chgBit(oldp+55,(vlSelfRef.top__DOT__wb_load_enb));
        bufp->chgBit(oldp+56,(vlSelfRef.top__DOT__wb_jal_enb));
        bufp->chgBit(oldp+57,(vlSelfRef.top__DOT__wb_lui_enb));
        bufp->chgBit(oldp+58,(vlSelfRef.top__DOT__wb_auipc_wenb));
        bufp->chgBit(oldp+59,(vlSelfRef.top__DOT__mem_wenb));
        bufp->chgBit(oldp+60,(vlSelfRef.top__DOT__mem_load_enb));
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__wb_mem_data),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__wb_alu_result),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__wb_pcplus4),32);
        bufp->chgIData(oldp+64,((vlSelfRef.top__DOT__id_imm 
                                 + vlSelfRef.top__DOT__id_pcplus4)),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__mem_pc_plus_imm),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__wb_pc_plus_imm),32);
        bufp->chgCData(oldp+67,(vlSelfRef.top__DOT__pri_enc_sel),3);
        bufp->chgIData(oldp+68,((vlSelfRef.top__DOT__id_imm 
                                 + vlSelfRef.top__DOT__if_current_pc)),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__mem_jal_return_add),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__wb_jal_return_add),32);
        bufp->chgBit(oldp+71,((1U & (~ ((IData)(vlSelfRef.top__DOT__wb_auipc_wenb) 
                                        | ((IData)(vlSelfRef.top__DOT__wb_lui_enb) 
                                           | ((IData)(vlSelfRef.top__DOT__wb_jal_enb) 
                                              | (IData)(vlSelfRef.top__DOT__wb_load_enb))))))));
        bufp->chgBit(oldp+72,(vlSelfRef.top__DOT__id_lb));
        bufp->chgBit(oldp+73,(vlSelfRef.top__DOT__id_lh));
        bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__id_lhu));
        bufp->chgBit(oldp+75,(vlSelfRef.top__DOT__id_lbu));
        bufp->chgBit(oldp+76,(vlSelfRef.top__DOT__id_lw));
        bufp->chgCData(oldp+77,(vlSelfRef.top__DOT__forward_c),2);
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__id_current_pc),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__if_current_pc),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__ex_jal_return_add),32);
        bufp->chgBit(oldp+81,(vlSelfRef.top__DOT__ex_lb));
        bufp->chgBit(oldp+82,(vlSelfRef.top__DOT__ex_lh));
        bufp->chgBit(oldp+83,(vlSelfRef.top__DOT__ex_lw));
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__ex_lbu));
        bufp->chgBit(oldp+85,(vlSelfRef.top__DOT__ex_lhu));
        bufp->chgBit(oldp+86,(vlSelfRef.top__DOT__ex_load_enb));
        bufp->chgBit(oldp+87,(vlSelfRef.top__DOT__mem_lb));
        bufp->chgBit(oldp+88,(vlSelfRef.top__DOT__mem_lh));
        bufp->chgBit(oldp+89,(vlSelfRef.top__DOT__mem_lw));
        bufp->chgBit(oldp+90,(vlSelfRef.top__DOT__mem_lbu));
        bufp->chgBit(oldp+91,(vlSelfRef.top__DOT__mem_lhu));
        bufp->chgBit(oldp+92,(vlSelfRef.top__DOT__wb_wenb));
        bufp->chgCData(oldp+93,(vlSelfRef.top__DOT__mem_rs1),5);
        bufp->chgCData(oldp+94,(vlSelfRef.top__DOT__mem_rs2),5);
        bufp->chgBit(oldp+95,(vlSelfRef.top__DOT__mem_auipc_wenb));
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__mem_lui_enb));
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.top__DOT__id_sub) 
                               | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__sra) 
                                  | (IData)(vlSelfRef.top__DOT__id_branch_enb)))));
        bufp->chgBit(oldp+98,((((IData)(vlSelfRef.top__DOT__id_xorr) 
                                | (IData)(vlSelfRef.top__DOT__id_xori)) 
                               | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__orrr) 
                                  | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__andd) 
                                     | ((IData)(vlSelfRef.top__DOT__id_blt) 
                                        | ((IData)(vlSelfRef.top__DOT__id_bge) 
                                           | ((IData)(vlSelfRef.top__DOT__id_bltu) 
                                              | ((IData)(vlSelfRef.top__DOT__id_bgeu) 
                                                 | (IData)(vlSelfRef.top__DOT__control_unit__DOT__srl))))))))));
        bufp->chgBit(oldp+99,(((IData)(vlSelfRef.top__DOT__control_unit__DOT__orrr) 
                               | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__andd) 
                                  | ((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24) 
                                     | ((IData)(vlSelfRef.top__DOT__id_bltu) 
                                        | ((IData)(vlSelfRef.top__DOT__id_bgeu) 
                                           | (((IData)(vlSelfRef.top__DOT__id_sltr) 
                                               | (IData)(vlSelfRef.top__DOT__id_slti)) 
                                              | (IData)(vlSelfRef.top__DOT__control_unit__DOT__sltu)))))))));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.top__DOT__control_unit__DOT__sra) 
                                | ((IData)(vlSelfRef.top__DOT__id_bne) 
                                   | ((IData)(vlSelfRef.top__DOT__id_bge) 
                                      | ((IData)(vlSelfRef.top__DOT__id_bgeu) 
                                         | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__andd) 
                                            | (((IData)(vlSelfRef.top__DOT__id_sllr) 
                                                | (IData)(vlSelfRef.top__DOT__id_slli)) 
                                               | ((IData)(vlSelfRef.top__DOT__control_unit__DOT__srl) 
                                                  | (IData)(vlSelfRef.top__DOT__control_unit__DOT__sltu))))))))));
        bufp->chgBit(oldp+101,(vlSelfRef.top__DOT__control_unit__DOT__orrr));
        bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__control_unit__DOT__andd));
        bufp->chgBit(oldp+103,(((IData)(vlSelfRef.top__DOT__id_addr) 
                                | (IData)(vlSelfRef.top__DOT__id_addi))));
        bufp->chgBit(oldp+104,(((IData)(vlSelfRef.top__DOT__id_sllr) 
                                | (IData)(vlSelfRef.top__DOT__id_slli))));
        bufp->chgBit(oldp+105,(((IData)(vlSelfRef.top__DOT__id_sltr) 
                                | (IData)(vlSelfRef.top__DOT__id_slti))));
        bufp->chgBit(oldp+106,(vlSelfRef.top__DOT__control_unit__DOT__sltu));
        bufp->chgBit(oldp+107,(((IData)(vlSelfRef.top__DOT__id_xorr) 
                                | (IData)(vlSelfRef.top__DOT__id_xori))));
        bufp->chgBit(oldp+108,(vlSelfRef.top__DOT__control_unit__DOT__srl));
        bufp->chgBit(oldp+109,(vlSelfRef.top__DOT__control_unit__DOT__sra));
        bufp->chgIData(oldp+110,(vlSelfRef.top__DOT__fetch__DOT__pc),32);
        bufp->chgCData(oldp+111,(vlSelfRef.top__DOT__immediate_generator__DOT__sel),4);
        bufp->chgCData(oldp+112,(((((IData)(vlSelfRef.top__DOT__wb_lui_enb) 
                                    << 4U) | (((IData)(vlSelfRef.top__DOT__wb_auipc_wenb) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.top__DOT__wb_jal_enb) 
                                                 << 2U))) 
                                  | (((IData)(vlSelfRef.top__DOT__wb_load_enb) 
                                      << 1U) | (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.top__DOT__wb_auipc_wenb) 
                                                    | ((IData)(vlSelfRef.top__DOT__wb_lui_enb) 
                                                       | ((IData)(vlSelfRef.top__DOT__wb_jal_enb) 
                                                          | (IData)(vlSelfRef.top__DOT__wb_load_enb))))))))),5);
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__regfile__DOT__registers[0]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__regfile__DOT__registers[1]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__regfile__DOT__registers[2]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__regfile__DOT__registers[3]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.top__DOT__regfile__DOT__registers[4]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.top__DOT__regfile__DOT__registers[5]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__regfile__DOT__registers[6]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top__DOT__regfile__DOT__registers[7]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.top__DOT__regfile__DOT__registers[8]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.top__DOT__regfile__DOT__registers[9]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.top__DOT__regfile__DOT__registers[10]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.top__DOT__regfile__DOT__registers[11]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.top__DOT__regfile__DOT__registers[12]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.top__DOT__regfile__DOT__registers[13]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__regfile__DOT__registers[14]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.top__DOT__regfile__DOT__registers[15]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.top__DOT__regfile__DOT__registers[16]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.top__DOT__regfile__DOT__registers[17]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.top__DOT__regfile__DOT__registers[18]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.top__DOT__regfile__DOT__registers[19]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.top__DOT__regfile__DOT__registers[20]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.top__DOT__regfile__DOT__registers[21]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.top__DOT__regfile__DOT__registers[22]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.top__DOT__regfile__DOT__registers[23]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.top__DOT__regfile__DOT__registers[24]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.top__DOT__regfile__DOT__registers[25]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.top__DOT__regfile__DOT__registers[26]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__regfile__DOT__registers[27]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.top__DOT__regfile__DOT__registers[28]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.top__DOT__regfile__DOT__registers[29]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.top__DOT__regfile__DOT__registers[30]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.top__DOT__regfile__DOT__registers[31]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.top__DOT__regfile__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+146,(vlSelfRef.top__DOT__ex_sel_bit_mux),2);
        bufp->chgBit(oldp+147,(vlSelfRef.top__DOT__id_sb));
        bufp->chgBit(oldp+148,(vlSelfRef.top__DOT__id_sw));
        bufp->chgBit(oldp+149,(vlSelfRef.top__DOT__id_sh));
        bufp->chgBit(oldp+150,(vlSelfRef.top__DOT__ex_branch_taken));
        bufp->chgBit(oldp+151,(vlSelfRef.top__DOT__ex_sb));
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__ex_sh));
        bufp->chgBit(oldp+153,(vlSelfRef.top__DOT__ex_sw));
        bufp->chgIData(oldp+154,(((0U == (IData)(vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit))
                                   ? vlSelfRef.top__DOT__ex_rs2_forwarded
                                   : ((2U == (IData)(vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit))
                                       ? (0xffU & vlSelfRef.top__DOT__ex_rs2_forwarded)
                                       : ((4U == (IData)(vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit))
                                           ? (0xffffU 
                                              & vlSelfRef.top__DOT__ex_rs2_forwarded)
                                           : 0U)))),32);
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__ex_alu_data_B),32);
        bufp->chgIData(oldp+156,(vlSelfRef.top__DOT__ex_rs1_forwarded),32);
        bufp->chgIData(oldp+157,(vlSelfRef.top__DOT__ex_rs2_forwarded),32);
        bufp->chgBit(oldp+158,(((IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20) 
                                | (IData)(vlSelfRef.top__DOT__id_sw))));
        bufp->chgBit(oldp+159,(vlSelfRef.top__DOT__mem_sb));
        bufp->chgBit(oldp+160,(vlSelfRef.top__DOT__mem_sh));
        bufp->chgBit(oldp+161,(vlSelfRef.top__DOT__mem_sw));
        bufp->chgIData(oldp+162,(vlSelfRef.top__DOT__mem_alu_result),32);
        bufp->chgIData(oldp+163,(vlSelfRef.top__DOT__mem_store_data),32);
        bufp->chgBit(oldp+164,(vlSelfRef.top__DOT__flush_for_if));
        bufp->chgCData(oldp+165,(vlSelfRef.top__DOT____Vcellinp__mux_rs2__sel_bit),4);
    }
    bufp->chgBit(oldp+166,(vlSelfRef.clk));
    bufp->chgBit(oldp+167,(vlSelfRef.rst));
    bufp->chgIData(oldp+168,(vlSelfRef.if_instruction),32);
    bufp->chgIData(oldp+169,(vlSelfRef.if_pc_out),32);
    bufp->chgIData(oldp+170,(vlSelfRef.id_instruction),32);
    bufp->chgCData(oldp+171,(vlSelfRef.id_rs1),5);
    bufp->chgCData(oldp+172,(vlSelfRef.id_rs2),5);
    bufp->chgCData(oldp+173,(vlSelfRef.id_rd),5);
    bufp->chgCData(oldp+174,(vlSelfRef.wb_rd),5);
    bufp->chgIData(oldp+175,(vlSelfRef.id_rs1_data),32);
    bufp->chgIData(oldp+176,(vlSelfRef.id_rs2_data),32);
    bufp->chgIData(oldp+177,(vlSelfRef.ex_alu_result),32);
    bufp->chgIData(oldp+178,(vlSelfRef.mem_read_data),32);
    bufp->chgIData(oldp+179,(vlSelfRef.wb_data),32);
    bufp->chgBit(oldp+180,(vlSelfRef.stall));
    bufp->chgBit(oldp+181,(vlSelfRef.flush));
    bufp->chgCData(oldp+182,(vlSelfRef.forward_a),2);
    bufp->chgCData(oldp+183,(vlSelfRef.forward_b),2);
    bufp->chgBit(oldp+184,(vlSelfRef.rvfi_o_valid_0));
    bufp->chgIData(oldp+185,(vlSelfRef.rvfi_o_insn_0),32);
    bufp->chgCData(oldp+186,(vlSelfRef.rvfi_o_rs1_addr_0),5);
    bufp->chgCData(oldp+187,(vlSelfRef.rvfi_o_rs2_addr_0),5);
    bufp->chgIData(oldp+188,(vlSelfRef.rvfi_o_rs1_rdata_0),32);
    bufp->chgIData(oldp+189,(vlSelfRef.rvfi_o_rs2_rdata_0),32);
    bufp->chgCData(oldp+190,(vlSelfRef.rvfi_o_rd_addr_0),5);
    bufp->chgIData(oldp+191,(vlSelfRef.rvfi_o_rd_wdata_0),32);
    bufp->chgIData(oldp+192,(vlSelfRef.rvfi_o_pc_rdata_0),32);
    bufp->chgIData(oldp+193,(vlSelfRef.rvfi_o_pc_wdata_0),32);
    bufp->chgIData(oldp+194,(vlSelfRef.rvfi_o_mem_addr_0),32);
    bufp->chgCData(oldp+195,(vlSelfRef.rvfi_o_mem_wmask_0),4);
    bufp->chgIData(oldp+196,(vlSelfRef.rvfi_o_mem_rdata_0),32);
    bufp->chgIData(oldp+197,(vlSelfRef.rvfi_o_mem_wdata_0),32);
    bufp->chgBit(oldp+198,(((IData)(vlSelfRef.top__DOT__id_lw) 
                            | ((0x6fU == (0x7fU & vlSelfRef.id_instruction)) 
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
                                                                                | (IData)(vlSelfRef.top__DOT__id_addi2)))))))))))))))))))))))))))))))));
    bufp->chgBit(oldp+199,(((IData)(vlSelfRef.top__DOT__id_lui_enb) 
                            | ((0x6fU == (0x7fU & vlSelfRef.id_instruction)) 
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
                                                                                | (IData)(vlSelfRef.top__DOT__id_addi2)))))))))))))))))))))));
    bufp->chgBit(oldp+200,((1U & (~ ((IData)(vlSelfRef.top__DOT__id_jal_enb) 
                                     | (IData)(vlSelfRef.top__DOT__ex_branch_taken))))));
    bufp->chgBit(oldp+201,((0x6fU == (0x7fU & vlSelfRef.id_instruction))));
    bufp->chgBit(oldp+202,(((~ (vlSelfRef.id_instruction 
                                >> 0xeU)) & (IData)(vlSelfRef.top__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28))));
    bufp->chgIData(oldp+203,(((3U == ((((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                        & (0U != (IData)(vlSelfRef.wb_rd))) 
                                       & ((IData)(vlSelfRef.wb_rd) 
                                          == (IData)(vlSelfRef.id_rs1)))
                                       ? 3U : 0U)) ? vlSelfRef.wb_data
                               : vlSelfRef.id_rs1_data)),32);
    bufp->chgIData(oldp+204,(((3U == ((((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                        & (0U != (IData)(vlSelfRef.wb_rd))) 
                                       & ((IData)(vlSelfRef.wb_rd) 
                                          == (IData)(vlSelfRef.id_rs2)))
                                       ? 3U : 0U)) ? vlSelfRef.wb_data
                               : vlSelfRef.id_rs2_data)),32);
    bufp->chgIData(oldp+205,((vlSelfRef.top__DOT__id_imm 
                              + ((2U == (IData)(vlSelfRef.top__DOT__forward_c))
                                  ? vlSelfRef.top__DOT__mem_alu_result
                                  : ((1U == (IData)(vlSelfRef.top__DOT__forward_c))
                                      ? vlSelfRef.wb_data
                                      : vlSelfRef.id_rs1_data)))),32);
    bufp->chgIData(oldp+206,(((2U == (IData)(vlSelfRef.top__DOT__forward_c))
                               ? vlSelfRef.top__DOT__mem_alu_result
                               : ((1U == (IData)(vlSelfRef.top__DOT__forward_c))
                                   ? vlSelfRef.wb_data
                                   : vlSelfRef.id_rs1_data))),32);
    bufp->chgCData(oldp+207,(((((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                & (0U != (IData)(vlSelfRef.wb_rd))) 
                               & ((IData)(vlSelfRef.wb_rd) 
                                  == (IData)(vlSelfRef.id_rs1)))
                               ? 3U : 0U)),2);
    bufp->chgCData(oldp+208,(((((IData)(vlSelfRef.top__DOT__wb_wenb) 
                                & (0U != (IData)(vlSelfRef.wb_rd))) 
                               & ((IData)(vlSelfRef.wb_rd) 
                                  == (IData)(vlSelfRef.id_rs2)))
                               ? 3U : 0U)),2);
    bufp->chgCData(oldp+209,((0x7fU & vlSelfRef.id_instruction)),7);
    bufp->chgCData(oldp+210,((7U & (vlSelfRef.id_instruction 
                                    >> 0xcU))),3);
    bufp->chgSData(oldp+211,(((0x3f8U & (vlSelfRef.id_instruction 
                                         << 3U)) | 
                              (7U & (vlSelfRef.id_instruction 
                                     >> 0xcU)))),10);
    bufp->chgBit(oldp+212,((1U & (vlSelfRef.id_instruction 
                                  >> 2U))));
    bufp->chgBit(oldp+213,((1U & (vlSelfRef.id_instruction 
                                  >> 3U))));
    bufp->chgBit(oldp+214,((1U & (vlSelfRef.id_instruction 
                                  >> 4U))));
    bufp->chgBit(oldp+215,((1U & (vlSelfRef.id_instruction 
                                  >> 5U))));
    bufp->chgBit(oldp+216,((1U & (vlSelfRef.id_instruction 
                                  >> 6U))));
    bufp->chgBit(oldp+217,((1U & (vlSelfRef.id_instruction 
                                  >> 0xcU))));
    bufp->chgBit(oldp+218,((1U & (vlSelfRef.id_instruction 
                                  >> 0xdU))));
    bufp->chgBit(oldp+219,((1U & (vlSelfRef.id_instruction 
                                  >> 0xeU))));
    bufp->chgBit(oldp+220,((1U & (vlSelfRef.id_instruction 
                                  >> 0x1eU))));
    bufp->chgIData(oldp+221,(((2U & (IData)(vlSelfRef.top__DOT__ex_sel_bit_mux))
                               ? ((1U & (IData)(vlSelfRef.top__DOT__ex_sel_bit_mux))
                                   ? vlSelfRef.top__DOT__ex_pc_plus_imm
                                   : (vlSelfRef.top__DOT__id_imm 
                                      + vlSelfRef.top__DOT__if_current_pc))
                               : ((1U & (IData)(vlSelfRef.top__DOT__ex_sel_bit_mux))
                                   ? (vlSelfRef.top__DOT__id_imm 
                                      + ((2U == (IData)(vlSelfRef.top__DOT__forward_c))
                                          ? vlSelfRef.top__DOT__mem_alu_result
                                          : ((1U == (IData)(vlSelfRef.top__DOT__forward_c))
                                              ? vlSelfRef.wb_data
                                              : vlSelfRef.id_rs1_data)))
                                   : vlSelfRef.if_pc_out))),32);
    bufp->chgBit(oldp+222,((1U & (~ (IData)(vlSelfRef.stall)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
