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
        bufp->chgIData(oldp+3,(vlSelfRef.core__DOT__instruction_final),32);
        bufp->chgIData(oldp+4,(vlSelfRef.core__DOT__rs1_data_final),32);
        bufp->chgIData(oldp+5,(vlSelfRef.core__DOT__rs2_data_final),32);
        bufp->chgIData(oldp+6,(vlSelfRef.core__DOT__current_pc_final),32);
        bufp->chgIData(oldp+7,(vlSelfRef.core__DOT__pc_w_final),32);
        bufp->chgIData(oldp+8,(vlSelfRef.core__DOT__store_data_final),32);
        bufp->chgBit(oldp+9,(vlSelfRef.core__DOT__data_mem__DOT__csb));
        bufp->chgSData(oldp+10,(vlSelfRef.core__DOT__data_mem__DOT__addr_o),13);
        bufp->chgIData(oldp+11,(vlSelfRef.core__DOT__data_mem__DOT__wdata_o),32);
        bufp->chgCData(oldp+12,(vlSelfRef.core__DOT__data_mem__DOT__wmask_o),4);
        bufp->chgBit(oldp+13,(vlSelfRef.core__DOT__data_mem__DOT__we_o));
        bufp->chgBit(oldp+14,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__csb_reg));
        bufp->chgBit(oldp+15,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__web_reg));
        bufp->chgCData(oldp+16,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__wmask_reg),4);
        bufp->chgSData(oldp+17,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__addr_reg),13);
        bufp->chgIData(oldp+18,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__din_reg),32);
        bufp->chgIData(oldp+19,(vlSelfRef.core__DOT__data_mem__DOT__memory__DOT__dout_reg),32);
        bufp->chgIData(oldp+20,(vlSelfRef.core__DOT__delayRegister__DOT__instruction_1_delay),32);
        bufp->chgIData(oldp+21,(vlSelfRef.core__DOT__delayRegister__DOT__rs1_data_1_delay),32);
        bufp->chgIData(oldp+22,(vlSelfRef.core__DOT__delayRegister__DOT__rs2_data_1_delay),32);
        bufp->chgIData(oldp+23,(vlSelfRef.core__DOT__delayRegister__DOT__pc_w_1_delay),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+24,(((0x1000U >= (0x1fffU 
                                              & (vlSelfRef.core__DOT__fetch__DOT__pc 
                                                 >> 2U)))
                                  ? vlSelfRef.core__DOT__fetch__DOT__IM__DOT__memory
                                 [(0x1fffU & (vlSelfRef.core__DOT__fetch__DOT__pc 
                                              >> 2U))]
                                  : 0U)),32);
        bufp->chgIData(oldp+25,(((IData)(4U) + vlSelfRef.core__DOT__fetch__DOT__pc)),32);
        bufp->chgIData(oldp+26,(vlSelfRef.core__DOT__id_instruction),32);
        bufp->chgCData(oldp+27,((0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+30,(vlSelfRef.core__DOT__wb_rd),5);
        bufp->chgIData(oldp+31,(vlSelfRef.core__DOT__id_rs1_data),32);
        bufp->chgIData(oldp+32,(((0U == (0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                  >> 0x14U)))
                                  ? 0U : vlSelfRef.core__DOT__regfile__DOT__registers
                                 [(0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                            >> 0x14U))])),32);
        bufp->chgIData(oldp+33,(vlSelfRef.core__DOT__ex_alu_result),32);
        bufp->chgIData(oldp+34,(vlSelfRef.core__DOT__mem_read_data),32);
        bufp->chgIData(oldp+35,(vlSelfRef.core__DOT__wb_data),32);
        bufp->chgBit(oldp+36,(vlSelfRef.core__DOT__stall));
        bufp->chgBit(oldp+37,(vlSelfRef.core__DOT__flush));
        bufp->chgCData(oldp+38,(vlSelfRef.core__DOT__forward_a),2);
        bufp->chgCData(oldp+39,(vlSelfRef.core__DOT__forward_b),2);
        bufp->chgCData(oldp+40,(vlSelfRef.core__DOT__ex_sel_bit_mux),2);
        bufp->chgCData(oldp+41,(vlSelfRef.core__DOT__wb_sel_bit_mux),2);
        bufp->chgCData(oldp+42,(vlSelfRef.core__DOT__mem_sel_bit_mux),2);
        bufp->chgIData(oldp+43,(vlSelfRef.core__DOT__ex_pc_plus_imm),32);
        bufp->chgIData(oldp+44,(vlSelfRef.core__DOT__id_pcplus4),32);
        bufp->chgBit(oldp+45,(vlSelfRef.core__DOT__mem_jal_enb));
        bufp->chgCData(oldp+46,(vlSelfRef.core__DOT__ex_rd),5);
        bufp->chgCData(oldp+47,(vlSelfRef.core__DOT__ex_rs1),5);
        bufp->chgCData(oldp+48,(vlSelfRef.core__DOT__ex_rs2),5);
        bufp->chgCData(oldp+49,(vlSelfRef.core__DOT__mem_rd),5);
        bufp->chgIData(oldp+50,(vlSelfRef.core__DOT__id_imm),32);
        bufp->chgCData(oldp+51,((((((IData)(vlSelfRef.core__DOT__id_sub) 
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
                                         | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23) 
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
        bufp->chgCData(oldp+52,(vlSelfRef.core__DOT__ex_alu_sel),4);
        bufp->chgBit(oldp+53,(((IData)(vlSelfRef.core__DOT__id_lw) 
                               | ((0x6fU == (0x7fU 
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
                                                                                | (IData)(vlSelfRef.core__DOT__id_addi2)))))))))))))))))))))))))))))))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.core__DOT__id_lui_enb) 
                               | ((0x6fU == (0x7fU 
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
                                                                                | (IData)(vlSelfRef.core__DOT__id_addi2)))))))))))))))))))))));
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_18) 
                               | ((IData)(vlSelfRef.core__DOT__id_lw) 
                                  | ((IData)(vlSelfRef.core__DOT__id_lbu) 
                                     | (IData)(vlSelfRef.core__DOT__id_lhu))))));
        bufp->chgBit(oldp+56,(vlSelfRef.core__DOT__id_jal_enb));
        bufp->chgBit(oldp+57,(vlSelfRef.core__DOT__id_branch_enb));
        bufp->chgBit(oldp+58,(vlSelfRef.core__DOT__id_lui_enb));
        bufp->chgBit(oldp+59,(vlSelfRef.core__DOT__id_auipc_wenb));
        bufp->chgBit(oldp+60,(vlSelfRef.core__DOT__id_sb));
        bufp->chgBit(oldp+61,(vlSelfRef.core__DOT__id_sw));
        bufp->chgBit(oldp+62,(vlSelfRef.core__DOT__id_sh));
        bufp->chgBit(oldp+63,((1U & (~ ((IData)(vlSelfRef.core__DOT__id_jal_enb) 
                                        | (IData)(vlSelfRef.core__DOT__ex_branch_taken))))));
        bufp->chgBit(oldp+64,(vlSelfRef.core__DOT__id_addr));
        bufp->chgBit(oldp+65,(vlSelfRef.core__DOT__id_sub));
        bufp->chgBit(oldp+66,(vlSelfRef.core__DOT__id_sllr));
        bufp->chgBit(oldp+67,(vlSelfRef.core__DOT__id_sltr));
        bufp->chgBit(oldp+68,(vlSelfRef.core__DOT__id_sltur));
        bufp->chgBit(oldp+69,(vlSelfRef.core__DOT__id_xorr));
        bufp->chgBit(oldp+70,(vlSelfRef.core__DOT__id_srlr));
        bufp->chgBit(oldp+71,(vlSelfRef.core__DOT__id_srar));
        bufp->chgBit(oldp+72,(vlSelfRef.core__DOT__id_orr));
        bufp->chgBit(oldp+73,(vlSelfRef.core__DOT__id_andr));
        bufp->chgBit(oldp+74,(vlSelfRef.core__DOT__id_addi));
        bufp->chgBit(oldp+75,(vlSelfRef.core__DOT__id_addi2));
        bufp->chgBit(oldp+76,(vlSelfRef.core__DOT__id_slli));
        bufp->chgBit(oldp+77,(vlSelfRef.core__DOT__id_slti));
        bufp->chgBit(oldp+78,(vlSelfRef.core__DOT__id_sltui));
        bufp->chgBit(oldp+79,(vlSelfRef.core__DOT__id_xori));
        bufp->chgBit(oldp+80,(vlSelfRef.core__DOT__id_srli));
        bufp->chgBit(oldp+81,(vlSelfRef.core__DOT__id_srai));
        bufp->chgBit(oldp+82,(vlSelfRef.core__DOT__id_ori));
        bufp->chgBit(oldp+83,(vlSelfRef.core__DOT__id_andi));
        bufp->chgBit(oldp+84,((0x6fU == (0x7fU & vlSelfRef.core__DOT__id_instruction))));
        bufp->chgBit(oldp+85,(vlSelfRef.core__DOT__id_jalr));
        bufp->chgBit(oldp+86,(((~ (vlSelfRef.core__DOT__id_instruction 
                                   >> 0xeU)) & (IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_27))));
        bufp->chgBit(oldp+87,(vlSelfRef.core__DOT__id_bne));
        bufp->chgBit(oldp+88,(vlSelfRef.core__DOT__id_blt));
        bufp->chgBit(oldp+89,(vlSelfRef.core__DOT__id_bge));
        bufp->chgBit(oldp+90,(vlSelfRef.core__DOT__id_bltu));
        bufp->chgBit(oldp+91,(vlSelfRef.core__DOT__id_bgeu));
        bufp->chgBit(oldp+92,(vlSelfRef.core__DOT__ex_branch_taken));
        bufp->chgBit(oldp+93,(vlSelfRef.core__DOT__ex_jal_enb));
        bufp->chgBit(oldp+94,(vlSelfRef.core__DOT__ex_wenb));
        bufp->chgBit(oldp+95,(vlSelfRef.core__DOT__ex_rs2_imm_sel));
        bufp->chgBit(oldp+96,(vlSelfRef.core__DOT__ex_branch_enb));
        bufp->chgBit(oldp+97,(vlSelfRef.core__DOT__ex_lui_enb));
        bufp->chgBit(oldp+98,(vlSelfRef.core__DOT__ex_auipc_wenb));
        bufp->chgBit(oldp+99,(vlSelfRef.core__DOT__ex_sb));
        bufp->chgBit(oldp+100,(vlSelfRef.core__DOT__ex_sh));
        bufp->chgBit(oldp+101,(vlSelfRef.core__DOT__ex_sw));
        bufp->chgIData(oldp+102,(((8U == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                   ? vlSelfRef.core__DOT__ex_rs2_forwarded
                                   : ((2U == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                       ? (0xffU & vlSelfRef.core__DOT__ex_rs2_forwarded)
                                       : ((4U == (IData)(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit))
                                           ? (0xffffU 
                                              & vlSelfRef.core__DOT__ex_rs2_forwarded)
                                           : 0U)))),32);
        bufp->chgIData(oldp+103,(vlSelfRef.core__DOT__ex_alu_data_B),32);
        bufp->chgIData(oldp+104,(vlSelfRef.core__DOT__ex_rs1_data),32);
        bufp->chgIData(oldp+105,(vlSelfRef.core__DOT__ex_rs2_data),32);
        bufp->chgIData(oldp+106,(vlSelfRef.core__DOT__ex_imm),32);
        bufp->chgIData(oldp+107,(vlSelfRef.core__DOT__ex_pcplus4),32);
        bufp->chgIData(oldp+108,(vlSelfRef.core__DOT__ex_rs1_forwarded),32);
        bufp->chgIData(oldp+109,(vlSelfRef.core__DOT__ex_rs2_forwarded),32);
        bufp->chgBit(oldp+110,(vlSelfRef.core__DOT__mem_store_enb));
        bufp->chgBit(oldp+111,(vlSelfRef.core__DOT__ex_store_enb));
        bufp->chgBit(oldp+112,(vlSelfRef.core__DOT__id_store_enb));
        bufp->chgBit(oldp+113,(vlSelfRef.core__DOT__wb_load_enb));
        bufp->chgBit(oldp+114,(vlSelfRef.core__DOT__wb_jal_enb));
        bufp->chgBit(oldp+115,(vlSelfRef.core__DOT__wb_lui_enb));
        bufp->chgBit(oldp+116,(vlSelfRef.core__DOT__wb_auipc_wenb));
        bufp->chgBit(oldp+117,(vlSelfRef.core__DOT__mem_wenb));
        bufp->chgBit(oldp+118,(vlSelfRef.core__DOT__mem_load_enb));
        bufp->chgBit(oldp+119,(vlSelfRef.core__DOT__mem_sb));
        bufp->chgBit(oldp+120,(vlSelfRef.core__DOT__mem_sh));
        bufp->chgBit(oldp+121,(vlSelfRef.core__DOT__mem_sw));
        bufp->chgIData(oldp+122,(vlSelfRef.core__DOT__mem_alu_result),32);
        bufp->chgIData(oldp+123,(vlSelfRef.core__DOT__mem_store_data),32);
        bufp->chgIData(oldp+124,(vlSelfRef.core__DOT__wb_mem_data),32);
        bufp->chgIData(oldp+125,(vlSelfRef.core__DOT__wb_alu_result),32);
        bufp->chgIData(oldp+126,(vlSelfRef.core__DOT__wb_pcplus4),32);
        bufp->chgIData(oldp+127,((vlSelfRef.core__DOT__id_imm 
                                  + vlSelfRef.core__DOT__id_pcplus4)),32);
        bufp->chgIData(oldp+128,(((3U == ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                            & (0U != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                           & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                              == (0x1fU 
                                                  & (vlSelfRef.core__DOT__id_instruction 
                                                     >> 0xfU))))
                                           ? 3U : 0U))
                                   ? vlSelfRef.core__DOT__wb_data
                                   : vlSelfRef.core__DOT__id_rs1_data)),32);
        bufp->chgIData(oldp+129,(((3U == ((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                            & (0U != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                           & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                              == (0x1fU 
                                                  & (vlSelfRef.core__DOT__id_instruction 
                                                     >> 0x14U))))
                                           ? 3U : 0U))
                                   ? vlSelfRef.core__DOT__wb_data
                                   : ((0U == (0x1fU 
                                              & (vlSelfRef.core__DOT__id_instruction 
                                                 >> 0x14U)))
                                       ? 0U : vlSelfRef.core__DOT__regfile__DOT__registers
                                      [(0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                 >> 0x14U))]))),32);
        bufp->chgIData(oldp+130,(vlSelfRef.core__DOT__mem_pc_plus_imm),32);
        bufp->chgIData(oldp+131,(vlSelfRef.core__DOT__wb_pc_plus_imm),32);
        bufp->chgCData(oldp+132,(vlSelfRef.core__DOT__pri_enc_sel),3);
        bufp->chgIData(oldp+133,((vlSelfRef.core__DOT__id_current_pc 
                                  + vlSelfRef.core__DOT__id_imm)),32);
        bufp->chgIData(oldp+134,(vlSelfRef.core__DOT__mem_jal_return_add),32);
        bufp->chgIData(oldp+135,(vlSelfRef.core__DOT__wb_jal_return_add),32);
        bufp->chgBit(oldp+136,(vlSelfRef.core__DOT__flush_for_if));
        bufp->chgBit(oldp+137,((1U & (~ ((IData)(vlSelfRef.core__DOT__wb_auipc_wenb) 
                                         | ((IData)(vlSelfRef.core__DOT__wb_lui_enb) 
                                            | ((IData)(vlSelfRef.core__DOT__wb_jal_enb) 
                                               | (IData)(vlSelfRef.core__DOT__wb_load_enb))))))));
        bufp->chgBit(oldp+138,(vlSelfRef.core__DOT__id_lb));
        bufp->chgBit(oldp+139,(vlSelfRef.core__DOT__id_lh));
        bufp->chgBit(oldp+140,(vlSelfRef.core__DOT__id_lhu));
        bufp->chgBit(oldp+141,(vlSelfRef.core__DOT__id_lbu));
        bufp->chgBit(oldp+142,(vlSelfRef.core__DOT__id_lw));
        bufp->chgIData(oldp+143,((vlSelfRef.core__DOT__id_imm 
                                  + ((2U == (IData)(vlSelfRef.core__DOT__forward_c))
                                      ? vlSelfRef.core__DOT__mem_alu_result
                                      : ((1U == (IData)(vlSelfRef.core__DOT__forward_c))
                                          ? vlSelfRef.core__DOT__wb_data
                                          : vlSelfRef.core__DOT__id_rs1_data)))),32);
        bufp->chgIData(oldp+144,(((2U == (IData)(vlSelfRef.core__DOT__forward_c))
                                   ? vlSelfRef.core__DOT__mem_alu_result
                                   : ((1U == (IData)(vlSelfRef.core__DOT__forward_c))
                                       ? vlSelfRef.core__DOT__wb_data
                                       : vlSelfRef.core__DOT__id_rs1_data))),32);
        bufp->chgCData(oldp+145,(vlSelfRef.core__DOT__forward_c),2);
        bufp->chgCData(oldp+146,(((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                    & (0U != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                   & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                      == (0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                   >> 0xfU))))
                                   ? 3U : 0U)),2);
        bufp->chgCData(oldp+147,(((((IData)(vlSelfRef.core__DOT__wb_wenb) 
                                    & (0U != (IData)(vlSelfRef.core__DOT__wb_rd))) 
                                   & ((IData)(vlSelfRef.core__DOT__wb_rd) 
                                      == (0x1fU & (vlSelfRef.core__DOT__id_instruction 
                                                   >> 0x14U))))
                                   ? 3U : 0U)),2);
        bufp->chgIData(oldp+148,(vlSelfRef.core__DOT__id_current_pc),32);
        bufp->chgIData(oldp+149,(vlSelfRef.core__DOT__ex_current_pc),32);
        bufp->chgIData(oldp+150,(vlSelfRef.core__DOT__ex_jal_return_add),32);
        bufp->chgBit(oldp+151,(vlSelfRef.core__DOT__ex_lb));
        bufp->chgBit(oldp+152,(vlSelfRef.core__DOT__ex_lh));
        bufp->chgBit(oldp+153,(vlSelfRef.core__DOT__ex_lw));
        bufp->chgBit(oldp+154,(vlSelfRef.core__DOT__ex_lbu));
        bufp->chgBit(oldp+155,(vlSelfRef.core__DOT__ex_lhu));
        bufp->chgBit(oldp+156,(vlSelfRef.core__DOT__ex_load_enb));
        bufp->chgBit(oldp+157,(vlSelfRef.core__DOT__mem_lb));
        bufp->chgBit(oldp+158,(vlSelfRef.core__DOT__mem_lh));
        bufp->chgBit(oldp+159,(vlSelfRef.core__DOT__mem_lw));
        bufp->chgBit(oldp+160,(vlSelfRef.core__DOT__mem_lbu));
        bufp->chgBit(oldp+161,(vlSelfRef.core__DOT__mem_lhu));
        bufp->chgBit(oldp+162,(vlSelfRef.core__DOT__wb_wenb));
        bufp->chgCData(oldp+163,(vlSelfRef.core__DOT__mem_rs1),5);
        bufp->chgCData(oldp+164,(vlSelfRef.core__DOT__mem_rs2),5);
        bufp->chgBit(oldp+165,(vlSelfRef.core__DOT__mem_auipc_wenb));
        bufp->chgBit(oldp+166,(vlSelfRef.core__DOT__mem_lui_enb));
        bufp->chgBit(oldp+167,((0U != (0x7fU & vlSelfRef.core__DOT__id_instruction))));
        bufp->chgBit(oldp+168,(vlSelfRef.core__DOT__id_ex_ins_valid_pin));
        bufp->chgBit(oldp+169,(vlSelfRef.core__DOT__ex_mem_ins_valid_pin));
        bufp->chgBit(oldp+170,(vlSelfRef.core__DOT__mem_wb_ins_valid_pin));
        bufp->chgCData(oldp+171,(((0xcU & ((- (IData)((IData)(vlSelfRef.core__DOT__id_sw))) 
                                           << 2U)) 
                                  | ((((IData)(vlSelfRef.core__DOT__id_sh) 
                                       | (IData)(vlSelfRef.core__DOT__id_sw)) 
                                      << 1U) | (IData)(vlSelfRef.core__DOT__id_store_enb)))),4);
        bufp->chgCData(oldp+172,(vlSelfRef.core__DOT__ex_wmask),4);
        bufp->chgCData(oldp+173,(vlSelfRef.core__DOT__mem_wmask),4);
        bufp->chgBit(oldp+174,(vlSelfRef.core__DOT__ex_we));
        bufp->chgBit(oldp+175,(vlSelfRef.core__DOT__mem_we));
        bufp->chgIData(oldp+176,(vlSelfRef.core__DOT__ex_instruction),32);
        bufp->chgIData(oldp+177,(vlSelfRef.core__DOT__if_pc_w),32);
        bufp->chgIData(oldp+178,(vlSelfRef.core__DOT__mem_current_pc),32);
        bufp->chgIData(oldp+179,(vlSelfRef.core__DOT__id_pc_w),32);
        bufp->chgIData(oldp+180,(vlSelfRef.core__DOT__ex_pc_w),32);
        bufp->chgCData(oldp+181,((0x7fU & vlSelfRef.core__DOT__id_instruction)),7);
        bufp->chgCData(oldp+182,((7U & (vlSelfRef.core__DOT__id_instruction 
                                        >> 0xcU))),3);
        bufp->chgSData(oldp+183,(((0x3f8U & (vlSelfRef.core__DOT__id_instruction 
                                             << 3U)) 
                                  | (7U & (vlSelfRef.core__DOT__id_instruction 
                                           >> 0xcU)))),10);
        bufp->chgBit(oldp+184,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 2U))));
        bufp->chgBit(oldp+185,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 3U))));
        bufp->chgBit(oldp+186,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 4U))));
        bufp->chgBit(oldp+187,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 5U))));
        bufp->chgBit(oldp+188,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 6U))));
        bufp->chgBit(oldp+189,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 0xcU))));
        bufp->chgBit(oldp+190,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 0xdU))));
        bufp->chgBit(oldp+191,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 0xeU))));
        bufp->chgBit(oldp+192,((1U & (vlSelfRef.core__DOT__id_instruction 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+193,(((IData)(vlSelfRef.core__DOT__id_sub) 
                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                   | (IData)(vlSelfRef.core__DOT__id_branch_enb)))));
        bufp->chgBit(oldp+194,((((IData)(vlSelfRef.core__DOT__id_xorr) 
                                 | (IData)(vlSelfRef.core__DOT__id_xori)) 
                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__orrr) 
                                   | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                      | ((IData)(vlSelfRef.core__DOT__id_blt) 
                                         | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                            | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                               | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                                  | (IData)(vlSelfRef.core__DOT__control_unit__DOT__srl))))))))));
        bufp->chgBit(oldp+195,(((IData)(vlSelfRef.core__DOT__control_unit__DOT__orrr) 
                                | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                   | ((IData)(vlSelfRef.core__DOT__control_unit__DOT____VdfgRegularize_h9df94077_0_23) 
                                      | ((IData)(vlSelfRef.core__DOT__id_bltu) 
                                         | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                            | (((IData)(vlSelfRef.core__DOT__id_sltr) 
                                                | (IData)(vlSelfRef.core__DOT__id_slti)) 
                                               | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu)))))))));
        bufp->chgBit(oldp+196,(((IData)(vlSelfRef.core__DOT__control_unit__DOT__sra) 
                                | ((IData)(vlSelfRef.core__DOT__id_bne) 
                                   | ((IData)(vlSelfRef.core__DOT__id_bge) 
                                      | ((IData)(vlSelfRef.core__DOT__id_bgeu) 
                                         | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__andd) 
                                            | (((IData)(vlSelfRef.core__DOT__id_sllr) 
                                                | (IData)(vlSelfRef.core__DOT__id_slli)) 
                                               | ((IData)(vlSelfRef.core__DOT__control_unit__DOT__srl) 
                                                  | (IData)(vlSelfRef.core__DOT__control_unit__DOT__sltu))))))))));
        bufp->chgBit(oldp+197,(vlSelfRef.core__DOT__control_unit__DOT__orrr));
        bufp->chgBit(oldp+198,(vlSelfRef.core__DOT__control_unit__DOT__andd));
        bufp->chgBit(oldp+199,(((IData)(vlSelfRef.core__DOT__id_addr) 
                                | (IData)(vlSelfRef.core__DOT__id_addi))));
        bufp->chgBit(oldp+200,(((IData)(vlSelfRef.core__DOT__id_sllr) 
                                | (IData)(vlSelfRef.core__DOT__id_slli))));
        bufp->chgBit(oldp+201,(((IData)(vlSelfRef.core__DOT__id_sltr) 
                                | (IData)(vlSelfRef.core__DOT__id_slti))));
        bufp->chgBit(oldp+202,(vlSelfRef.core__DOT__control_unit__DOT__sltu));
        bufp->chgBit(oldp+203,(((IData)(vlSelfRef.core__DOT__id_xorr) 
                                | (IData)(vlSelfRef.core__DOT__id_xori))));
        bufp->chgBit(oldp+204,(vlSelfRef.core__DOT__control_unit__DOT__srl));
        bufp->chgBit(oldp+205,(vlSelfRef.core__DOT__control_unit__DOT__sra));
        bufp->chgSData(oldp+206,((0x1fffU & vlSelfRef.core__DOT__mem_alu_result)),13);
        bufp->chgIData(oldp+207,(vlSelfRef.core__DOT__fetch__DOT__pc),32);
        bufp->chgBit(oldp+208,((1U & (~ (IData)(vlSelfRef.core__DOT__stall)))));
        bufp->chgBit(oldp+209,(vlSelfRef.core__DOT__if_id__DOT__ins_valid_pin_out));
        bufp->chgCData(oldp+210,(vlSelfRef.core__DOT__immediate_generator__DOT__sel),4);
        bufp->chgCData(oldp+211,(vlSelfRef.core__DOT____Vcellinp__mux_rs2__sel_bit),4);
        bufp->chgCData(oldp+212,(((((IData)(vlSelfRef.core__DOT__wb_lui_enb) 
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
        bufp->chgIData(oldp+213,(vlSelfRef.core__DOT__regfile__DOT__registers[0]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.core__DOT__regfile__DOT__registers[1]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.core__DOT__regfile__DOT__registers[2]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.core__DOT__regfile__DOT__registers[3]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.core__DOT__regfile__DOT__registers[4]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.core__DOT__regfile__DOT__registers[5]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.core__DOT__regfile__DOT__registers[6]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.core__DOT__regfile__DOT__registers[7]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.core__DOT__regfile__DOT__registers[8]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.core__DOT__regfile__DOT__registers[9]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.core__DOT__regfile__DOT__registers[10]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.core__DOT__regfile__DOT__registers[11]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.core__DOT__regfile__DOT__registers[12]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.core__DOT__regfile__DOT__registers[13]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.core__DOT__regfile__DOT__registers[14]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.core__DOT__regfile__DOT__registers[15]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.core__DOT__regfile__DOT__registers[16]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.core__DOT__regfile__DOT__registers[17]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.core__DOT__regfile__DOT__registers[18]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.core__DOT__regfile__DOT__registers[19]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.core__DOT__regfile__DOT__registers[20]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.core__DOT__regfile__DOT__registers[21]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.core__DOT__regfile__DOT__registers[22]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.core__DOT__regfile__DOT__registers[23]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.core__DOT__regfile__DOT__registers[24]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.core__DOT__regfile__DOT__registers[25]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.core__DOT__regfile__DOT__registers[26]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.core__DOT__regfile__DOT__registers[27]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.core__DOT__regfile__DOT__registers[28]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.core__DOT__regfile__DOT__registers[29]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.core__DOT__regfile__DOT__registers[30]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.core__DOT__regfile__DOT__registers[31]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.core__DOT__regfile__DOT__i),32);
    }
    bufp->chgBit(oldp+246,(vlSelfRef.clk));
    bufp->chgBit(oldp+247,(vlSelfRef.rst));
    bufp->chgBit(oldp+248,(vlSelfRef.rvfi_o_valid_0));
    bufp->chgIData(oldp+249,(vlSelfRef.rvfi_o_insn_0),32);
    bufp->chgCData(oldp+250,(vlSelfRef.rvfi_o_rs1_addr_0),5);
    bufp->chgCData(oldp+251,(vlSelfRef.rvfi_o_rs2_addr_0),5);
    bufp->chgIData(oldp+252,(vlSelfRef.rvfi_o_rs1_rdata_0),32);
    bufp->chgIData(oldp+253,(vlSelfRef.rvfi_o_rs2_rdata_0),32);
    bufp->chgCData(oldp+254,(vlSelfRef.rvfi_o_rd_addr_0),5);
    bufp->chgIData(oldp+255,(vlSelfRef.rvfi_o_rd_wdata_0),32);
    bufp->chgIData(oldp+256,(vlSelfRef.rvfi_o_pc_rdata_0),32);
    bufp->chgIData(oldp+257,(vlSelfRef.rvfi_o_pc_wdata_0),32);
    bufp->chgIData(oldp+258,(vlSelfRef.rvfi_o_mem_addr_0),32);
    bufp->chgCData(oldp+259,(vlSelfRef.rvfi_o_mem_wmask_0),4);
    bufp->chgIData(oldp+260,(vlSelfRef.rvfi_o_mem_rdata_0),32);
    bufp->chgIData(oldp+261,(vlSelfRef.rvfi_o_mem_wdata_0),32);
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
