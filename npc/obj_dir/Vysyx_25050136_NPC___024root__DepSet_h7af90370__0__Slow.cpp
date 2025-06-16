// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC___024root.h"

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_static(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_static\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_initial(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_initial\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_final(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_final\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__stl(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___dump_triggers__stl\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_op1_o;
    ysyx_25050136_NPC__DOT__id2ex_op1_o = 0;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_op2_o;
    ysyx_25050136_NPC__DOT__id2ex_op2_o = 0;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_op5_o;
    ysyx_25050136_NPC__DOT__id2ex_op5_o = 0;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__id2ex_mem_signed_o;
    ysyx_25050136_NPC__DOT__id2ex_mem_signed_o = 0;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__reg2id_rdata1_o;
    ysyx_25050136_NPC__DOT__reg2id_rdata1_o = 0;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu = 0;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu = 0;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai = 0;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl = 0;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 = 0;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 = 0;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 = 0;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 = 0;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0;
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0 = 0;
    // Body
    vlSelfRef.pc_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en 
        = ((0x67U == (0x7fU & vlSelfRef.inst_i)) | 
           ((0x6fU == (0x7fU & vlSelfRef.inst_i)) | 
            (0x63U == (0x7fU & vlSelfRef.inst_i))));
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.inst_i)));
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.inst_i)));
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.inst_i)));
    ysyx_25050136_NPC__DOT__reg2id_rdata1_o = ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.inst_i 
                                                    >> 0xfU)))
                                                ? 0U
                                                : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                               [(0x1fU 
                                                 & (vlSelfRef.inst_i 
                                                    >> 0xfU))]);
    ysyx_25050136_NPC__DOT__id2ex_op5_o = ((0U == (0x1fU 
                                                   & (vlSelfRef.inst_i 
                                                      >> 0x14U)))
                                            ? 0U : 
                                           vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                           [(0x1fU 
                                             & (vlSelfRef.inst_i 
                                                >> 0x14U))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 
        = ((0x6fU == (0x7fU & vlSelfRef.inst_i)) | 
           (0x67U == (0x7fU & vlSelfRef.inst_i)));
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 
        = (IData)((0x33U == (0x707fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en 
        = ((0x23U == (0x7fU & vlSelfRef.inst_i)) | 
           (3U == (0x7fU & vlSelfRef.inst_i)));
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.inst_i)));
    ysyx_25050136_NPC__DOT__id2ex_mem_signed_o = (1U 
                                                  & (~ 
                                                     ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                                                      | (IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu))));
    vlSelfRef.mem_len_o = ((IData)(((0x2000U == (0x7000U 
                                                 & vlSelfRef.inst_i)) 
                                    & ((3U == (0x7fU 
                                               & vlSelfRef.inst_i)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelfRef.inst_i)))))
                            ? 4U : (((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelfRef.inst_i))) 
                                     | ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                                        | (IData)((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst_i)))))
                                     ? 2U : (((IData)(
                                                      (0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.inst_i))) 
                                              | ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.inst_i)))))
                                              ? 1U : 0U)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelfRef.inst_i 
                                                    >> 0x19U)));
    vlSelfRef.mem_ren_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (3U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.mem_wen_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (0x23U == (0x7fU & vlSelfRef.inst_i)));
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai 
        = ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
           & (0x20U == (vlSelfRef.inst_i >> 0x19U)));
    if ((4U == (IData)(vlSelfRef.mem_len_o))) {
        vlSelfRef.mem_wdata_o = ysyx_25050136_NPC__DOT__id2ex_op5_o;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o 
            = vlSelfRef.mem_rdata_i;
    } else if ((2U == (IData)(vlSelfRef.mem_len_o))) {
        vlSelfRef.mem_wdata_o = (0xffffU & ysyx_25050136_NPC__DOT__id2ex_op5_o);
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o 
            = ((IData)(ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.mem_rdata_i 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.mem_rdata_i))
                : (0xffffU & vlSelfRef.mem_rdata_i));
    } else if ((1U == (IData)(vlSelfRef.mem_len_o))) {
        vlSelfRef.mem_wdata_o = (0xffU & ysyx_25050136_NPC__DOT__id2ex_op5_o);
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o 
            = ((IData)(ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.mem_rdata_i 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.mem_rdata_i))
                : (0xffU & vlSelfRef.mem_rdata_i));
    } else {
        vlSelfRef.mem_wdata_o = 0U;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o = 0U;
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o 
        = ((((((((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                 & (0U == (vlSelfRef.inst_i >> 0x19U))) 
                | (IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl)) 
               << 0xeU) | ((IData)(((0x1000U == (0x7000U 
                                                 & vlSelfRef.inst_i)) 
                                    & ((0x13U == (0x7fU 
                                                  & vlSelfRef.inst_i)) 
                                       | (0x33U == 
                                          (0x7fU & vlSelfRef.inst_i))))) 
                           << 0xdU)) | ((((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai) 
                                          | ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                             & (0x20U 
                                                == 
                                                (vlSelfRef.inst_i 
                                                 >> 0x19U)))) 
                                         << 0xcU) | 
                                        ((IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.inst_i))) 
                                         << 0xbU))) 
            | (((((IData)((0x4063U == (0x707fU & vlSelfRef.inst_i))) 
                  | (IData)(((0x2000U == (0x7000U & vlSelfRef.inst_i)) 
                             & ((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                                | (0x33U == (0x7fU 
                                             & vlSelfRef.inst_i)))))) 
                 << 0xaU) | ((IData)((0x7063U == (0x707fU 
                                                  & vlSelfRef.inst_i))) 
                             << 9U)) | ((((IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst_i))) 
                                          | (IData)(
                                                    ((0x3000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelfRef.inst_i)) 
                                                     & ((0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.inst_i)) 
                                                        | (0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.inst_i)))))) 
                                         << 8U) | ((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.inst_i))) 
                                                   << 7U)))) 
           | (((((IData)((0x63U == (0x707fU & vlSelfRef.inst_i))) 
                 << 6U) | ((IData)(((0x7000U == (0x7000U 
                                                 & vlSelfRef.inst_i)) 
                                    & ((0x33U == (0x7fU 
                                                  & vlSelfRef.inst_i)) 
                                       | (0x13U == 
                                          (0x7fU & vlSelfRef.inst_i))))) 
                           << 5U)) | (((IData)(((0x6000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelfRef.inst_i)) 
                                                & ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst_i)) 
                                                   | (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.inst_i))))) 
                                       << 4U) | ((IData)(
                                                         ((0x4000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelfRef.inst_i)) 
                                                          & ((0x33U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.inst_i)) 
                                                             | (0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.inst_i))))) 
                                                 << 3U))) 
              | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                  << 2U) | ((((0x17U == (0x7fU & vlSelfRef.inst_i)) 
                              | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                 | ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.inst_i))) 
                                    | ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                       & (0U == (vlSelfRef.inst_i 
                                                 >> 0x19U)))))) 
                             << 1U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5) 
                                       | (0x37U == 
                                          (0x7fU & vlSelfRef.inst_i)))))));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o = 
        (((0x13U == (0x7fU & vlSelfRef.inst_i)) | (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst_i)) 
                                                   | (0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.inst_i))))
          ? ((IData)(ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
              ? (0x1fU & (vlSelfRef.inst_i >> 0x14U))
              : (((- (IData)((vlSelfRef.inst_i >> 0x1fU))) 
                  << 0xcU) | (vlSelfRef.inst_i >> 0x14U)))
          : ((0x23U == (0x7fU & vlSelfRef.inst_i)) ? 
             (((- (IData)((vlSelfRef.inst_i >> 0x1fU))) 
               << 0xcU) | ((0xfe0U & (vlSelfRef.inst_i 
                                      >> 0x14U)) | 
                           (0x1fU & (vlSelfRef.inst_i 
                                     >> 7U)))) : ((
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst_i)) 
                                                   | (0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.inst_i)))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.inst_i)
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst_i))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelfRef.inst_i 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.inst_i 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.inst_i 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.inst_i 
                                                                >> 7U)))))
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.inst_i))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.inst_i 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | (((0xff000U 
                                                          & vlSelfRef.inst_i) 
                                                         | (0x800U 
                                                            & (vlSelfRef.inst_i 
                                                               >> 9U))) 
                                                        | (0x7feU 
                                                           & (vlSelfRef.inst_i 
                                                              >> 0x14U))))
                                                     : 0U)))));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
        = (0x1ffffffffULL & ((QData)((IData)(((0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.inst_i))
                                               ? ysyx_25050136_NPC__DOT__reg2id_rdata1_o
                                               : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc))) 
                             + (QData)((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o))));
    ysyx_25050136_NPC__DOT__id2ex_op1_o = ((0x37U == 
                                            (0x7fU 
                                             & vlSelfRef.inst_i))
                                            ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                                            : ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.inst_i))
                                                ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc
                                                : ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
                                                    : ysyx_25050136_NPC__DOT__reg2id_rdata1_o)));
    ysyx_25050136_NPC__DOT__id2ex_op2_o = (((0x33U 
                                             == (0x7fU 
                                                 & vlSelfRef.inst_i)) 
                                            | (0x63U 
                                               == (0x7fU 
                                                   & vlSelfRef.inst_i)))
                                            ? ysyx_25050136_NPC__DOT__id2ex_op5_o
                                            : (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                                | ((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.inst_i)) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.inst_i))))
                                                ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                                                : 0U));
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 
        = (ysyx_25050136_NPC__DOT__id2ex_op1_o ^ ysyx_25050136_NPC__DOT__id2ex_op2_o);
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)
            ? ((IData)(1U) + (~ ysyx_25050136_NPC__DOT__id2ex_op2_o))
            : ysyx_25050136_NPC__DOT__id2ex_op2_o);
    ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0 
        = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, ysyx_25050136_NPC__DOT__id2ex_op1_o))) 
           + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? ysyx_25050136_NPC__DOT__id2ex_op1_o
                : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0
                    : ((4U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0
                        : ((8U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2
                            : ((0x10U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? (ysyx_25050136_NPC__DOT__id2ex_op1_o 
                                   | ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                : ((0x20U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (ysyx_25050136_NPC__DOT__id2ex_op1_o 
                                       & ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                    : ((0x40U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (1U & (~ (IData)(
                                                           (0U 
                                                            != ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))
                                        : (0U != ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))))));
    } else if ((0x100U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (ysyx_25050136_NPC__DOT__id2ex_op1_o 
               < ysyx_25050136_NPC__DOT__id2ex_op2_o);
    } else if ((0x200U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (ysyx_25050136_NPC__DOT__id2ex_op1_o 
               >= ysyx_25050136_NPC__DOT__id2ex_op2_o);
    } else if ((0x400U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = VL_LTS_III(32, ysyx_25050136_NPC__DOT__id2ex_op1_o, ysyx_25050136_NPC__DOT__id2ex_op2_o);
    } else if ((0x800U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = VL_GTES_III(32, ysyx_25050136_NPC__DOT__id2ex_op1_o, ysyx_25050136_NPC__DOT__id2ex_op2_o);
    } else if ((0x1000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = VL_SHIFTRS_III(32,32,5, ysyx_25050136_NPC__DOT__id2ex_op1_o, 
                             (0x1fU & ysyx_25050136_NPC__DOT__id2ex_op2_o));
    } else if ((0x2000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (ysyx_25050136_NPC__DOT__id2ex_op1_o 
               << (0x1fU & ysyx_25050136_NPC__DOT__id2ex_op2_o));
    } else if ((0x4000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (ysyx_25050136_NPC__DOT__id2ex_op1_o 
               >> (0x1fU & ysyx_25050136_NPC__DOT__id2ex_op2_o));
    }
    vlSelfRef.mem_addr_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_triggers__stl(Vysyx_25050136_NPC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_stl(Vysyx_25050136_NPC___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25050136_NPC___024root___eval_phase__stl(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_phase__stl\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25050136_NPC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25050136_NPC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___dump_triggers__ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___dump_triggers__act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__nba(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___dump_triggers__nba\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___ctor_var_reset(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->inst_i = 0;
    vlSelf->mem_rdata_i = 0;
    vlSelf->mem_wdata_o = 0;
    vlSelf->mem_addr_o = 0;
    vlSelf->mem_ren_o = 0;
    vlSelf->mem_wen_o = 0;
    vlSelf->mem_len_o = 0;
    vlSelf->pc_o = 0;
    vlSelf->ysyx_25050136_NPC__DOT__if2id_static_npc_o = 0;
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_alu_op_o = 0;
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_op4_o = 0;
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc = 0;
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 = 0;
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en = 0;
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o = 0;
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en = 0;
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = 0;
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__Vi0] = 0;
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
}
