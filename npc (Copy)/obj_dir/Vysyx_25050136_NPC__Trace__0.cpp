// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136_NPC__Syms.h"


void Vysyx_25050136_NPC___024root__trace_chg_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25050136_NPC___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25050136_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_NPC___024root*>(voidSelf);
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25050136_NPC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25050136_NPC___024root__trace_chg_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgCData(oldp+1,((0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 7U))),5);
        bufp->chgBit(oldp+4,((1U & (~ ((0x23U == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                       | (0x63U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))));
        bufp->chgCData(oldp+5,(((((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                  << 3U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                    << 1U) | (1U & 
                                              (~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
        bufp->chgSData(oldp+6,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
        bufp->chgCData(oldp+7,((((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                 << 1U) | (3U == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))),2);
        bufp->chgCData(oldp+8,((((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                 << 2U) | (((0x6fU 
                                             == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                            << 1U) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))),3);
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+13,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                  ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xfU))]
                                  : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
        bufp->chgSData(oldp+16,((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
        bufp->chgBit(oldp+18,((1U & (~ (IData)(((0U 
                                                 == 
                                                 (0xf8000U 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                                & ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                   | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
        bufp->chgBit(oldp+19,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                        & (0U == (0xf80U 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))));
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+21,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                  ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                      ? ((0x67U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                          ? ((IData)(
                                                     (vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                      >> 1U)) 
                                             << 1U)
                                          : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                      : 0U) : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
        bufp->chgBit(oldp+22,(((0x73U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                               | ((0x30200073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                        | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                           & ((~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                              & (0U 
                                                 != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_25050136_NPC__DOT__inst),32);
        bufp->chgBit(oldp+25,((1U & (~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
        bufp->chgBit(oldp+27,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
        bufp->chgIData(oldp+29,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                  ? ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                      ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                  >> 1U)) 
                                         << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                  : 0U)),32);
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
        bufp->chgQData(oldp+32,((0x1ffffffffULL & (
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                                   + 
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
        bufp->chgIData(oldp+36,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                               (0x1fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+37,((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                 << (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+38,((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                 >> (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+39,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+40,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
        bufp->chgIData(oldp+42,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                  ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                              >> 1U)) 
                                     << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
        bufp->chgSData(oldp+45,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
        bufp->chgSData(oldp+46,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
        bufp->chgSData(oldp+47,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
        bufp->chgIData(oldp+51,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
        bufp->chgCData(oldp+56,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
        bufp->chgCData(oldp+57,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
        bufp->chgCData(oldp+58,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
        bufp->chgIData(oldp+59,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                  ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                      ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgIData(oldp+60,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                  ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                      ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgIData(oldp+61,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                  ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                      ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgIData(oldp+62,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                  ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                      ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgCData(oldp+63,((0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)),7);
        bufp->chgCData(oldp+64,((7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+65,((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+66,((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+67,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+68,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+69,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+70,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+71,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+72,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+73,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+74,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+75,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
        bufp->chgBit(oldp+76,((0U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+77,((1U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+78,((2U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+79,((3U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+80,((4U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+81,((5U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+82,((6U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+83,((7U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+84,((0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                      >> 0x19U))));
        bufp->chgBit(oldp+85,((0x20U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0x19U))));
        bufp->chgBit(oldp+86,((IData)((0x63U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+87,((IData)((0x1063U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+88,((IData)((0x4063U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+89,((IData)((0x5063U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+90,((IData)((0x6063U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+91,((IData)((0x7063U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+92,((IData)((3U == (0x707fU 
                                              & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+93,((IData)((0x1003U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+94,((IData)((0x2003U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+95,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
        bufp->chgBit(oldp+96,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
        bufp->chgBit(oldp+97,((IData)((0x23U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+98,((IData)((0x1023U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+99,((IData)((0x2023U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+100,((IData)((0x13U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+101,((IData)((0x2013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+102,((IData)((0x3013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+103,((IData)((0x4013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+104,((IData)((0x6013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+105,((IData)((0x7013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+106,((IData)((0x1013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+107,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                                & (0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
        bufp->chgBit(oldp+109,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                & (0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
        bufp->chgBit(oldp+111,((IData)((0x1033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+112,((IData)((0x2033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+113,((IData)((0x3033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+114,((IData)((0x4033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+115,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
        bufp->chgBit(oldp+116,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                & (0x20U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+117,((IData)((0x6033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+118,((IData)((0x7033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgBit(oldp+119,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
        bufp->chgBit(oldp+120,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
        bufp->chgBit(oldp+122,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
        bufp->chgBit(oldp+124,((0x30200073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
        bufp->chgBit(oldp+125,((0x73U == vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
        bufp->chgBit(oldp+126,((0x100073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
        bufp->chgBit(oldp+127,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))));
        bufp->chgBit(oldp+128,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
        bufp->chgIData(oldp+129,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                   ? (0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                               >> 0x14U))
                                   : (((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+130,((((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+131,((((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+132,((0xfffff000U & vlSelfRef.ysyx_25050136_NPC__DOT__inst)),32);
        bufp->chgIData(oldp+133,((((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                                                 | (0x800U 
                                                    & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    }
    bufp->chgBit(oldp+167,(vlSelfRef.clk));
    bufp->chgBit(oldp+168,(vlSelfRef.reset));
    bufp->chgIData(oldp+169,(vlSelfRef.mem_wdata_o),32);
    bufp->chgIData(oldp+170,(vlSelfRef.mem_addr_o),32);
    bufp->chgBit(oldp+171,(vlSelfRef.mem_ren_o));
    bufp->chgBit(oldp+172,(vlSelfRef.mem_wen_o));
    bufp->chgCData(oldp+173,(vlSelfRef.mem_wmask_o),4);
    bufp->chgIData(oldp+174,(vlSelfRef.pc_o),32);
    bufp->chgIData(oldp+175,(((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                               ? ((0xfU == (IData)(vlSelfRef.mem_wmask_o))
                                   ? vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata
                                   : ((3U == (IData)(vlSelfRef.mem_wmask_o))
                                       ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                           : (0xffffU 
                                              & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                       : ((1U == (IData)(vlSelfRef.mem_wmask_o))
                                           ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                               : (0xffU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                           : 0U))) : 
                              ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o))),32);
    bufp->chgIData(oldp+176,(((0xfU == (IData)(vlSelfRef.mem_wmask_o))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata
                               : ((3U == (IData)(vlSelfRef.mem_wmask_o))
                                   ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                       : (0xffffU & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                   : ((1U == (IData)(vlSelfRef.mem_wmask_o))
                                       ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                           : (0xffU 
                                              & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                       : 0U)))),32);
}

void Vysyx_25050136_NPC___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25050136_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_NPC___024root*>(voidSelf);
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
