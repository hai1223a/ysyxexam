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
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r));
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i));
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r));
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rdata_i),32);
        bufp->chgBit(oldp+6,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r) 
                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
        bufp->chgBit(oldp+7,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r) 
                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
        bufp->chgBit(oldp+8,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__m_bvalid_i) 
                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
        bufp->chgBit(oldp+9,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o));
        bufp->chgBit(oldp+10,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i));
        bufp->chgIData(oldp+11,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                                  : 0U)),32);
        bufp->chgBit(oldp+12,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o));
        bufp->chgBit(oldp+13,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i));
        bufp->chgIData(oldp+14,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x14U))]
                                  : 0U)),32);
        bufp->chgCData(oldp+15,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                  ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o)
                                  : 0U)),4);
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r));
        bufp->chgBit(oldp+18,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o));
        bufp->chgBit(oldp+19,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i));
        bufp->chgIData(oldp+20,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o)
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                                  : 0U)),32);
        bufp->chgBit(oldp+21,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i));
        bufp->chgBit(oldp+22,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r));
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i),32);
        bufp->chgCData(oldp+24,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                                 << 1U)),2);
        bufp->chgCData(oldp+25,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i) 
                                  << 1U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r) 
                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgQData(oldp+26,(((QData)((IData)(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                                                   : 0U))) 
                                 << 0x20U)),64);
        bufp->chgCData(oldp+28,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                                 << 1U)),2);
        bufp->chgCData(oldp+29,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i) 
                                  << 1U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r) 
                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgQData(oldp+30,(((QData)((IData)(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                                   ? 
                                                  vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                  [
                                                  (0x1fU 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U))]
                                                   : 0U))) 
                                 << 0x20U)),64);
        bufp->chgCData(oldp+32,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                   ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o)
                                   : 0U) << 4U)),8);
        bufp->chgCData(oldp+33,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i) 
                                  << 1U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__m_bvalid_i) 
                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgCData(oldp+34,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                                 << 1U)),2);
        bufp->chgCData(oldp+35,(vlSelfRef.ysyx_25050136_SOC__DOT__s_arvalid_i),2);
        bufp->chgCData(oldp+36,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i))),2);
        bufp->chgQData(oldp+37,((((QData)((IData)(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o)
                                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                                                    : 0U))) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)))),64);
        bufp->chgCData(oldp+39,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i))),2);
        bufp->chgCData(oldp+40,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))),2);
        bufp->chgQData(oldp+41,((((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rdata_i)))),64);
        bufp->chgBit(oldp+43,(vlSelfRef.ysyx_25050136_SOC__DOT__m_awvalid_o));
        bufp->chgBit(oldp+44,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r));
        bufp->chgIData(oldp+45,((IData)((((QData)((IData)(
                                                          ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                                            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                                                            : 0U))) 
                                          << 0x20U) 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_id), 5U))))),32);
        bufp->chgBit(oldp+46,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                      & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                                         << 1U)))));
        bufp->chgBit(oldp+47,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r));
        bufp->chgIData(oldp+48,((IData)((((QData)((IData)(
                                                          ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                                            ? 
                                                           vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                           [
                                                           (0x1fU 
                                                            & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                               >> 0x14U))]
                                                            : 0U))) 
                                          << 0x20U) 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_id), 5U))))),32);
        bufp->chgCData(oldp+49,((0xfU & ((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                            ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o)
                                            : 0U) << 4U) 
                                         >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_id), 2U))))),4);
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_25050136_SOC__DOT__m_bvalid_i));
        bufp->chgBit(oldp+51,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                      & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                                         << 1U)))));
        bufp->chgBit(oldp+52,(vlSelfRef.ysyx_25050136_SOC__DOT__m_arvalid_o));
        bufp->chgBit(oldp+53,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_arready_r));
        bufp->chgIData(oldp+54,((IData)(((((QData)((IData)(
                                                           ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o)
                                                             ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc))) 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_id), 5U))))),32);
        bufp->chgBit(oldp+55,(vlSelfRef.ysyx_25050136_SOC__DOT__m_rvalid_i));
        bufp->chgBit(oldp+56,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                      & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                                          << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))))));
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r),32);
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_araddr_r),32);
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rvalid_r));
        bufp->chgBit(oldp+60,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__ar_fire));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__m_rvalid_i) 
                               & (0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                         & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r)))))));
        bufp->chgCData(oldp+62,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__count_delay),5);
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_bvalid_r));
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awaddr_r),32);
        bufp->chgIData(oldp+65,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wdata_r),32);
        bufp->chgCData(oldp+66,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r),4);
        bufp->chgCData(oldp+67,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__wstatu),2);
        bufp->chgIData(oldp+68,(((((- (IData)((1U & 
                                               ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r) 
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
        bufp->chgBit(oldp+69,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__aw_fire));
        bufp->chgBit(oldp+70,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__w_fire));
        bufp->chgBit(oldp+71,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__m_bvalid_i) 
                               & (0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                         & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                                            << 1U))))));
        bufp->chgCData(oldp+72,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master),2);
        bufp->chgCData(oldp+73,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_id),2);
        bufp->chgCData(oldp+74,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand),2);
        bufp->chgCData(oldp+75,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_id),2);
        bufp->chgCData(oldp+76,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__s_arvalid_i) 
                                 | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                                    << 1U))),2);
        bufp->chgIData(oldp+77,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o),32);
        bufp->chgIData(oldp+79,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o),32);
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire));
        bufp->chgCData(oldp+81,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+82,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+83,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 7U))),5);
        bufp->chgBit(oldp+84,((1U & (~ ((0x23U == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                        | (0x63U == 
                                           (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgCData(oldp+85,(((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                   << 3U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                     << 1U) | (1U & 
                                               (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
        bufp->chgSData(oldp+86,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
        bufp->chgCData(oldp+87,((((0x23U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                  << 1U) | (3U == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))),2);
        bufp->chgCData(oldp+88,((((0x63U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                  << 2U) | (((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                             << 1U) 
                                            | (0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))),3);
        bufp->chgCData(oldp+89,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+93,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                  ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0xfU))]
                                  : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
        bufp->chgSData(oldp+96,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+97,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
        bufp->chgBit(oldp+98,((1U & (~ (IData)(((0U 
                                                 == 
                                                 (0xf8000U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                   | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
        bufp->chgBit(oldp+99,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                        & (0U == (0xf80U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o));
        bufp->chgCData(oldp+101,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o),4);
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+103,(((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
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
        bufp->chgIData(oldp+104,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                       ? ((0x67U == 
                                           (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                           ? ((IData)(
                                                      (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                       >> 1U)) 
                                              << 1U)
                                           : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                       : 0U) : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
        bufp->chgBit(oldp+105,(((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                | ((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                   | ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                      | ((0x6fU == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                            & ((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                               & (0U 
                                                  != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
        bufp->chgBit(oldp+106,(((~ ((0x23U == (0x7fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o))));
        bufp->chgBit(oldp+107,((1U & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
        bufp->chgIData(oldp+108,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen));
        bufp->chgIData(oldp+112,(((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
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
        bufp->chgBit(oldp+113,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                                | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire))));
        bufp->chgBit(oldp+114,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
        bufp->chgIData(oldp+115,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                       ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                   >> 1U)) 
                                          << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                   : 0U)),32);
        bufp->chgBit(oldp+116,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
        bufp->chgIData(oldp+117,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
        bufp->chgBit(oldp+118,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
        bufp->chgQData(oldp+119,((0x1ffffffffULL & 
                                  (VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                   + VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
        bufp->chgIData(oldp+123,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                                (0x1fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+124,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  << (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+125,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  >> (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+126,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+127,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
        bufp->chgIData(oldp+129,(((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                               >> 1U)) 
                                      << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
        bufp->chgSData(oldp+132,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
        bufp->chgSData(oldp+133,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
        bufp->chgSData(oldp+134,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
        bufp->chgBit(oldp+135,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
        bufp->chgCData(oldp+142,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
        bufp->chgCData(oldp+143,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
        bufp->chgCData(oldp+144,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
        bufp->chgCData(oldp+145,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
        bufp->chgIData(oldp+146,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+147,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+148,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+149,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                   ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                       ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r));
        bufp->chgBit(oldp+151,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i))));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_awvalid_r));
        bufp->chgBit(oldp+154,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_wvalid_r));
        bufp->chgBit(oldp+155,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i))));
        bufp->chgBit(oldp+156,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i))));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire));
        bufp->chgCData(oldp+158,((0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),7);
        bufp->chgCData(oldp+159,((7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+160,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+161,((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+162,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+163,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+164,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+165,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+166,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+167,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+168,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+169,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+170,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+171,((0U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+172,((1U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+173,((2U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+174,((3U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+175,((4U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+176,((5U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+177,((6U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+178,((7U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+179,((0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U))));
        bufp->chgBit(oldp+180,((0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U))));
        bufp->chgBit(oldp+181,((IData)((0x63U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+182,((IData)((0x1063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+183,((IData)((0x4063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+184,((IData)((0x5063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+185,((IData)((0x6063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+186,((IData)((0x7063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+187,((IData)((3U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+188,((IData)((0x1003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+189,((IData)((0x2003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+190,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
        bufp->chgBit(oldp+191,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
        bufp->chgBit(oldp+192,((IData)((0x23U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+193,((IData)((0x1023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+194,((IData)((0x2023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+195,((IData)((0x13U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+196,((IData)((0x2013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+197,((IData)((0x3013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+198,((IData)((0x4013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+199,((IData)((0x6013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+200,((IData)((0x7013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+201,((IData)((0x1013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+203,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
        bufp->chgBit(oldp+204,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+205,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
        bufp->chgBit(oldp+206,((IData)((0x1033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+207,((IData)((0x2033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+208,((IData)((0x3033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+209,((IData)((0x4033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+210,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
        bufp->chgBit(oldp+211,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                & (0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+212,((IData)((0x6033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+213,((IData)((0x7033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+214,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
        bufp->chgBit(oldp+215,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
        bufp->chgBit(oldp+218,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
        bufp->chgBit(oldp+219,((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+220,((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+221,((0x100073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+222,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))));
        bufp->chgBit(oldp+223,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgIData(oldp+224,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                   ? (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x14U))
                                   : (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+225,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+226,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
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
        bufp->chgIData(oldp+227,((0xfffff000U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),32);
        bufp->chgIData(oldp+228,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                                 | (0x800U 
                                                    & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+229,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r),32);
        bufp->chgBit(oldp+230,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r))));
        bufp->chgIData(oldp+231,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    }
    bufp->chgBit(oldp+263,(vlSelfRef.clk));
    bufp->chgBit(oldp+264,(vlSelfRef.reset));
    bufp->chgBit(oldp+265,((1U & (~ (IData)(vlSelfRef.reset)))));
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
