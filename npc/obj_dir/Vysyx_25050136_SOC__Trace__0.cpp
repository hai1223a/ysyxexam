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
        bufp->chgCData(oldp+1,(((((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                          & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r))))) 
                                  & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                     >> 1U)) << 1U) 
                                | ((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                           & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r))))) 
                                   & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgQData(oldp+2,(((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                << 0x20U)),64);
        bufp->chgCData(oldp+4,((((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en)) 
                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write)) 
                                << 1U)),2);
        bufp->chgCData(oldp+5,(((((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                          & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                              << 2U) 
                                             | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r))))) 
                                  & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                     >> 1U)) << 1U) 
                                | ((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                           & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r))))) 
                                   & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgQData(oldp+6,(((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                [(0x1fU 
                                                  & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                     >> 0x14U))])) 
                                << 0x20U)),64);
        bufp->chgCData(oldp+8,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                << 4U)),8);
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
        bufp->chgBit(oldp+56,(((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r))))) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                  >> 1U))));
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
        bufp->chgBit(oldp+58,(((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en)) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write))));
        bufp->chgBit(oldp+59,(((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r))))) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                  >> 1U))));
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0x14U))]),32);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o),4);
        bufp->chgBit(oldp+62,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r));
        bufp->chgCData(oldp+64,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i),2);
        bufp->chgBit(oldp+65,((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read))));
        bufp->chgBit(oldp+66,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i));
        bufp->chgBit(oldp+67,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i));
        bufp->chgBit(oldp+68,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r));
        bufp->chgIData(oldp+69,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i),32);
        bufp->chgCData(oldp+70,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i),2);
        bufp->chgBit(oldp+71,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+72,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r));
        bufp->chgIData(oldp+73,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                  : 0U)),32);
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+75,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r));
        bufp->chgIData(oldp+76,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+77,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                  : 0U)),4);
        bufp->chgBit(oldp+78,(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o));
        bufp->chgBit(oldp+79,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+80,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_arready_r));
        bufp->chgIData(oldp+82,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                  : 0U)),32);
        bufp->chgBit(oldp+83,(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o));
        bufp->chgBit(oldp+84,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                               & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgIData(oldp+85,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r),32);
        bufp->chgBit(oldp+86,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r));
        bufp->chgIData(oldp+88,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                  : 0U)),32);
        bufp->chgBit(oldp+89,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r));
        bufp->chgIData(oldp+91,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                  : 0U)),32);
        bufp->chgCData(oldp+92,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                  : 0U)),4);
        bufp->chgBit(oldp+93,(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o));
        bufp->chgBit(oldp+94,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+95,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+96,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_arready_r));
        bufp->chgIData(oldp+97,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                  : 0U)),32);
        bufp->chgBit(oldp+98,(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o));
        bufp->chgBit(oldp+99,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                               & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U))));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r));
        bufp->chgIData(oldp+102,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                   : 0U)),32);
        bufp->chgBit(oldp+103,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r));
        bufp->chgIData(oldp+105,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                   : 0U)),32);
        bufp->chgCData(oldp+106,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                   : 0U)),4);
        bufp->chgBit(oldp+107,(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o));
        bufp->chgBit(oldp+108,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+109,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r));
        bufp->chgIData(oldp+111,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                   : 0U)),32);
        bufp->chgBit(oldp+112,(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o));
        bufp->chgBit(oldp+113,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U))));
        bufp->chgIData(oldp+114,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o)
                                   ? ((0xa0000048U 
                                       == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                                       ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime)
                                       : ((0xa000004cU 
                                           == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                                           ? (IData)(
                                                     (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
                                                      >> 0x20U))
                                           : 0U)) : 0U)),32);
        bufp->chgIData(oldp+115,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_araddr_r),32);
        bufp->chgBit(oldp+116,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rvalid_r));
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__ar_fire));
        bufp->chgBit(oldp+118,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                   & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
        bufp->chgCData(oldp+119,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__count_delay),5);
        bufp->chgBit(oldp+120,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_bvalid_r));
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awaddr_r),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wdata_r),32);
        bufp->chgCData(oldp+123,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r),4);
        bufp->chgCData(oldp+124,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__wstatu),2);
        bufp->chgIData(oldp+125,(((((- (IData)((1U 
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
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__aw_fire));
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__w_fire));
        bufp->chgBit(oldp+128,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                   & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid));
        bufp->chgBit(oldp+130,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r)))))));
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr),32);
        bufp->chgBit(oldp+132,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid));
        bufp->chgBit(oldp+133,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                       & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r)))))));
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata),32);
        bufp->chgCData(oldp+135,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb),4);
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready));
        bufp->chgCData(oldp+138,(((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? ((5U >= (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U)))
                                       ? (3U & (0x20U 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                       : 0U) : 3U)),2);
        bufp->chgBit(oldp+139,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid));
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready));
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr),32);
        bufp->chgBit(oldp+142,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid));
        bufp->chgBit(oldp+143,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready));
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata),32);
        bufp->chgCData(oldp+145,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp),2);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr),32);
        bufp->chgCData(oldp+148,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master),2);
        bufp->chgCData(oldp+149,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id),2);
        bufp->chgCData(oldp+150,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand),2);
        bufp->chgCData(oldp+151,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_id),2);
        bufp->chgCData(oldp+152,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver),3);
        bufp->chgCData(oldp+153,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id),3);
        bufp->chgCData(oldp+154,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand),3);
        bufp->chgCData(oldp+155,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id),3);
        bufp->chgCData(oldp+156,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__request),2);
        bufp->chgQData(oldp+157,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime),64);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r),32);
        bufp->chgBit(oldp+160,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_rvalid_r));
        bufp->chgBit(oldp+161,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__ar_fire));
        bufp->chgBit(oldp+162,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 2U)))));
        bufp->chgCData(oldp+163,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__count_delay),5);
        bufp->chgBit(oldp+164,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_bvalid_r));
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awaddr_r),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wdata_r),32);
        bufp->chgCData(oldp+167,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r),4);
        bufp->chgCData(oldp+168,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__wstatu),2);
        bufp->chgIData(oldp+169,(((((- (IData)((1U 
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
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__aw_fire));
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__w_fire));
        bufp->chgBit(oldp+172,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 2U)))));
        bufp->chgIData(oldp+173,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o),32);
        bufp->chgBit(oldp+175,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o));
        bufp->chgCData(oldp+176,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+177,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+178,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 7U))),5);
        bufp->chgBit(oldp+179,((1U & (~ ((0x23U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgCData(oldp+180,(((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                    << 3U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                      << 1U) | (1U 
                                                & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
        bufp->chgSData(oldp+181,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
        bufp->chgCData(oldp+182,((((0x23U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   << 1U) | (3U == 
                                             (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))),2);
        bufp->chgCData(oldp+183,((((0x63U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   << 2U) | (((0x6fU 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                              << 1U) 
                                             | (0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))),3);
        bufp->chgCData(oldp+184,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
        bufp->chgIData(oldp+187,(((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                  [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xfU))]
                                   : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
        bufp->chgSData(oldp+190,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+191,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
        bufp->chgBit(oldp+192,((1U & (~ (IData)(((0U 
                                                  == 
                                                  (0xf8000U 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                                 & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                    | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
        bufp->chgBit(oldp+193,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                         & (0U == (0xf80U 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgBit(oldp+194,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o));
        bufp->chgIData(oldp+195,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+196,(((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
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
        bufp->chgIData(oldp+197,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                       ? ((0x67U == 
                                           (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                           ? ((IData)(
                                                      (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                       >> 1U)) 
                                              << 1U)
                                           : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                       : 0U) : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
        bufp->chgBit(oldp+198,(((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                | ((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                      | ((0x6fU == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                            & ((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                               & (0U 
                                                  != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
        bufp->chgBit(oldp+199,(((~ ((0x23U == (0x7fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o))));
        bufp->chgBit(oldp+200,((1U & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
        bufp->chgBit(oldp+201,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                & (3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+203,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                & (0x23U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgIData(oldp+204,(((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
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
        bufp->chgBit(oldp+205,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                                 & (0U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i))) 
                                | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                                    & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i)) 
                                   & (0U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i))))));
        bufp->chgBit(oldp+206,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
        bufp->chgIData(oldp+207,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                       ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                   >> 1U)) 
                                          << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                   : 0U)),32);
        bufp->chgBit(oldp+208,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
        bufp->chgIData(oldp+209,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
        bufp->chgBit(oldp+210,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
        bufp->chgQData(oldp+211,((0x1ffffffffULL & 
                                  (VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                   + VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
        bufp->chgIData(oldp+213,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
        bufp->chgIData(oldp+214,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
        bufp->chgIData(oldp+215,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                                (0x1fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+216,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  << (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+217,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  >> (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+218,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+219,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
        bufp->chgIData(oldp+221,(((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                               >> 1U)) 
                                      << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
        bufp->chgIData(oldp+222,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
        bufp->chgIData(oldp+223,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
        bufp->chgSData(oldp+224,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
        bufp->chgSData(oldp+225,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
        bufp->chgSData(oldp+226,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
        bufp->chgBit(oldp+227,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        bufp->chgBit(oldp+228,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
        bufp->chgBit(oldp+229,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
        bufp->chgIData(oldp+230,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
        bufp->chgIData(oldp+231,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
        bufp->chgIData(oldp+232,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
        bufp->chgIData(oldp+233,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
        bufp->chgCData(oldp+234,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
        bufp->chgCData(oldp+235,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
        bufp->chgCData(oldp+236,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
        bufp->chgCData(oldp+237,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
        bufp->chgIData(oldp+238,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+239,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+240,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+241,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgBit(oldp+242,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r));
        bufp->chgCData(oldp+243,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read),2);
        bufp->chgBit(oldp+244,(((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read)) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i))));
        bufp->chgBit(oldp+245,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire));
        bufp->chgBit(oldp+246,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en));
        bufp->chgBit(oldp+247,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en));
        bufp->chgBit(oldp+248,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write));
        bufp->chgBit(oldp+249,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i))));
        bufp->chgCData(oldp+250,((0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),7);
        bufp->chgCData(oldp+251,((7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+252,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+253,((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+254,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+255,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+256,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+257,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+258,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+259,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+260,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+261,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+262,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+263,((0U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+264,((1U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+265,((2U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+266,((3U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+267,((4U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+268,((5U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+269,((6U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+270,((7U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+271,((0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U))));
        bufp->chgBit(oldp+272,((0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U))));
        bufp->chgBit(oldp+273,((IData)((0x63U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+274,((IData)((0x1063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+275,((IData)((0x4063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+276,((IData)((0x5063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+277,((IData)((0x6063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+278,((IData)((0x7063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+279,((IData)((3U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+280,((IData)((0x1003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+281,((IData)((0x2003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+282,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
        bufp->chgBit(oldp+283,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
        bufp->chgBit(oldp+284,((IData)((0x23U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+285,((IData)((0x1023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+286,((IData)((0x2023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+287,((IData)((0x13U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+288,((IData)((0x2013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+289,((IData)((0x3013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+290,((IData)((0x4013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+291,((IData)((0x6013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+292,((IData)((0x7013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+293,((IData)((0x1013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+294,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+295,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
        bufp->chgBit(oldp+296,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+297,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
        bufp->chgBit(oldp+298,((IData)((0x1033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+299,((IData)((0x2033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+300,((IData)((0x3033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+301,((IData)((0x4033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+302,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
        bufp->chgBit(oldp+303,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                & (0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+304,((IData)((0x6033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+305,((IData)((0x7033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+306,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
        bufp->chgBit(oldp+307,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
        bufp->chgBit(oldp+308,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
        bufp->chgBit(oldp+309,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
        bufp->chgBit(oldp+310,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
        bufp->chgBit(oldp+311,((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+312,((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+313,((0x100073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+314,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))));
        bufp->chgBit(oldp+315,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgIData(oldp+316,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                   ? (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x14U))
                                   : (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+317,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+318,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
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
        bufp->chgIData(oldp+319,((0xfffff000U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),32);
        bufp->chgIData(oldp+320,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                                 | (0x800U 
                                                    & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+321,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r),32);
        bufp->chgBit(oldp+322,(((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i))));
        bufp->chgBit(oldp+323,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire));
        bufp->chgCData(oldp+324,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read),2);
        bufp->chgIData(oldp+325,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+326,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+327,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+328,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+329,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+330,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+331,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+332,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+333,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+334,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+338,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+339,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+340,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+341,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+342,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+343,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+344,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+345,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+346,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+347,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+348,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+349,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+350,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+351,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+352,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+353,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+354,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+355,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+356,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
        bufp->chgIData(oldp+357,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_araddr_r),32);
        bufp->chgBit(oldp+358,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_rvalid_r));
        bufp->chgBit(oldp+359,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__ar_fire));
        bufp->chgBit(oldp+360,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U)))));
        bufp->chgCData(oldp+361,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__count_delay),5);
        bufp->chgBit(oldp+362,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_bvalid_r));
        bufp->chgIData(oldp+363,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awaddr_r),32);
        bufp->chgIData(oldp+364,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wdata_r),32);
        bufp->chgCData(oldp+365,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r),4);
        bufp->chgCData(oldp+366,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__wstatu),2);
        bufp->chgIData(oldp+367,(((((- (IData)((1U 
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
        bufp->chgBit(oldp+368,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__aw_fire));
        bufp->chgBit(oldp+369,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__w_fire));
        bufp->chgBit(oldp+370,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                   & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U)))));
    }
    bufp->chgBit(oldp+371,(vlSelfRef.clk));
    bufp->chgBit(oldp+372,(vlSelfRef.reset));
    bufp->chgBit(oldp+373,((1U & (~ (IData)(vlSelfRef.reset)))));
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
