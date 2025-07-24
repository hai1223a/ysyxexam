// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136_SOC__Syms.h"


void Vysyx_25050136_SOC___024root__trace_chg_0_sub_0(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25050136_SOC___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25050136_SOC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_SOC___024root*>(voidSelf);
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25050136_SOC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25050136_SOC___024root__trace_chg_0_sub_0(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic),32);
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic),32);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                               [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                          >> 0x14U))]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
        bufp->chgBit(oldp+4,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                              & (0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgCData(oldp+5,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_mask),4);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rvalid));
        bufp->chgBit(oldp+9,(vlSelfRef.ysyx_25050136_SOC__DOT__mready));
        bufp->chgBit(oldp+10,(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rvalid));
        bufp->chgIData(oldp+11,((((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                  << 0x10U) | ((0xff00U 
                                                & ((- (IData)(
                                                              ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (- (IData)(
                                                               ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3))))))))),32);
        bufp->chgIData(oldp+12,(((IData)(4U) + vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                          >> 7U))),5);
        bufp->chgBit(oldp+16,((1U & (~ ((0x23U == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                        | (0x63U == 
                                           (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))))));
        bufp->chgCData(oldp+17,(((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                   << 3U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                     << 1U) | (1U & 
                                               (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
        bufp->chgSData(oldp+18,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
        bufp->chgCData(oldp+19,((((0x23U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                  << 1U) | (3U == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))),2);
        bufp->chgCData(oldp+20,((((0x63U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                  << 2U) | (((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                             << 1U) 
                                            | (0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))))),3);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
        bufp->chgIData(oldp+24,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xfU))]
                                  : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
        bufp->chgSData(oldp+27,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
        bufp->chgBit(oldp+29,((1U & (~ (IData)(((0U 
                                                 == 
                                                 (0xf8000U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                   | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
        bufp->chgBit(oldp+30,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                        & (0U == (0xf80U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))))));
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+32,(((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))
                                  ? ((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_mask))
                                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic
                                      : ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_mask))
                                          ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                              : (0xffffU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                          : ((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_mask))
                                              ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                                  : 
                                                 (0xffU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                              : 0U)))
                                  : ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                      : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o))),32);
        bufp->chgIData(oldp+33,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                  ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                      ? ((0x67U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))
                                          ? ((IData)(
                                                     (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                      >> 1U)) 
                                             << 1U)
                                          : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                      : 0U) : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
        bufp->chgBit(oldp+34,(((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic) 
                               | ((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                        | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                           & ((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                              & (0U 
                                                 != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
        bufp->chgBit(oldp+35,(((~ ((0x23U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                   | (0x63U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rvalid))));
        bufp->chgBit(oldp+36,((1U & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgIData(oldp+38,(((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_mask))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic
                                  : ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_mask))
                                      ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                          : (0xffffU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                      : ((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_mask))
                                          ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                              : (0xffU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__rdata_dpic))
                                          : 0U)))),32);
        bufp->chgBit(oldp+39,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
        bufp->chgIData(oldp+40,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                  ? ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))
                                      ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                  >> 1U)) 
                                         << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                  : 0U)),32);
        bufp->chgBit(oldp+41,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
        bufp->chgQData(oldp+43,((0x1ffffffffULL & (
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                                   + 
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
        bufp->chgIData(oldp+47,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                               (0x1fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+48,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                 << (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+49,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                 >> (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+50,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+51,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
        bufp->chgIData(oldp+53,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))
                                  ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                              >> 1U)) 
                                     << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
        bufp->chgIData(oldp+55,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
        bufp->chgSData(oldp+56,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
        bufp->chgSData(oldp+57,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
        bufp->chgSData(oldp+58,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        bufp->chgBit(oldp+60,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
        bufp->chgBit(oldp+61,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
        bufp->chgIData(oldp+62,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
        bufp->chgIData(oldp+63,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
        bufp->chgIData(oldp+65,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
        bufp->chgCData(oldp+66,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
        bufp->chgCData(oldp+67,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
        bufp->chgCData(oldp+68,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
        bufp->chgCData(oldp+69,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
        bufp->chgIData(oldp+70,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgIData(oldp+71,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgIData(oldp+72,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgIData(oldp+73,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                  : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                      : 0U))),32);
        bufp->chgCData(oldp+74,((0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)),7);
        bufp->chgCData(oldp+75,((7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+76,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+77,((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+78,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+79,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+80,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+81,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+82,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+83,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+84,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+85,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+86,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))));
        bufp->chgBit(oldp+87,((0U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+88,((1U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+89,((2U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+90,((3U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+91,((4U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+92,((5U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+93,((6U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+94,((7U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+95,((0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                      >> 0x19U))));
        bufp->chgBit(oldp+96,((0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                         >> 0x19U))));
        bufp->chgBit(oldp+97,((IData)((0x63U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+98,((IData)((0x1063U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+99,((IData)((0x4063U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+100,((IData)((0x5063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+101,((IData)((0x6063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+102,((IData)((0x7063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+103,((IData)((3U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+104,((IData)((0x1003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+105,((IData)((0x2003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+106,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
        bufp->chgBit(oldp+107,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
        bufp->chgBit(oldp+108,((IData)((0x23U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+109,((IData)((0x1023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+110,((IData)((0x2023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+111,((IData)((0x13U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+112,((IData)((0x2013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+113,((IData)((0x3013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+114,((IData)((0x4013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+115,((IData)((0x6013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+116,((IData)((0x7013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+117,((IData)((0x1013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+118,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+119,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
        bufp->chgBit(oldp+120,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
        bufp->chgBit(oldp+122,((IData)((0x1033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+123,((IData)((0x2033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+124,((IData)((0x3033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+125,((IData)((0x4033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
        bufp->chgBit(oldp+127,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                & (0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+128,((IData)((0x6033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+129,((IData)((0x7033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
        bufp->chgBit(oldp+131,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
        bufp->chgBit(oldp+132,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
        bufp->chgBit(oldp+134,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
        bufp->chgBit(oldp+135,((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)));
        bufp->chgBit(oldp+136,((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)));
        bufp->chgBit(oldp+137,((0x100073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)));
        bufp->chgBit(oldp+138,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic))))));
        bufp->chgBit(oldp+139,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)))));
        bufp->chgIData(oldp+140,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                   ? (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                               >> 0x14U))
                                   : (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+141,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+142,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+143,((0xfffff000U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic)),32);
        bufp->chgIData(oldp+144,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic) 
                                                 | (0x800U 
                                                    & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__rdata_dpic 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    }
    bufp->chgBit(oldp+177,(vlSelfRef.clk));
    bufp->chgBit(oldp+178,(vlSelfRef.reset));
}

void Vysyx_25050136_SOC___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25050136_SOC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_SOC___024root*>(voidSelf);
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
