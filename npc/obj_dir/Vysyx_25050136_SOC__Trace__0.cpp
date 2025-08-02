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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                                << 1U)),2);
        bufp->chgCData(oldp+1,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i) 
                                 << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                   & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r))))) 
                                           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgQData(oldp+2,(((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awaddr_o)) 
                                << 0x20U)),64);
        bufp->chgCData(oldp+4,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                                << 1U)),2);
        bufp->chgCData(oldp+5,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i) 
                                 << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                   & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r))))) 
                                           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgQData(oldp+6,(((QData)((IData)(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                                  ? 
                                                 vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                 [(0x1fU 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U))]
                                                  : 0U))) 
                                << 0x20U)),64);
        bufp->chgCData(oldp+8,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                  ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o)
                                  : 0U) << 4U)),8);
        bufp->chgCData(oldp+9,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i) 
                                 << 1U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                                           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgCData(oldp+10,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                                 << 1U)),2);
        bufp->chgCData(oldp+11,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i) 
                                  << 2U) | ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                             ? ((0U 
                                                 != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                 ? 
                                                ((5U 
                                                  >= 
                                                  (7U 
                                                   & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U)))
                                                  ? 
                                                 (3U 
                                                  & (0x20U 
                                                     >> 
                                                     (7U 
                                                      & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                                  : 0U)
                                                 : 3U)
                                             : 0U))),4);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_25050136_SOC__DOT__s_arvalid_i),2);
        bufp->chgCData(oldp+13,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i))),2);
        bufp->chgQData(oldp+14,(vlSelfRef.ysyx_25050136_SOC__DOT__s_araddr_i),64);
        bufp->chgCData(oldp+16,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i))),2);
        bufp->chgCData(oldp+17,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))),2);
        bufp->chgQData(oldp+18,((((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rdata_i)))),64);
        bufp->chgCData(oldp+20,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i) 
                                  << 2U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rresp_i))),4);
        bufp->chgCData(oldp+21,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                                                  << 2U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                                 | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid))) 
                                          & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
        bufp->chgCData(oldp+22,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                  << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r)))),3);
        __Vtemp_1[0U] = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                          ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                          : 0U);
        __Vtemp_1[1U] = (IData)((((QData)((IData)((
                                                   (4U 
                                                    & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((2U 
                                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                                : 0U)))));
        __Vtemp_1[2U] = (IData)(((((QData)((IData)(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                     ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((2U 
                                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                                 ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                                 : 0U)))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+23,(__Vtemp_1),96);
        bufp->chgCData(oldp+26,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                                                  << 2U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                                 | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid))) 
                                          & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
        bufp->chgCData(oldp+27,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                  << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r)))),3);
        __Vtemp_2[0U] = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                          ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                          : 0U);
        __Vtemp_2[1U] = (IData)((((QData)((IData)((
                                                   (4U 
                                                    & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((2U 
                                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                                : 0U)))));
        __Vtemp_2[2U] = (IData)(((((QData)((IData)(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                     ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((2U 
                                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                                 ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                                 : 0U)))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+28,(__Vtemp_2),96);
        bufp->chgSData(oldp+31,(((((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                    ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                    : 0U) << 8U) | 
                                 ((((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                     ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                     : 0U) << 4U) | 
                                  ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                    ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                    : 0U)))),12);
        bufp->chgCData(oldp+32,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o) 
                                  << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o)))),3);
        bufp->chgCData(oldp+33,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                                  << 2U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                                 | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready))) 
                                          & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
        bufp->chgCData(oldp+34,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                                  << 2U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                                 | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid))) 
                                          & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
        bufp->chgCData(oldp+35,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r) 
                                  << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_arready_r) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_arready_r)))),3);
        __Vtemp_3[0U] = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                          ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                          : 0U);
        __Vtemp_3[1U] = (IData)((((QData)((IData)((
                                                   (4U 
                                                    & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((2U 
                                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                                : 0U)))));
        __Vtemp_3[2U] = (IData)(((((QData)((IData)(
                                                   ((4U 
                                                     & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                     ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((2U 
                                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                                 ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                                 : 0U)))) 
                                 >> 0x20U));
        bufp->chgWData(oldp+36,(__Vtemp_3),96);
        bufp->chgCData(oldp+39,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o) 
                                  << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o)))),3);
        bufp->chgCData(oldp+40,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                                  << 2U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                                 | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready))) 
                                          & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
        __Vtemp_4[0U] = (IData)((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r)));
        __Vtemp_4[1U] = (IData)(((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r)) 
                                 >> 0x20U));
        __Vtemp_4[2U] = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o)
                          ? ((0xa0000048U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                              ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime)
                              : ((0xa000004cU == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                                  ? (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
                                             >> 0x20U))
                                  : 0U)) : 0U);
        bufp->chgWData(oldp+41,(__Vtemp_4),96);
        bufp->chgBit(oldp+44,((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i));
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgBit(oldp+47,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i));
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r));
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rdata_i),32);
        bufp->chgCData(oldp+50,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rresp_i),2);
        bufp->chgBit(oldp+51,(((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r))))) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
        bufp->chgBit(oldp+52,(((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r))))) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
        bufp->chgBit(oldp+53,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
        bufp->chgCData(oldp+54,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                  ? ((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                      ? ((5U >= (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U)))
                                          ? (3U & (0x20U 
                                                   >> 
                                                   (7U 
                                                    & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                          : 0U) : 3U)
                                  : 0U)),2);
        bufp->chgBit(oldp+55,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o));
        bufp->chgBit(oldp+56,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i));
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awaddr_o),32);
        bufp->chgBit(oldp+58,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i));
        bufp->chgIData(oldp+60,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x14U))]
                                  : 0U)),32);
        bufp->chgCData(oldp+61,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                  ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o)
                                  : 0U)),4);
        bufp->chgBit(oldp+62,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r));
        bufp->chgCData(oldp+64,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i),2);
        bufp->chgBit(oldp+65,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o));
        bufp->chgBit(oldp+66,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i));
        bufp->chgIData(oldp+67,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o)
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                                  : 0U)),32);
        bufp->chgBit(oldp+68,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i));
        bufp->chgBit(oldp+69,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r));
        bufp->chgIData(oldp+70,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i),32);
        bufp->chgCData(oldp+71,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i),2);
        bufp->chgBit(oldp+72,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+73,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r));
        bufp->chgIData(oldp+74,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                  : 0U)),32);
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+76,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r));
        bufp->chgIData(oldp+77,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+78,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                  : 0U)),4);
        bufp->chgBit(oldp+79,(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o));
        bufp->chgBit(oldp+80,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+81,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+82,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_arready_r));
        bufp->chgIData(oldp+83,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                  : 0U)),32);
        bufp->chgBit(oldp+84,(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o));
        bufp->chgBit(oldp+85,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r),32);
        bufp->chgBit(oldp+87,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r));
        bufp->chgIData(oldp+89,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                  : 0U)),32);
        bufp->chgBit(oldp+90,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r));
        bufp->chgIData(oldp+92,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+93,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                  : 0U)),4);
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o));
        bufp->chgBit(oldp+95,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+97,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_arready_r));
        bufp->chgIData(oldp+98,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                  : 0U)),32);
        bufp->chgBit(oldp+99,(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 1U))));
        bufp->chgBit(oldp+101,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r));
        bufp->chgIData(oldp+103,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                   : 0U)),32);
        bufp->chgBit(oldp+104,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+105,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r));
        bufp->chgIData(oldp+106,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                   : 0U)),32);
        bufp->chgCData(oldp+107,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                   : 0U)),4);
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o));
        bufp->chgBit(oldp+109,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+110,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r));
        bufp->chgIData(oldp+112,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                   : 0U)),32);
        bufp->chgBit(oldp+113,(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o));
        bufp->chgBit(oldp+114,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgIData(oldp+115,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o)
                                   ? ((0xa0000048U 
                                       == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                                       ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime)
                                       : ((0xa000004cU 
                                           == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                                           ? (IData)(
                                                     (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
                                                      >> 0x20U))
                                           : 0U)) : 0U)),32);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_araddr_r),32);
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rvalid_r));
        bufp->chgBit(oldp+118,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__ar_fire));
        bufp->chgBit(oldp+119,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                   & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
        bufp->chgCData(oldp+120,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__count_delay),5);
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_bvalid_r));
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awaddr_r),32);
        bufp->chgIData(oldp+123,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wdata_r),32);
        bufp->chgCData(oldp+124,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r),4);
        bufp->chgCData(oldp+125,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__wstatu),2);
        bufp->chgIData(oldp+126,(((((- (IData)((1U 
                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r) 
                                                   >> 3U)))) 
                                    << 0x18U) | (0xff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r) 
                                                                   >> 2U)))) 
                                                    << 0x10U))) 
                                  | ((0xff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                     | (0xffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r)))))))),32);
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__aw_fire));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__w_fire));
        bufp->chgBit(oldp+129,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                   & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid));
        bufp->chgBit(oldp+131,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r)))))));
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr),32);
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid));
        bufp->chgBit(oldp+134,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r)))))));
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata),32);
        bufp->chgCData(oldp+136,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb),4);
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid));
        bufp->chgBit(oldp+138,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready));
        bufp->chgCData(oldp+139,(((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? ((5U >= (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U)))
                                       ? (3U & (0x20U 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                       : 0U) : 3U)),2);
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready));
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr),32);
        bufp->chgBit(oldp+143,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid));
        bufp->chgBit(oldp+144,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready));
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata),32);
        bufp->chgCData(oldp+146,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp),2);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr),32);
        bufp->chgCData(oldp+149,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master),2);
        bufp->chgCData(oldp+150,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id),2);
        bufp->chgCData(oldp+151,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand),2);
        bufp->chgCData(oldp+152,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_id),2);
        bufp->chgCData(oldp+153,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver),3);
        bufp->chgCData(oldp+154,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id),3);
        bufp->chgCData(oldp+155,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand),3);
        bufp->chgCData(oldp+156,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id),3);
        bufp->chgCData(oldp+157,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__request),2);
        bufp->chgQData(oldp+158,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime),64);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r),32);
        bufp->chgBit(oldp+161,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_rvalid_r));
        bufp->chgBit(oldp+162,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__ar_fire));
        bufp->chgBit(oldp+163,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 2U)))));
        bufp->chgCData(oldp+164,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__count_delay),5);
        bufp->chgBit(oldp+165,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_bvalid_r));
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awaddr_r),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wdata_r),32);
        bufp->chgCData(oldp+168,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r),4);
        bufp->chgCData(oldp+169,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__wstatu),2);
        bufp->chgIData(oldp+170,(((((- (IData)((1U 
                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r) 
                                                   >> 3U)))) 
                                    << 0x18U) | (0xff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r) 
                                                                   >> 2U)))) 
                                                    << 0x10U))) 
                                  | ((0xff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                     | (0xffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r)))))))),32);
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__aw_fire));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__w_fire));
        bufp->chgBit(oldp+173,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 2U)))));
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o),32);
        bufp->chgBit(oldp+176,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o));
        bufp->chgCData(oldp+177,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+178,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+179,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 7U))),5);
        bufp->chgBit(oldp+180,((1U & (~ ((0x23U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgCData(oldp+181,(((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                    << 3U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                      << 1U) | (1U 
                                                & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
        bufp->chgSData(oldp+182,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
        bufp->chgCData(oldp+183,((((0x23U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   << 1U) | (3U == 
                                             (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))),2);
        bufp->chgCData(oldp+184,((((0x63U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   << 2U) | (((0x6fU 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                              << 1U) 
                                             | (0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))),3);
        bufp->chgCData(oldp+185,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x14U))]),32);
        bufp->chgIData(oldp+189,(((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                  [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xfU))]
                                   : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
        bufp->chgSData(oldp+192,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+193,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
        bufp->chgBit(oldp+194,((1U & (~ (IData)(((0U 
                                                  == 
                                                  (0xf8000U 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                                 & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                    | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
        bufp->chgBit(oldp+195,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                         & (0U == (0xf80U 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgBit(oldp+196,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o));
        bufp->chgCData(oldp+197,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o),4);
        bufp->chgIData(oldp+198,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+199,(((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? ((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i
                                       : ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                           ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                               : (0xffffU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                           : ((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                               ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                                   : 
                                                  (0xffU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                               : 0U)))
                                   : ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                       : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o))),32);
        bufp->chgIData(oldp+200,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                       ? ((0x67U == 
                                           (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                           ? ((IData)(
                                                      (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                       >> 1U)) 
                                              << 1U)
                                           : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                       : 0U) : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
        bufp->chgBit(oldp+201,(((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                | ((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                      | ((0x6fU == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                            & ((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                               & (0U 
                                                  != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
        bufp->chgBit(oldp+202,(((~ ((0x23U == (0x7fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o))));
        bufp->chgBit(oldp+203,((1U & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
        bufp->chgIData(oldp+204,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
        bufp->chgBit(oldp+205,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgBit(oldp+206,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren));
        bufp->chgBit(oldp+207,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen));
        bufp->chgIData(oldp+208,(((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i
                                   : ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                       ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                           : (0xffffU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                       : ((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                           ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                               : (0xffU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                           : 0U)))),32);
        bufp->chgBit(oldp+209,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                                 & (0U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i))) 
                                | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) 
                                   & (0U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i))))));
        bufp->chgBit(oldp+210,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
        bufp->chgIData(oldp+211,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                       ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                   >> 1U)) 
                                          << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                   : 0U)),32);
        bufp->chgBit(oldp+212,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
        bufp->chgIData(oldp+213,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
        bufp->chgBit(oldp+214,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
        bufp->chgQData(oldp+215,((0x1ffffffffULL & 
                                  (VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                   + VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
        bufp->chgIData(oldp+217,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
        bufp->chgIData(oldp+218,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
        bufp->chgIData(oldp+219,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                                (0x1fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+220,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  << (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+221,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  >> (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+222,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+223,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
        bufp->chgIData(oldp+225,(((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                               >> 1U)) 
                                      << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
        bufp->chgIData(oldp+226,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
        bufp->chgIData(oldp+227,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
        bufp->chgSData(oldp+228,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
        bufp->chgSData(oldp+229,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
        bufp->chgSData(oldp+230,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
        bufp->chgBit(oldp+231,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        bufp->chgBit(oldp+232,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
        bufp->chgBit(oldp+233,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
        bufp->chgIData(oldp+234,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
        bufp->chgIData(oldp+235,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
        bufp->chgCData(oldp+238,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
        bufp->chgCData(oldp+239,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
        bufp->chgCData(oldp+240,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
        bufp->chgCData(oldp+241,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
        bufp->chgIData(oldp+242,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+243,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+244,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+245,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgBit(oldp+246,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r));
        bufp->chgBit(oldp+247,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i))));
        bufp->chgBit(oldp+248,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire));
        bufp->chgBit(oldp+249,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_awvalid_r));
        bufp->chgBit(oldp+250,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_wvalid_r));
        bufp->chgBit(oldp+251,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i))));
        bufp->chgBit(oldp+252,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i))));
        bufp->chgBit(oldp+253,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire));
        bufp->chgCData(oldp+254,((0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),7);
        bufp->chgCData(oldp+255,((7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+256,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+257,((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+258,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+259,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+260,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+261,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+262,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+263,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+264,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+265,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+266,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+267,((0U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+268,((1U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+269,((2U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+270,((3U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+271,((4U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+272,((5U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+273,((6U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+274,((7U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+275,((0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U))));
        bufp->chgBit(oldp+276,((0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U))));
        bufp->chgBit(oldp+277,((IData)((0x63U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+278,((IData)((0x1063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+279,((IData)((0x4063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+280,((IData)((0x5063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+281,((IData)((0x6063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+282,((IData)((0x7063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+283,((IData)((3U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+284,((IData)((0x1003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+285,((IData)((0x2003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+286,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
        bufp->chgBit(oldp+287,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
        bufp->chgBit(oldp+288,((IData)((0x23U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+289,((IData)((0x1023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+290,((IData)((0x2023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+291,((IData)((0x13U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+292,((IData)((0x2013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+293,((IData)((0x3013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+294,((IData)((0x4013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+295,((IData)((0x6013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+296,((IData)((0x7013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+297,((IData)((0x1013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+298,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+299,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
        bufp->chgBit(oldp+300,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+301,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
        bufp->chgBit(oldp+302,((IData)((0x1033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+303,((IData)((0x2033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+304,((IData)((0x3033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+305,((IData)((0x4033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+306,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
        bufp->chgBit(oldp+307,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                & (0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+308,((IData)((0x6033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+309,((IData)((0x7033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+310,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
        bufp->chgBit(oldp+311,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
        bufp->chgBit(oldp+312,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
        bufp->chgBit(oldp+313,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
        bufp->chgBit(oldp+314,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
        bufp->chgBit(oldp+315,((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+316,((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+317,((0x100073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+318,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))));
        bufp->chgBit(oldp+319,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgIData(oldp+320,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                   ? (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x14U))
                                   : (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+321,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+322,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+323,((0xfffff000U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),32);
        bufp->chgIData(oldp+324,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                                 | (0x800U 
                                                    & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+325,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r),32);
        bufp->chgBit(oldp+326,(((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i))));
        bufp->chgBit(oldp+327,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire));
        bufp->chgCData(oldp+328,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read),2);
        bufp->chgIData(oldp+329,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+330,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+331,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+332,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+333,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+334,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+338,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+339,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+340,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+341,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+342,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+343,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+344,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+345,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+346,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+347,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+348,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+349,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+350,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+351,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+352,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+353,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+354,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+355,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+356,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+357,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+358,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+359,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+360,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
        bufp->chgIData(oldp+361,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_araddr_r),32);
        bufp->chgBit(oldp+362,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_rvalid_r));
        bufp->chgBit(oldp+363,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__ar_fire));
        bufp->chgBit(oldp+364,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U)))));
        bufp->chgCData(oldp+365,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__count_delay),5);
        bufp->chgBit(oldp+366,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_bvalid_r));
        bufp->chgIData(oldp+367,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awaddr_r),32);
        bufp->chgIData(oldp+368,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wdata_r),32);
        bufp->chgCData(oldp+369,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r),4);
        bufp->chgCData(oldp+370,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__wstatu),2);
        bufp->chgIData(oldp+371,(((((- (IData)((1U 
                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r) 
                                                   >> 3U)))) 
                                    << 0x18U) | (0xff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r) 
                                                                   >> 2U)))) 
                                                    << 0x10U))) 
                                  | ((0xff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                     | (0xffU & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r)))))))),32);
        bufp->chgBit(oldp+372,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__aw_fire));
        bufp->chgBit(oldp+373,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__w_fire));
        bufp->chgBit(oldp+374,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U)))));
    }
    bufp->chgBit(oldp+375,(vlSelfRef.clk));
    bufp->chgBit(oldp+376,(vlSelfRef.reset));
    bufp->chgBit(oldp+377,((1U & (~ (IData)(vlSelfRef.reset)))));
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
