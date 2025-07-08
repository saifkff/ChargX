// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.core__DOT__wmask_final),4);
        bufp->chgCData(oldp+1,(vlSelfRef.core__DOT__rs1_final),5);
        bufp->chgCData(oldp+2,(vlSelfRef.core__DOT__rs2_final),5);
        bufp->chgBit(oldp+3,(vlSelfRef.core__DOT__data_mem__DOT__csb));
        bufp->chgSData(oldp+4,(vlSelfRef.core__DOT__data_mem__DOT__addr_o),13);
        bufp->chgIData(oldp+5,(vlSelfRef.core__DOT__data_mem__DOT__wdata_o),32);
        bufp->chgCData(oldp+6,(vlSelfRef.core__DOT__data_mem__DOT__wmask_o),4);
        bufp->chgBit(oldp+7,(vlSelfRef.core__DOT__data_mem__DOT__we_o));
        bufp->chgBit(oldp+8,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__csb_reg));
        bufp->chgBit(oldp+9,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__web_reg));
        bufp->chgCData(oldp+10,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__wmask_reg),4);
        bufp->chgSData(oldp+11,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__addr_reg),13);
        bufp->chgIData(oldp+12,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__din_reg),32);
        bufp->chgIData(oldp+13,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__dout_reg),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+14,(vlSelfRef.core__DOT__ex_sel_bit_mux),2);
        bufp->chgCData(oldp+15,(vlSelfRef.core__DOT__wb_sel_bit_mux),2);
        bufp->chgCData(oldp+16,(vlSelfRef.core__DOT__mem_sel_bit_mux),2);
        bufp->chgIData(oldp+17,(vlSelfRef.core__DOT__ex_pc_plus_imm),32);
        bufp->chgIData(oldp+18,(vlSelfRef.core__DOT__id_pcplus4),32);
        bufp->chgBit(oldp+19,(vlSelfRef.core__DOT__mem_jal_enb));
        bufp->chgCData(oldp+20,(vlSelfRef.core__DOT__ex_rd),5);
        bufp->chgCData(oldp+21,(vlSelfRef.core__DOT__ex_rs1),5);
        bufp->chgCData(oldp+22,(vlSelfRef.core__DOT__ex_rs2),5);
        bufp->chgCData(oldp+23,(vlSelfRef.core__DOT__mem_rd),5);
        bufp->chgIData(oldp+24,(vlSelfRef.core__DOT__id_imm),32);
        bufp->chgCData(oldp+25,((((((IData)(vlSelfRef.core__DOT__id_sub) 
                                    | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                       | (IData)(vlSelfRef.core__DOT__id_branch_enb))) 
                                   << 3U) | ((((IData)(vlSelfRef.core__DOT__id_xorr) 
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
                                         | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24) 
                                            | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                               | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                                  | (((IData)(vlSelfRef.core__DOT__id_sltr) 
                                                      | (IData)(vlSelfRef.core__DOT__id_slti)) 
                                                     | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu))))))) 
                                     << 1U) | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                               | ((IData)(vlSelfRef.core__DOT__id_bne) 
                                                  | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                                     | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                                        | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                                           | (((IData)(vlSelfRef.core__DOT__id_sllr) 
                                                               | (IData)(vlSelfRef.core__DOT__id_slli)) 
                                                              | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__srl) 
                                                                 | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu))))))))))),4);
        bufp->chgCData(oldp+26,(vlSelfRef.core__DOT__ex_alu_sel),4);
        bufp->chgBit(oldp+27,(((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19) 
                               | ((IData)(vlSelfRef.core__DOT__id_lw) 
                                  | ((IData)(vlSelfRef.core__DOT__id_lbu) 
                                     | (IData)(vlSelfRef.core__DOT__id_lhu))))));
        bufp->chgBit(oldp+28,(vlSelfRef.core__DOT__id_jal_enb));
        bufp->chgBit(oldp+29,(vlSelfRef.core__DOT__id_branch_enb));
        bufp->chgBit(oldp+30,(vlSelfRef.core__DOT__id_lui_enb));
        bufp->chgBit(oldp+31,(vlSelfRef.core__DOT__id_auipc_wenb));
        bufp->chgBit(oldp+32,(vlSelfRef.core__DOT__id_sb));
        bufp->chgBit(oldp+33,(vlSelfRef.core__DOT__id_sw));
        bufp->chgBit(oldp+34,(vlSelfRef.core__DOT__id_sh));
        bufp->chgBit(oldp+35,((1U & (~ ((IData)(vlSelfRef.core__DOT__id_jal_enb) 
                                        | (IData)(vlSelfRef.core__DOT__ex_branch_taken))))));
        bufp->chgBit(oldp+36,(vlSelfRef.core__DOT__id_addr));
        bufp->chgBit(oldp+37,(vlSelfRef.core__DOT__id_sub));
        bufp->chgBit(oldp+38,(vlSelfRef.core__DOT__id_sllr));
        bufp->chgBit(oldp+39,(vlSelfRef.core__DOT__id_sltr));
        bufp->chgBit(oldp+40,(vlSelfRef.core__DOT__id_sltur));
        bufp->chgBit(oldp+41,(vlSelfRef.core__DOT__id_xorr));
        bufp->chgBit(oldp+42,(vlSelfRef.core__DOT__id_srlr));
        bufp->chgBit(oldp+43,(vlSelfRef.core__DOT__id_srar));
        bufp->chgBit(oldp+44,(vlSelfRef.core__DOT__id_orr));
        bufp->chgBit(oldp+45,(vlSelfRef.core__DOT__id_andr));
        bufp->chgBit(oldp+46,(vlSelfRef.core__DOT__id_addi));
        bufp->chgBit(oldp+47,(vlSelfRef.core__DOT__id_addi2));
        bufp->chgBit(oldp+48,(vlSelfRef.core__DOT__id_slli));
        bufp->chgBit(oldp+49,(vlSelfRef.core__DOT__id_slti));
        bufp->chgBit(oldp+50,(vlSelfRef.core__DOT__id_sltui));
        bufp->chgBit(oldp+51,(vlSelfRef.core__DOT__id_xori));
        bufp->chgBit(oldp+52,(vlSelfRef.core__DOT__id_srli));
        bufp->chgBit(oldp+53,(vlSelfRef.core__DOT__id_srai));
        bufp->chgBit(oldp+54,(vlSelfRef.core__DOT__id_ori));
        bufp->chgBit(oldp+55,(vlSelfRef.core__DOT__id_andi));
        bufp->chgBit(oldp+56,(vlSelfRef.core__DOT__id_jalr));
        bufp->chgBit(oldp+57,(vlSelfRef.core__DOT__id_bne));
        bufp->chgBit(oldp+58,(vlSelfRef.core__DOT__id_blt));
        bufp->chgBit(oldp+59,(vlSelfRef.core__DOT__id_bge));
        bufp->chgBit(oldp+60,(vlSelfRef.core__DOT__id_bltu));
        bufp->chgBit(oldp+61,(vlSelfRef.core__DOT__id_bgeu));
        bufp->chgBit(oldp+62,(vlSelfRef.core__DOT__ex_branch_taken));
        bufp->chgBit(oldp+63,(vlSelfRef.core__DOT__ex_jal_enb));
        bufp->chgBit(oldp+64,(vlSelfRef.core__DOT__ex_wenb));
        bufp->chgBit(oldp+65,(vlSelfRef.core__DOT__ex_rs2_imm_sel));
        bufp->chgBit(oldp+66,(vlSelfRef.core__DOT__ex_branch_enb));
        bufp->chgBit(oldp+67,(vlSelfRef.core__DOT__ex_lui_enb));
        bufp->chgBit(oldp+68,(vlSelfRef.core__DOT__ex_auipc_wenb));
        bufp->chgBit(oldp+69,(vlSelfRef.core__DOT__ex_sb));
        bufp->chgBit(oldp+70,(vlSelfRef.core__DOT__ex_sh));
        bufp->chgBit(oldp+71,(vlSelfRef.core__DOT__ex_sw));
        bufp->chgIData(oldp+72,(((8U == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                  ? vlSelfRef.core__DOT__ex_rs2_forwarded
                                  : ((2U == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                      ? (0xffU & vlSelfRef.core__DOT__ex_rs2_forwarded)
                                      : ((4U == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                          ? (0xffffU 
                                             & vlSelfRef.core__DOT__ex_rs2_forwarded)
                                          : 0U)))),32);
        bufp->chgIData(oldp+73,(vlSelfRef.core__DOT__ex_alu_data_B),32);
        bufp->chgIData(oldp+74,(vlSelfRef.core__DOT__ex_rs1_data),32);
        bufp->chgIData(oldp+75,(vlSelfRef.core__DOT__ex_rs2_data),32);
        bufp->chgIData(oldp+76,(vlSelfRef.core__DOT__ex_imm),32);
        bufp->chgIData(oldp+77,(vlSelfRef.core__DOT__ex_pcplus4),32);
        bufp->chgIData(oldp+78,(vlSelfRef.core__DOT__ex_rs1_forwarded),32);
        bufp->chgIData(oldp+79,(vlSelfRef.core__DOT__ex_rs2_forwarded),32);
        bufp->chgBit(oldp+80,(vlSelfRef.core__DOT__mem_store_enb));
        bufp->chgBit(oldp+81,(vlSelfRef.core__DOT__ex_store_enb));
        bufp->chgBit(oldp+82,(vlSelfRef.core__DOT__id_store_enb));
        bufp->chgBit(oldp+83,(vlSelfRef.core__DOT__wb_load_enb));
        bufp->chgBit(oldp+84,(vlSelfRef.core__DOT__wb_jal_enb));
        bufp->chgBit(oldp+85,(vlSelfRef.core__DOT__wb_lui_enb));
        bufp->chgBit(oldp+86,(vlSelfRef.core__DOT__wb_auipc_wenb));
        bufp->chgBit(oldp+87,(vlSelfRef.core__DOT__mem_wenb));
        bufp->chgBit(oldp+88,(vlSelfRef.core__DOT__mem_load_enb));
        bufp->chgBit(oldp+89,(vlSelfRef.core__DOT__mem_sb));
        bufp->chgBit(oldp+90,(vlSelfRef.core__DOT__mem_sh));
        bufp->chgBit(oldp+91,(vlSelfRef.core__DOT__mem_sw));
        bufp->chgIData(oldp+92,(vlSelfRef.core__DOT__mem_alu_result),32);
        bufp->chgIData(oldp+93,(vlSelfRef.core__DOT__mem_store_data),32);
        bufp->chgIData(oldp+94,(vlSelfRef.core__DOT__wb_mem_data),32);
        bufp->chgIData(oldp+95,(vlSelfRef.core__DOT__wb_alu_result),32);
        bufp->chgIData(oldp+96,(vlSelfRef.core__DOT__wb_pcplus4),32);
        bufp->chgIData(oldp+97,((vlSelfRef.core__DOT__id_imm 
                                 + vlSelfRef.core__DOT__id_pcplus4)),32);
        bufp->chgIData(oldp+98,(vlSelfRef.core__DOT__mem_pc_plus_imm),32);
        bufp->chgIData(oldp+99,(vlSelfRef.core__DOT__wb_pc_plus_imm),32);
        bufp->chgCData(oldp+100,(vlSelfRef.core__DOT__pri_enc_sel),3);
        bufp->chgIData(oldp+101,((vlSelfRef.core__DOT__id_imm 
                                  + vlSelfRef.core__DOT__if_current_pc)),32);
        bufp->chgIData(oldp+102,(vlSelfRef.core__DOT__mem_jal_return_add),32);
        bufp->chgIData(oldp+103,(vlSelfRef.core__DOT__wb_jal_return_add),32);
        bufp->chgBit(oldp+104,(vlSelfRef.core__DOT__flush_for_if));
        bufp->chgBit(oldp+105,((1U & (~ ((IData)(vlSelfRef.core__DOT__wb_auipc_wenb) 
                                         | ((IData)(vlSelfRef.core__DOT__wb_lui_enb) 
                                            | ((IData)(vlSelfRef.core__DOT__wb_jal_enb) 
                                               | (IData)(vlSelfRef.core__DOT__wb_load_enb))))))));
        bufp->chgBit(oldp+106,(vlSelfRef.core__DOT__id_lb));
        bufp->chgBit(oldp+107,(vlSelfRef.core__DOT__id_lh));
        bufp->chgBit(oldp+108,(vlSelfRef.core__DOT__id_lhu));
        bufp->chgBit(oldp+109,(vlSelfRef.core__DOT__id_lbu));
        bufp->chgBit(oldp+110,(vlSelfRef.core__DOT__id_lw));
        bufp->chgCData(oldp+111,(vlSelfRef.core__DOT__forward_c),2);
        bufp->chgIData(oldp+112,(vlSelfRef.core__DOT__id_current_pc),32);
        bufp->chgIData(oldp+113,(vlSelfRef.core__DOT__if_current_pc),32);
        bufp->chgIData(oldp+114,(vlSelfRef.core__DOT__ex_jal_return_add),32);
        bufp->chgBit(oldp+115,(vlSelfRef.core__DOT__ex_lb));
        bufp->chgBit(oldp+116,(vlSelfRef.core__DOT__ex_lh));
        bufp->chgBit(oldp+117,(vlSelfRef.core__DOT__ex_lw));
        bufp->chgBit(oldp+118,(vlSelfRef.core__DOT__ex_lbu));
        bufp->chgBit(oldp+119,(vlSelfRef.core__DOT__ex_lhu));
        bufp->chgBit(oldp+120,(vlSelfRef.core__DOT__ex_load_enb));
        bufp->chgBit(oldp+121,(vlSelfRef.core__DOT__mem_lb));
        bufp->chgBit(oldp+122,(vlSelfRef.core__DOT__mem_lh));
        bufp->chgBit(oldp+123,(vlSelfRef.core__DOT__mem_lw));
        bufp->chgBit(oldp+124,(vlSelfRef.core__DOT__mem_lbu));
        bufp->chgBit(oldp+125,(vlSelfRef.core__DOT__mem_lhu));
        bufp->chgBit(oldp+126,(vlSelfRef.core__DOT__wb_wenb));
        bufp->chgCData(oldp+127,(vlSelfRef.core__DOT__mem_rs1),5);
        bufp->chgCData(oldp+128,(vlSelfRef.core__DOT__mem_rs2),5);
        bufp->chgBit(oldp+129,(vlSelfRef.core__DOT__mem_auipc_wenb));
        bufp->chgBit(oldp+130,(vlSelfRef.core__DOT__mem_lui_enb));
        bufp->chgBit(oldp+131,(vlSelfRef.core__DOT__if_id_ins_valid_pin));
        bufp->chgBit(oldp+132,(vlSelfRef.core__DOT__id_ex_ins_valid_pin));
        bufp->chgBit(oldp+133,(vlSelfRef.core__DOT__ex_mem_ins_valid_pin));
        bufp->chgBit(oldp+134,(vlSelfRef.core__DOT__mem_wb_ins_valid_pin));
        bufp->chgCData(oldp+135,(((0xcU & ((- (IData)((IData)(vlSelfRef.core__DOT__id_sw))) 
                                           << 2U)) 
                                  | ((((IData)(vlSelfRef.core__DOT__id_sh) 
                                       | (IData)(vlSelfRef.core__DOT__id_sw)) 
                                      << 1U) | (IData)(vlSelfRef.core__DOT__id_store_enb)))),4);
        bufp->chgCData(oldp+136,(vlSelfRef.core__DOT__ex_wmask),4);
        bufp->chgCData(oldp+137,(vlSelfRef.core__DOT__mem_wmask),4);
        bufp->chgBit(oldp+138,(vlSelfRef.core__DOT__ex_we));
        bufp->chgBit(oldp+139,(vlSelfRef.core__DOT__mem_we));
        bufp->chgBit(oldp+140,(((IData)(vlSelfRef.core__DOT__id_sub) 
                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                   | (IData)(vlSelfRef.core__DOT__id_branch_enb)))));
        bufp->chgBit(oldp+141,((((IData)(vlSelfRef.core__DOT__id_xorr) 
                                 | (IData)(vlSelfRef.core__DOT__id_xori)) 
                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__orrr) 
                                   | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                      | ((IData)(vlSelfRef.core__DOT__id_blt) 
                                         | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                            | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                               | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                                  | (IData)(vlSelfRef.core__DOT__control_unit__DOT__srl))))))))));
        bufp->chgBit(oldp+142,(((IData)(vlSelfRef.core__DOT__control_unit__DOT__orrr) 
                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                   | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_24) 
                                      | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                         | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                            | (((IData)(vlSelfRef.core__DOT__id_sltr) 
                                                | (IData)(vlSelfRef.core__DOT__id_slti)) 
                                               | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu)))))))));
        bufp->chgBit(oldp+143,(((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                | ((IData)(vlSelfRef.core__DOT__id_bne) 
                                   | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                      | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                         | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                            | (((IData)(vlSelfRef.core__DOT__id_sllr) 
                                                | (IData)(vlSelfRef.core__DOT__id_slli)) 
                                               | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__srl) 
                                                  | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu))))))))));
        bufp->chgBit(oldp+144,(vlSelfRef.core__DOT__control_unit__DOT__orrr));
        bufp->chgBit(oldp+145,(vlSelfRef.core__DOT__control_unit__DOT__andd));
        bufp->chgBit(oldp+146,(((IData)(vlSelfRef.core__DOT__id_addr) 
                                | (IData)(vlSelfRef.core__DOT__id_addi))));
        bufp->chgBit(oldp+147,(((IData)(vlSelfRef.core__DOT__id_sllr) 
                                | (IData)(vlSelfRef.core__DOT__id_slli))));
        bufp->chgBit(oldp+148,(((IData)(vlSelfRef.core__DOT__id_sltr) 
                                | (IData)(vlSelfRef.core__DOT__id_slti))));
        bufp->chgBit(oldp+149,(vlSelfRef.core__DOT__control_unit__DOT__sltu));
        bufp->chgBit(oldp+150,(((IData)(vlSelfRef.core__DOT__id_xorr) 
                                | (IData)(vlSelfRef.core__DOT__id_xori))));
        bufp->chgBit(oldp+151,(vlSelfRef.core__DOT__control_unit__DOT__srl));
        bufp->chgBit(oldp+152,(vlSelfRef.core__DOT__control_unit__DOT__sra));
        bufp->chgSData(oldp+153,((0x1fffU & vlSelfRef.core__DOT__mem_alu_result)),13);
        bufp->chgIData(oldp+154,(vlSelfRef.core__DOT__fetch__DOT__pc),32);
        bufp->chgCData(oldp+155,(vlSelfRef.core__DOT__immediate_generator__DOT__sel),4);
        bufp->chgCData(oldp+156,(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit),4);
        bufp->chgCData(oldp+157,(((((IData)(vlSelfRef.core__DOT__wb_lui_enb) 
                                    << 4U) | (((IData)(vlSelfRef.core__DOT__wb_auipc_wenb) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.core__DOT__wb_jal_enb) 
                                                 << 2U))) 
                                  | (((IData)(vlSelfRef.core__DOT__wb_load_enb) 
                                      << 1U) | (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.core__DOT__wb_auipc_wenb) 
                                                    | ((IData)(vlSelfRef.core__DOT__wb_lui_enb) 
                                                       | ((IData)(vlSelfRef.core__DOT__wb_jal_enb) 
                                                          | (IData)(vlSelfRef.core__DOT__wb_load_enb))))))))),5);
        bufp->chgIData(oldp+158,(vlSelfRef.core__DOT__regfile__DOT__registers[0]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.core__DOT__regfile__DOT__registers[1]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.core__DOT__regfile__DOT__registers[2]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.core__DOT__regfile__DOT__registers[3]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.core__DOT__regfile__DOT__registers[4]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.core__DOT__regfile__DOT__registers[5]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.core__DOT__regfile__DOT__registers[6]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.core__DOT__regfile__DOT__registers[7]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.core__DOT__regfile__DOT__registers[8]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.core__DOT__regfile__DOT__registers[9]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.core__DOT__regfile__DOT__registers[10]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.core__DOT__regfile__DOT__registers[11]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.core__DOT__regfile__DOT__registers[12]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.core__DOT__regfile__DOT__registers[13]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.core__DOT__regfile__DOT__registers[14]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.core__DOT__regfile__DOT__registers[15]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.core__DOT__regfile__DOT__registers[16]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.core__DOT__regfile__DOT__registers[17]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.core__DOT__regfile__DOT__registers[18]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.core__DOT__regfile__DOT__registers[19]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.core__DOT__regfile__DOT__registers[20]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.core__DOT__regfile__DOT__registers[21]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.core__DOT__regfile__DOT__registers[22]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.core__DOT__regfile__DOT__registers[23]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.core__DOT__regfile__DOT__registers[24]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.core__DOT__regfile__DOT__registers[25]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.core__DOT__regfile__DOT__registers[26]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.core__DOT__regfile__DOT__registers[27]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.core__DOT__regfile__DOT__registers[28]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.core__DOT__regfile__DOT__registers[29]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.core__DOT__regfile__DOT__registers[30]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.core__DOT__regfile__DOT__registers[31]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.core__DOT__regfile__DOT__i),32);
    }
    bufp->chgBit(oldp+191,(vlSelfRef.clk));
    bufp->chgBit(oldp+192,(vlSelfRef.rst));
    bufp->chgIData(oldp+193,(vlSelfRef.if_instruction),32);
    bufp->chgIData(oldp+194,(vlSelfRef.if_pc_out),32);
    bufp->chgIData(oldp+195,(vlSelfRef.id_instruction),32);
    bufp->chgCData(oldp+196,(vlSelfRef.id_rs1),5);
    bufp->chgCData(oldp+197,(vlSelfRef.id_rs2),5);
    bufp->chgCData(oldp+198,(vlSelfRef.id_rd),5);
    bufp->chgCData(oldp+199,(vlSelfRef.wb_rd),5);
    bufp->chgIData(oldp+200,(vlSelfRef.id_rs1_data),32);
    bufp->chgIData(oldp+201,(vlSelfRef.id_rs2_data),32);
    bufp->chgIData(oldp+202,(vlSelfRef.ex_alu_result),32);
    bufp->chgIData(oldp+203,(vlSelfRef.mem_read_data),32);
    bufp->chgIData(oldp+204,(vlSelfRef.wb_data),32);
    bufp->chgBit(oldp+205,(vlSelfRef.stall));
    bufp->chgBit(oldp+206,(vlSelfRef.flush));
    bufp->chgCData(oldp+207,(vlSelfRef.forward_a),2);
    bufp->chgCData(oldp+208,(vlSelfRef.forward_b),2);
    bufp->chgBit(oldp+209,(vlSelfRef.rvfi_o_valid_0));
    bufp->chgIData(oldp+210,(vlSelfRef.rvfi_o_insn_0),32);
    bufp->chgCData(oldp+211,(vlSelfRef.rvfi_o_rs1_addr_0),5);
    bufp->chgCData(oldp+212,(vlSelfRef.rvfi_o_rs2_addr_0),5);
    bufp->chgIData(oldp+213,(vlSelfRef.rvfi_o_rs1_rdata_0),32);
    bufp->chgIData(oldp+214,(vlSelfRef.rvfi_o_rs2_rdata_0),32);
    bufp->chgCData(oldp+215,(vlSelfRef.rvfi_o_rd_addr_0),5);
    bufp->chgIData(oldp+216,(vlSelfRef.rvfi_o_rd_wdata_0),32);
    bufp->chgIData(oldp+217,(vlSelfRef.rvfi_o_pc_rdata_0),32);
    bufp->chgIData(oldp+218,(vlSelfRef.rvfi_o_pc_wdata_0),32);
    bufp->chgIData(oldp+219,(vlSelfRef.rvfi_o_mem_addr_0),32);
    bufp->chgCData(oldp+220,(vlSelfRef.rvfi_o_mem_wmask_0),4);
    bufp->chgIData(oldp+221,(vlSelfRef.rvfi_o_mem_rdata_0),32);
    bufp->chgIData(oldp+222,(vlSelfRef.rvfi_o_mem_wdata_0),32);
    bufp->chgBit(oldp+223,(((IData)(vlSelfRef.core__DOT__id_lw) 
                            | ((0x6fU == (0x7fU & vlSelfRef.id_instruction)) 
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
                                                                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_20) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_sw) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lbu) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lhu) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_jalr) 
                                                                                | ((IData)(vlSelfRef.core__DOT__id_lui_enb) 
                                                                                | (IData)(vlSelfRef.core__DOT__id_addi2)))))))))))))))))))))))))))))))));
    bufp->chgBit(oldp+224,(((IData)(vlSelfRef.core__DOT__id_lui_enb) 
                            | ((0x6fU == (0x7fU & vlSelfRef.id_instruction)) 
                               | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_19) 
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
                                                                                | (IData)(vlSelfRef.core__DOT__id_addi2)))))))))))))))))))))));
    bufp->chgBit(oldp+225,((0x6fU == (0x7fU & vlSelfRef.id_instruction))));
    bufp->chgBit(oldp+226,(((~ (vlSelfRef.id_instruction 
                                >> 0xeU)) & (IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_28))));
    bufp->chgIData(oldp+227,(((3U == ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                        & (0U != (IData)(vlSelfRef.wb_rd))) 
                                       & ((IData)(vlSelfRef.wb_rd) 
                                          == (IData)(vlSelfRef.id_rs1)))
                                       ? 3U : 0U)) ? vlSelfRef.wb_data
                               : vlSelfRef.id_rs1_data)),32);
    bufp->chgIData(oldp+228,(((3U == ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                        & (0U != (IData)(vlSelfRef.wb_rd))) 
                                       & ((IData)(vlSelfRef.wb_rd) 
                                          == (IData)(vlSelfRef.id_rs2)))
                                       ? 3U : 0U)) ? vlSelfRef.wb_data
                               : vlSelfRef.id_rs2_data)),32);
    bufp->chgIData(oldp+229,((vlSelfRef.core__DOT__id_imm 
                              + ((2U == (IData)(vlSelfRef.core__DOT__forward_c))
                                  ? vlSelfRef.core__DOT__mem_alu_result
                                  : ((1U == (IData)(vlSelfRef.core__DOT__forward_c))
                                      ? vlSelfRef.wb_data
                                      : vlSelfRef.id_rs1_data)))),32);
    bufp->chgIData(oldp+230,(((2U == (IData)(vlSelfRef.core__DOT__forward_c))
                               ? vlSelfRef.core__DOT__mem_alu_result
                               : ((1U == (IData)(vlSelfRef.core__DOT__forward_c))
                                   ? vlSelfRef.wb_data
                                   : vlSelfRef.id_rs1_data))),32);
    bufp->chgCData(oldp+231,(((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                & (0U != (IData)(vlSelfRef.wb_rd))) 
                               & ((IData)(vlSelfRef.wb_rd) 
                                  == (IData)(vlSelfRef.id_rs1)))
                               ? 3U : 0U)),2);
    bufp->chgCData(oldp+232,(((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                & (0U != (IData)(vlSelfRef.wb_rd))) 
                               & ((IData)(vlSelfRef.wb_rd) 
                                  == (IData)(vlSelfRef.id_rs2)))
                               ? 3U : 0U)),2);
    bufp->chgCData(oldp+233,((0x7fU & vlSelfRef.id_instruction)),7);
    bufp->chgCData(oldp+234,((7U & (vlSelfRef.id_instruction 
                                    >> 0xcU))),3);
    bufp->chgSData(oldp+235,(((0x3f8U & (vlSelfRef.id_instruction 
                                         << 3U)) | 
                              (7U & (vlSelfRef.id_instruction 
                                     >> 0xcU)))),10);
    bufp->chgBit(oldp+236,((1U & (vlSelfRef.id_instruction 
                                  >> 2U))));
    bufp->chgBit(oldp+237,((1U & (vlSelfRef.id_instruction 
                                  >> 3U))));
    bufp->chgBit(oldp+238,((1U & (vlSelfRef.id_instruction 
                                  >> 4U))));
    bufp->chgBit(oldp+239,((1U & (vlSelfRef.id_instruction 
                                  >> 5U))));
    bufp->chgBit(oldp+240,((1U & (vlSelfRef.id_instruction 
                                  >> 6U))));
    bufp->chgBit(oldp+241,((1U & (vlSelfRef.id_instruction 
                                  >> 0xcU))));
    bufp->chgBit(oldp+242,((1U & (vlSelfRef.id_instruction 
                                  >> 0xdU))));
    bufp->chgBit(oldp+243,((1U & (vlSelfRef.id_instruction 
                                  >> 0xeU))));
    bufp->chgBit(oldp+244,((1U & (vlSelfRef.id_instruction 
                                  >> 0x1eU))));
    bufp->chgIData(oldp+245,(((2U & (IData)(vlSelfRef.core__DOT__ex_sel_bit_mux))
                               ? ((1U & (IData)(vlSelfRef.core__DOT__ex_sel_bit_mux))
                                   ? vlSelfRef.core__DOT__ex_pc_plus_imm
                                   : (vlSelfRef.core__DOT__id_imm 
                                      + vlSelfRef.core__DOT__if_current_pc))
                               : ((1U & (IData)(vlSelfRef.core__DOT__ex_sel_bit_mux))
                                   ? (vlSelfRef.core__DOT__id_imm 
                                      + ((2U == (IData)(vlSelfRef.core__DOT__forward_c))
                                          ? vlSelfRef.core__DOT__mem_alu_result
                                          : ((1U == (IData)(vlSelfRef.core__DOT__forward_c))
                                              ? vlSelfRef.wb_data
                                              : vlSelfRef.id_rs1_data)))
                                   : vlSelfRef.if_pc_out))),32);
    bufp->chgBit(oldp+246,((1U & (~ (IData)(vlSelfRef.stall)))));
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
