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
        bufp->chgCData(oldp+0,((1U | (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                       << 2U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                                 << 1U)))),3);
        bufp->chgCData(oldp+1,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o),2);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o),32);
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o),32);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o),32);
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+9,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+11,(((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
    }
    bufp->chgBit(oldp+29,(vlSelfRef.clk));
    bufp->chgBit(oldp+30,(vlSelfRef.reset));
    bufp->chgIData(oldp+31,(vlSelfRef.inst_i),32);
    bufp->chgIData(oldp+32,(vlSelfRef.mem_rdata_i),32);
    bufp->chgIData(oldp+33,(vlSelfRef.mem_wdata_o),32);
    bufp->chgIData(oldp+34,(vlSelfRef.mem_addr_o),32);
    bufp->chgBit(oldp+35,(vlSelfRef.mem_ren_o));
    bufp->chgBit(oldp+36,(vlSelfRef.mem_wen_o));
    bufp->chgCData(oldp+37,(vlSelfRef.mem_len_o),3);
    bufp->chgIData(oldp+38,(vlSelfRef.pc_o),32);
    bufp->chgCData(oldp+39,((0xfU & (vlSelfRef.inst_i 
                                     >> 0xfU))),4);
    bufp->chgCData(oldp+40,((0xfU & (vlSelfRef.inst_i 
                                     >> 0x14U))),4);
    bufp->chgCData(oldp+41,((0xfU & (vlSelfRef.inst_i 
                                     >> 7U))),4);
    bufp->chgBit(oldp+42,((1U & (~ ((0x23U == (0x7fU 
                                               & vlSelfRef.inst_i)) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelfRef.inst_i)))))));
    bufp->chgCData(oldp+43,((((0x23U == (0x7fU & vlSelfRef.inst_i)) 
                              << 1U) | (3U == (0x7fU 
                                               & vlSelfRef.inst_i)))),2);
    bufp->chgCData(oldp+44,((((0x63U == (0x7fU & vlSelfRef.inst_i)) 
                              << 2U) | (((0x6fU == 
                                          (0x7fU & vlSelfRef.inst_i)) 
                                         << 1U) | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.inst_i))))),3);
    bufp->chgIData(oldp+45,((((0x33U == (0x7fU & vlSelfRef.inst_i)) 
                              | (0x63U == (0x7fU & vlSelfRef.inst_i)))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                              : (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelfRef.inst_i)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelfRef.inst_i))))
                                  ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                                  : 0U))),32);
    bufp->chgIData(oldp+46,(((0x67U == (0x7fU & vlSelfRef.inst_i))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o
                              : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->chgIData(oldp+47,(((3U == (0x7fU & vlSelfRef.inst_i))
                              ? ((4U == (IData)(vlSelfRef.mem_len_o))
                                  ? vlSelfRef.mem_rdata_i
                                  : ((2U == (IData)(vlSelfRef.mem_len_o))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.mem_rdata_i 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelfRef.mem_rdata_i))
                                      : ((1U == (IData)(vlSelfRef.mem_len_o))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.mem_rdata_i 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelfRef.mem_rdata_i))
                                          : 0U))) : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)),32);
    bufp->chgIData(oldp+48,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                              ? ((0x67U == (0x7fU & vlSelfRef.inst_i))
                                  ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                              >> 1U)) 
                                     << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                              : 0U)),32);
    bufp->chgBit(oldp+49,(((0x67U == (0x7fU & vlSelfRef.inst_i)) 
                           | ((0x6fU == (0x7fU & vlSelfRef.inst_i)) 
                              | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                 & (0U != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out))))));
    bufp->chgIData(oldp+50,(((4U == (IData)(vlSelfRef.mem_len_o))
                              ? vlSelfRef.mem_rdata_i
                              : ((2U == (IData)(vlSelfRef.mem_len_o))
                                  ? (((- (IData)((1U 
                                                  & (vlSelfRef.mem_rdata_i 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelfRef.mem_rdata_i))
                                  : ((1U == (IData)(vlSelfRef.mem_len_o))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.mem_rdata_i 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         (0xffU & vlSelfRef.mem_rdata_i))
                                      : 0U)))),32);
    bufp->chgQData(oldp+51,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o)) 
                                               + (QData)((IData)(
                                                                 (((0x33U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.inst_i)) 
                                                                   | (0x63U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelfRef.inst_i)))
                                                                   ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                                                                   : 
                                                                  (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                                                    | ((0x13U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.inst_i)) 
                                                                       | (0x17U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.inst_i))))
                                                                    ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                                                                    : 0U))))))),33);
    bufp->chgIData(oldp+53,(((0x67U == (0x7fU & vlSelfRef.inst_i))
                              ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                          >> 1U)) << 1U)
                              : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
    bufp->chgCData(oldp+54,((0x7fU & vlSelfRef.inst_i)),7);
    bufp->chgCData(oldp+55,((0x1fU & (vlSelfRef.inst_i 
                                      >> 7U))),5);
    bufp->chgCData(oldp+56,((0x1fU & (vlSelfRef.inst_i 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+57,((0x1fU & (vlSelfRef.inst_i 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+58,((7U & (vlSelfRef.inst_i 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+59,((vlSelfRef.inst_i >> 0x19U)),7);
    bufp->chgBit(oldp+60,((3U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+61,((0x13U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+62,((0x17U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+63,((0x23U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+64,((0x33U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+65,((0x37U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+66,((0x63U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+67,((0x67U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+68,((0x6fU == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+69,((0U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+70,((1U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+71,((2U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+72,((3U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+73,((4U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+74,((5U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+75,((6U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+76,((7U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+77,((0U == (vlSelfRef.inst_i 
                                  >> 0x19U))));
    bufp->chgBit(oldp+78,((0x20U == (vlSelfRef.inst_i 
                                     >> 0x19U))));
    bufp->chgBit(oldp+79,((IData)((0x13U == (0x707fU 
                                             & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+80,((IData)((0x2023U == (0x707fU 
                                               & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+81,((0x100073U == vlSelfRef.inst_i)));
    bufp->chgBit(oldp+82,(((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                           | ((3U == (0x7fU & vlSelfRef.inst_i)) 
                              | (0x67U == (0x7fU & vlSelfRef.inst_i))))));
    bufp->chgBit(oldp+83,(((0x17U == (0x7fU & vlSelfRef.inst_i)) 
                           | (0x37U == (0x7fU & vlSelfRef.inst_i)))));
    bufp->chgIData(oldp+84,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelfRef.inst_i 
                                          >> 0x14U))),32);
    bufp->chgIData(oldp+85,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelfRef.inst_i 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelfRef.inst_i 
                                                >> 7U))))),32);
    bufp->chgIData(oldp+86,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0x800U & 
                                           (vlSelfRef.inst_i 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelfRef.inst_i 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelfRef.inst_i 
                                                   >> 7U)))))),32);
    bufp->chgIData(oldp+87,((0xfffff000U & vlSelfRef.inst_i)),32);
    bufp->chgIData(oldp+88,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0x14U) | (((0xff000U 
                                             & vlSelfRef.inst_i) 
                                            | (0x800U 
                                               & (vlSelfRef.inst_i 
                                                  >> 9U))) 
                                           | (0x7feU 
                                              & (vlSelfRef.inst_i 
                                                 >> 0x14U))))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
