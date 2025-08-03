// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136__Syms.h"


void Vysyx_25050136___024root__trace_chg_0_sub_0(Vysyx_25050136___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25050136___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25050136___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136___024root*>(voidSelf);
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25050136___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25050136___024root__trace_chg_0_sub_0(Vysyx_25050136___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i) 
                                 << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                                           & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
        bufp->chgCData(oldp+1,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i) 
                                 << 2U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rresp_i))),4);
        bufp->chgCData(oldp+2,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rlast_i) 
                                 << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rlast_i))),2);
        bufp->chgCData(oldp+3,(vlSelfRef.ysyx_25050136__DOT__inst_rresp_i),2);
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_25050136__DOT__inst_rlast_i));
        bufp->chgBit(oldp+5,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                              & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_25050136__DOT__mem_awready_i));
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_25050136__DOT__mem_wready_i));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i));
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i),2);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i),2);
        bufp->chgBit(oldp+11,(vlSelfRef.ysyx_25050136__DOT__mem_rlast_i));
        bufp->chgBit(oldp+12,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid));
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp),2);
        bufp->chgBit(oldp+14,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
        bufp->chgBit(oldp+15,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire));
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+18,(((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                 [(0x1fU 
                                                   & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U))])) 
                                 << 0x20U)),64);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+21,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                              << 0x20U) 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                                  : 0U)),32);
        bufp->chgIData(oldp+22,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (IData)((((QData)((IData)(
                                                              vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                              [
                                                              (0x1fU 
                                                               & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                                  >> 0x14U))])) 
                                              << 0x20U) 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                                  : 0U)),32);
        bufp->chgCData(oldp+23,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (0xfU & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                              << 4U) 
                                             >> (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))))
                                  : 0U)),4);
        bufp->chgCData(oldp+24,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                  ? (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize)
                                  : 0U)),3);
        bufp->chgIData(oldp+25,((IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                          << 0x20U) 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))),32);
        bufp->chgIData(oldp+26,((IData)((((QData)((IData)(
                                                          vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                          [
                                                          (0x1fU 
                                                           & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                              >> 0x14U))])) 
                                          << 0x20U) 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))),32);
        bufp->chgCData(oldp+27,((0xfU & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                          << 4U) >> 
                                         (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))))),4);
        bufp->chgIData(oldp+28,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                  ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                 [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0xfU))]
                                  : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                           >> 0xfU))]),32);
        bufp->chgBit(oldp+30,((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                                & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i))) 
                               | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) 
                                  & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i))))));
        bufp->chgBit(oldp+31,(((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read)) 
                               & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_arready_i))));
        bufp->chgBit(oldp+32,(((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)) 
                               & (IData)(vlSelfRef.ysyx_25050136__DOT__inst_arready_i))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgQData(oldp+33,(((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                 << 0x20U)),64);
        bufp->chgCData(oldp+35,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                 << 4U)),8);
        bufp->chgCData(oldp+36,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_arready_i) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_arready_i))),2);
        bufp->chgQData(oldp+37,(vlSelfRef.ysyx_25050136__DOT__s_araddr_i),64);
        bufp->chgCData(oldp+39,((2U | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r) 
                                       << 3U))),6);
        bufp->chgCData(oldp+40,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i) 
                                  << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i))),2);
        bufp->chgQData(oldp+41,((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rdata_i)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__inst_rdata_i)))),64);
        bufp->chgBit(oldp+43,(vlSelfRef.ysyx_25050136__DOT__inst_arready_i));
        bufp->chgBit(oldp+44,(vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i));
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_25050136__DOT__inst_rdata_i),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
        bufp->chgCData(oldp+47,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o),4);
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_25050136__DOT__mem_arready_i));
        bufp->chgCData(oldp+49,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r),3);
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i));
        bufp->chgIData(oldp+51,(vlSelfRef.ysyx_25050136__DOT__mem_rdata_i),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_25050136__DOT__clint_araddr_i),32);
        bufp->chgBit(oldp+53,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready));
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr),32);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize),3);
        bufp->chgBit(oldp+56,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid));
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata),32);
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr),32);
        bufp->chgIData(oldp+59,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr),32);
        bufp->chgCData(oldp+60,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand),2);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id),2);
        bufp->chgIData(oldp+62,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o),32);
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o));
        bufp->chgCData(oldp+64,((0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+66,((0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 7U))),5);
        bufp->chgBit(oldp+67,((1U & (~ ((0x23U == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                        | (0x63U == 
                                           (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgCData(oldp+68,(((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                   << 3U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                     << 1U) | (1U & 
                                               (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
        bufp->chgSData(oldp+69,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
        bufp->chgCData(oldp+70,((((0x23U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                  << 1U) | (3U == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))),2);
        bufp->chgCData(oldp+71,((((0x63U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                  << 2U) | (((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                             << 1U) 
                                            | (0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))),3);
        bufp->chgCData(oldp+72,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
        bufp->chgIData(oldp+73,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
        bufp->chgIData(oldp+74,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
        bufp->chgIData(oldp+75,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
        bufp->chgSData(oldp+77,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+78,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
        bufp->chgBit(oldp+79,((1U & (~ (IData)(((0U 
                                                 == 
                                                 (0xf8000U 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                                & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                   | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
        bufp->chgBit(oldp+80,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                        & (0U == (0xf80U 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o));
        bufp->chgIData(oldp+82,(((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                  ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r
                                  : ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                      ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                      : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o))),32);
        bufp->chgIData(oldp+83,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                  ? ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                      ? ((0x67U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                          ? ((IData)(
                                                     (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                      >> 1U)) 
                                             << 1U)
                                          : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                      : 0U) : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
        bufp->chgBit(oldp+84,(((0x73U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                               | ((0x30200073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                     | ((0x6fU == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                        | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                           & ((~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                              & (0U 
                                                 != vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
        bufp->chgBit(oldp+85,(((~ ((0x23U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   | (0x63U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                               & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o))));
        bufp->chgBit(oldp+86,((1U & (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgBit(oldp+88,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                               & (3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+89,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                               & (0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r),32);
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
        bufp->chgIData(oldp+92,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                  ? ((0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                      ? ((IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                  >> 1U)) 
                                         << 1U) : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                  : 0U)),32);
        bufp->chgBit(oldp+93,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
        bufp->chgQData(oldp+95,((0x1ffffffffULL & (
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                                   + 
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
        bufp->chgIData(oldp+97,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
        bufp->chgIData(oldp+98,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
        bufp->chgIData(oldp+99,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                               (0x1fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+100,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  << (0x1fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+101,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                  >> (0x1fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+103,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
        bufp->chgIData(oldp+105,(((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? ((IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                               >> 1U)) 
                                      << 1U) : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
        bufp->chgIData(oldp+107,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
        bufp->chgSData(oldp+108,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
        bufp->chgSData(oldp+109,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
        bufp->chgSData(oldp+110,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
        bufp->chgBit(oldp+113,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
        bufp->chgCData(oldp+114,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
        bufp->chgCData(oldp+115,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
        bufp->chgCData(oldp+116,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
        bufp->chgCData(oldp+117,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
        bufp->chgIData(oldp+118,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                   ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                       ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+119,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                   ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                       ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+120,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                   ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                       ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgIData(oldp+121,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                   ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                   : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                       ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                       : 0U))),32);
        bufp->chgBit(oldp+122,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r));
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire));
        bufp->chgCData(oldp+124,((0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),7);
        bufp->chgCData(oldp+125,((7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+126,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+127,((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+128,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+129,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+130,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+131,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+132,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+133,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+134,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+135,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+136,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
        bufp->chgBit(oldp+137,((0U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+138,((1U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+139,((2U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+140,((3U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+141,((4U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+142,((5U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+143,((6U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+144,((7U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+145,((0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U))));
        bufp->chgBit(oldp+146,((0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U))));
        bufp->chgBit(oldp+147,((IData)((0x63U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+148,((IData)((0x1063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+149,((IData)((0x4063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+150,((IData)((0x5063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+151,((IData)((0x6063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+152,((IData)((0x7063U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+153,((IData)((3U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+154,((IData)((0x1003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+155,((IData)((0x2003U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
        bufp->chgBit(oldp+158,((IData)((0x23U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+159,((IData)((0x1023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+160,((IData)((0x2023U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+161,((IData)((0x13U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+162,((IData)((0x2013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+163,((IData)((0x3013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+164,((IData)((0x4013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+165,((IData)((0x6013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+166,((IData)((0x7013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+167,((IData)((0x1013U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+168,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                                & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+169,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
        bufp->chgBit(oldp+170,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
        bufp->chgBit(oldp+172,((IData)((0x1033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+173,((IData)((0x2033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+174,((IData)((0x3033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+175,((IData)((0x4033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+176,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
        bufp->chgBit(oldp+177,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                & (0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+178,((IData)((0x6033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+179,((IData)((0x7033U == 
                                        (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgBit(oldp+180,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
        bufp->chgBit(oldp+181,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
        bufp->chgBit(oldp+182,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
        bufp->chgBit(oldp+183,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
        bufp->chgBit(oldp+184,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
        bufp->chgBit(oldp+185,((0x30200073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+186,((0x73U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+187,((0x100073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
        bufp->chgBit(oldp+188,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | ((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   | (0x67U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))));
        bufp->chgBit(oldp+189,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
        bufp->chgIData(oldp+190,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                   ? (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x14U))
                                   : (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+191,((((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+192,((((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+193,((0xfffff000U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),32);
        bufp->chgIData(oldp+194,((((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                                 | (0x800U 
                                                    & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                      >> 0x14U))))),32);
        bufp->chgBit(oldp+195,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+196,(((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                  << 1U)),2);
        bufp->chgCData(oldp+197,(((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                  << 1U)),2);
        bufp->chgCData(oldp+198,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                                  << 1U)),2);
        bufp->chgCData(oldp+199,(vlSelfRef.ysyx_25050136__DOT__s_arvalid_i),2);
        bufp->chgCData(oldp+200,((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))),2);
        bufp->chgBit(oldp+201,((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))));
        bufp->chgIData(oldp+202,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgBit(oldp+203,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r));
        bufp->chgBit(oldp+204,(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o));
        bufp->chgBit(oldp+205,(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o));
        bufp->chgBit(oldp+206,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r));
        bufp->chgBit(oldp+207,((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read))));
        bufp->chgBit(oldp+208,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r));
        bufp->chgBit(oldp+209,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                        & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                           << 1U))) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgCData(oldp+210,(0U),4);
        bufp->chgCData(oldp+211,(0U),8);
        bufp->chgCData(oldp+212,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_awsize)
                                   : 0U)),3);
        bufp->chgCData(oldp+213,(0U),2);
        bufp->chgBit(oldp+214,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                        & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                           << 1U))) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+215,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_wlast))));
        bufp->chgBit(oldp+216,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+217,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+218,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
        bufp->chgBit(oldp+219,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                       & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                          << 1U)))));
        bufp->chgCData(oldp+220,(0U),4);
        bufp->chgCData(oldp+221,(0U),8);
        bufp->chgCData(oldp+222,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_awsize),3);
        bufp->chgCData(oldp+223,(0U),2);
        bufp->chgBit(oldp+224,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                       & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                          << 1U)))));
        bufp->chgBit(oldp+225,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_wlast));
        bufp->chgBit(oldp+226,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready));
        bufp->chgBit(oldp+227,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid));
        bufp->chgBit(oldp+228,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready));
        bufp->chgCData(oldp+229,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master),2);
        bufp->chgCData(oldp+230,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id),2);
        bufp->chgCData(oldp+231,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand),2);
        bufp->chgCData(oldp+232,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id),2);
        bufp->chgCData(oldp+233,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver),2);
        bufp->chgCData(oldp+234,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id),2);
        bufp->chgCData(oldp+235,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__request),2);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o),32);
        bufp->chgBit(oldp+237,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
        bufp->chgIData(oldp+238,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
        bufp->chgIData(oldp+239,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
        bufp->chgBit(oldp+242,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r));
        bufp->chgCData(oldp+243,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read),2);
        bufp->chgBit(oldp+244,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en));
        bufp->chgBit(oldp+245,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en));
        bufp->chgCData(oldp+246,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write),2);
        bufp->chgIData(oldp+247,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r),32);
        bufp->chgCData(oldp+248,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read),2);
        bufp->chgIData(oldp+249,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+269,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+270,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+271,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+272,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+277,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+278,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+279,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+281,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r));
        bufp->chgBit(oldp+282,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read));
        bufp->chgIData(oldp+283,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r),32);
        bufp->chgBit(oldp+284,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
                                & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count) 
                                   == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r)))));
        bufp->chgCData(oldp+285,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r),4);
        bufp->chgQData(oldp+286,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime),64);
        bufp->chgIData(oldp+288,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r),32);
        bufp->chgIData(oldp+289,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align),32);
        bufp->chgCData(oldp+290,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r),8);
        bufp->chgCData(oldp+291,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r),3);
        bufp->chgCData(oldp+292,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r),2);
        bufp->chgCData(oldp+293,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count),8);
    }
    bufp->chgBit(oldp+294,(vlSelfRef.clock));
    bufp->chgBit(oldp+295,(vlSelfRef.reset));
    bufp->chgBit(oldp+296,(vlSelfRef.io_interrupt));
    bufp->chgBit(oldp+297,(vlSelfRef.io_master_awready));
    bufp->chgBit(oldp+298,(vlSelfRef.io_master_awvalid));
    bufp->chgIData(oldp+299,(vlSelfRef.io_master_awaddr),32);
    bufp->chgCData(oldp+300,(vlSelfRef.io_master_awid),4);
    bufp->chgCData(oldp+301,(vlSelfRef.io_master_awlen),8);
    bufp->chgCData(oldp+302,(vlSelfRef.io_master_awsize),3);
    bufp->chgCData(oldp+303,(vlSelfRef.io_master_awburst),2);
    bufp->chgBit(oldp+304,(vlSelfRef.io_master_wready));
    bufp->chgBit(oldp+305,(vlSelfRef.io_master_wvalid));
    bufp->chgIData(oldp+306,(vlSelfRef.io_master_wdata),32);
    bufp->chgCData(oldp+307,(vlSelfRef.io_master_wstrb),4);
    bufp->chgBit(oldp+308,(vlSelfRef.io_master_wlast));
    bufp->chgBit(oldp+309,(vlSelfRef.io_master_bready));
    bufp->chgBit(oldp+310,(vlSelfRef.io_master_bvalid));
    bufp->chgCData(oldp+311,(vlSelfRef.io_master_bresp),2);
    bufp->chgCData(oldp+312,(vlSelfRef.io_master_bid),4);
    bufp->chgBit(oldp+313,(vlSelfRef.io_master_arready));
    bufp->chgBit(oldp+314,(vlSelfRef.io_master_arvalid));
    bufp->chgIData(oldp+315,(vlSelfRef.io_master_araddr),32);
    bufp->chgCData(oldp+316,(vlSelfRef.io_master_arid),4);
    bufp->chgCData(oldp+317,(vlSelfRef.io_master_arlen),8);
    bufp->chgCData(oldp+318,(vlSelfRef.io_master_arsize),3);
    bufp->chgCData(oldp+319,(vlSelfRef.io_master_arburst),2);
    bufp->chgBit(oldp+320,(vlSelfRef.io_master_rready));
    bufp->chgBit(oldp+321,(vlSelfRef.io_master_rvalid));
    bufp->chgCData(oldp+322,(vlSelfRef.io_master_rresp),2);
    bufp->chgIData(oldp+323,(vlSelfRef.io_master_rdata),32);
    bufp->chgBit(oldp+324,(vlSelfRef.io_master_rlast));
    bufp->chgCData(oldp+325,(vlSelfRef.io_master_rid),4);
    bufp->chgBit(oldp+326,(vlSelfRef.io_slave_awready));
    bufp->chgBit(oldp+327,(vlSelfRef.io_slave_awvalid));
    bufp->chgIData(oldp+328,(vlSelfRef.io_slave_awaddr),32);
    bufp->chgCData(oldp+329,(vlSelfRef.io_slave_awid),4);
    bufp->chgCData(oldp+330,(vlSelfRef.io_slave_awlen),8);
    bufp->chgCData(oldp+331,(vlSelfRef.io_slave_awsize),3);
    bufp->chgCData(oldp+332,(vlSelfRef.io_slave_awburst),2);
    bufp->chgBit(oldp+333,(vlSelfRef.io_slave_wready));
    bufp->chgBit(oldp+334,(vlSelfRef.io_slave_wvalid));
    bufp->chgIData(oldp+335,(vlSelfRef.io_slave_wdata),32);
    bufp->chgCData(oldp+336,(vlSelfRef.io_slave_wstrb),4);
    bufp->chgBit(oldp+337,(vlSelfRef.io_slave_wlast));
    bufp->chgBit(oldp+338,(vlSelfRef.io_slave_bready));
    bufp->chgBit(oldp+339,(vlSelfRef.io_slave_bvalid));
    bufp->chgCData(oldp+340,(vlSelfRef.io_slave_bresp),2);
    bufp->chgCData(oldp+341,(vlSelfRef.io_slave_bid),4);
    bufp->chgBit(oldp+342,(vlSelfRef.io_slave_arready));
    bufp->chgBit(oldp+343,(vlSelfRef.io_slave_arvalid));
    bufp->chgIData(oldp+344,(vlSelfRef.io_slave_araddr),32);
    bufp->chgCData(oldp+345,(vlSelfRef.io_slave_arid),4);
    bufp->chgCData(oldp+346,(vlSelfRef.io_slave_arlen),8);
    bufp->chgCData(oldp+347,(vlSelfRef.io_slave_arsize),3);
    bufp->chgCData(oldp+348,(vlSelfRef.io_slave_arburst),2);
    bufp->chgBit(oldp+349,(vlSelfRef.io_slave_rready));
    bufp->chgBit(oldp+350,(vlSelfRef.io_slave_rvalid));
    bufp->chgCData(oldp+351,(vlSelfRef.io_slave_rresp),2);
    bufp->chgIData(oldp+352,(vlSelfRef.io_slave_rdata),32);
    bufp->chgBit(oldp+353,(vlSelfRef.io_slave_rlast));
    bufp->chgCData(oldp+354,(vlSelfRef.io_slave_rid),4);
    bufp->chgCData(oldp+355,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awready_i) 
                               << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                 & ((IData)(vlSelfRef.io_master_awready) 
                                                    << 1U))) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->chgCData(oldp+356,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wready_i) 
                               << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                 & ((IData)(vlSelfRef.io_master_wready) 
                                                    << 1U))) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->chgCData(oldp+357,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i) 
                               << 2U) | ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                          ? (3U & (
                                                   ((IData)(vlSelfRef.io_master_bresp) 
                                                    << 2U) 
                                                   >> 
                                                   (3U 
                                                    & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                          : 0U))),4);
    bufp->chgCData(oldp+358,(((((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                 ? (0xfU & ((((IData)(vlSelfRef.io_master_bid) 
                                              << 4U) 
                                             | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_bid_o)) 
                                            >> (7U 
                                                & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                 : 0U) << 4U) | ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                                  ? 
                                                 (0xfU 
                                                  & ((((IData)(vlSelfRef.io_master_bid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_bid_o)) 
                                                     >> 
                                                     (7U 
                                                      & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                                  : 0U))),8);
    bufp->chgCData(oldp+359,(((((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                 ? (0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                              << 4U) 
                                             | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rid_o)) 
                                            >> (7U 
                                                & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                 : 0U) << 4U) | ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                                  ? 
                                                 (0xfU 
                                                  & ((((IData)(vlSelfRef.io_master_rid) 
                                                       << 4U) 
                                                      | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rid_o)) 
                                                     >> 
                                                     (7U 
                                                      & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                                  : 0U))),8);
    bufp->chgCData(oldp+360,((((IData)(vlSelfRef.io_master_awvalid) 
                               << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                 & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                                    << 1U))) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->chgCData(oldp+361,(((IData)(vlSelfRef.io_master_awready) 
                              << 1U)),2);
    bufp->chgQData(oldp+362,((((QData)((IData)(vlSelfRef.io_master_awaddr)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((1U 
                                                             & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                             ? (IData)(
                                                                       (((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                                                         << 0x20U) 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                                                             : 0U))))),64);
    bufp->chgCData(oldp+364,(((IData)(vlSelfRef.io_master_awid) 
                              << 4U)),8);
    bufp->chgSData(oldp+365,(((IData)(vlSelfRef.io_master_awlen) 
                              << 8U)),16);
    bufp->chgCData(oldp+366,((((IData)(vlSelfRef.io_master_awsize) 
                               << 3U) | ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                          ? (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_awsize)
                                          : 0U))),6);
    bufp->chgCData(oldp+367,(((IData)(vlSelfRef.io_master_awburst) 
                              << 2U)),4);
    bufp->chgCData(oldp+368,((((IData)(vlSelfRef.io_master_wvalid) 
                               << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                 & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                                    << 1U))) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->chgCData(oldp+369,(((IData)(vlSelfRef.io_master_wready) 
                              << 1U)),2);
    bufp->chgQData(oldp+370,((((QData)((IData)(vlSelfRef.io_master_wdata)) 
                               << 0x20U) | (QData)((IData)(
                                                           ((1U 
                                                             & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                             ? (IData)(
                                                                       (((QData)((IData)(
                                                                                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                                                >> 0x14U))])) 
                                                                         << 0x20U) 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                                                             : 0U))))),64);
    bufp->chgCData(oldp+372,((((IData)(vlSelfRef.io_master_wstrb) 
                               << 4U) | ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                          ? (0xfU & 
                                             (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                               << 4U) 
                                              >> (7U 
                                                  & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))))
                                          : 0U))),8);
    bufp->chgCData(oldp+373,((((IData)(vlSelfRef.io_master_wlast) 
                               << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_wlast)))),2);
    bufp->chgCData(oldp+374,(((IData)(vlSelfRef.io_master_bvalid) 
                              << 1U)),2);
    bufp->chgCData(oldp+375,((((IData)(vlSelfRef.io_master_bready) 
                               << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->chgCData(oldp+376,(((IData)(vlSelfRef.io_master_bresp) 
                              << 2U)),4);
    bufp->chgCData(oldp+377,((((IData)(vlSelfRef.io_master_bid) 
                               << 4U) | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_bid_o))),8);
    bufp->chgCData(oldp+378,((((IData)(vlSelfRef.io_master_arvalid) 
                               << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->chgCData(oldp+379,((((IData)(vlSelfRef.io_master_arready) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r))),2);
    bufp->chgQData(oldp+380,((((QData)((IData)(vlSelfRef.io_master_araddr)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__clint_araddr_i)))),64);
    bufp->chgCData(oldp+382,(((IData)(vlSelfRef.io_master_arid) 
                              << 4U)),8);
    bufp->chgSData(oldp+383,(((IData)(vlSelfRef.io_master_arlen) 
                              << 8U)),16);
    bufp->chgCData(oldp+384,((((IData)(vlSelfRef.io_master_arsize) 
                               << 3U) | ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                          ? (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize)
                                          : 0U))),6);
    bufp->chgCData(oldp+385,(((IData)(vlSelfRef.io_master_arburst) 
                              << 2U)),4);
    bufp->chgCData(oldp+386,((((IData)(vlSelfRef.io_master_rvalid) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read))),2);
    bufp->chgCData(oldp+387,((((IData)(vlSelfRef.io_master_rready) 
                               << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->chgQData(oldp+388,((((QData)((IData)(vlSelfRef.io_master_rdata)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r)))),64);
    bufp->chgCData(oldp+390,(((IData)(vlSelfRef.io_master_rresp) 
                              << 2U)),4);
    bufp->chgCData(oldp+391,((((IData)(vlSelfRef.io_master_rlast) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rlast_o))),2);
    bufp->chgCData(oldp+392,((((IData)(vlSelfRef.io_master_rid) 
                               << 4U) | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rid_o))),8);
    bufp->chgCData(oldp+393,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                               ? (0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rid_o)) 
                                          >> (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                               : 0U)),4);
    bufp->chgBit(oldp+394,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & ((IData)(vlSelfRef.io_master_awready) 
                                       << 1U))) & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->chgBit(oldp+395,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & ((IData)(vlSelfRef.io_master_wready) 
                                       << 1U))) & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->chgCData(oldp+396,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                               ? (3U & (((IData)(vlSelfRef.io_master_bresp) 
                                         << 2U) >> 
                                        (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                               : 0U)),2);
    bufp->chgCData(oldp+397,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                               ? (0xfU & ((((IData)(vlSelfRef.io_master_bid) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_bid_o)) 
                                          >> (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                               : 0U)),4);
    bufp->chgCData(oldp+398,(((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                               ? (0xfU & ((((IData)(vlSelfRef.io_master_bid) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_bid_o)) 
                                          >> (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                               : 0U)),4);
    bufp->chgCData(oldp+399,(((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                               ? (0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rid_o)) 
                                          >> (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                               : 0U)),4);
    bufp->chgBit(oldp+400,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->chgBit(oldp+401,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   & ((IData)(vlSelfRef.io_master_awready) 
                                      << 1U)))));
    bufp->chgBit(oldp+402,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   & ((IData)(vlSelfRef.io_master_wready) 
                                      << 1U)))));
    bufp->chgCData(oldp+403,((3U & (((IData)(vlSelfRef.io_master_bresp) 
                                     << 2U) >> (3U 
                                                & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))),2);
    bufp->chgCData(oldp+404,((0xfU & ((((IData)(vlSelfRef.io_master_bid) 
                                        << 4U) | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_bid_o)) 
                                      >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))),4);
    bufp->chgCData(oldp+405,((0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                        << 4U) | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rid_o)) 
                                      >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))),4);
    bufp->chgBit(oldp+406,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r) 
                            & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                               & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
    bufp->chgBit(oldp+407,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
                            & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                               & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
}

void Vysyx_25050136___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25050136___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136___024root*>(voidSelf);
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
