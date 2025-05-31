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
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__stl(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25050136_NPC___024root___eval_phase__stl(Vysyx_25050136_NPC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_settle(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_settle\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136_NPC___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25050136_NPC___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
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

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root____Vm_traceActivitySetAll(Vysyx_25050136_NPC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_stl(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_stl\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25050136_NPC___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en 
        = ((0x67U == (0x7fU & vlSelfRef.inst_i)) | 
           ((0x6fU == (0x7fU & vlSelfRef.inst_i)) | 
            (0x63U == (0x7fU & vlSelfRef.inst_i))));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o 
        = ((0U == (0x1fU & (vlSelfRef.inst_i >> 0xfU)))
            ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.inst_i >> 0xfU))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o = 
        ((0U == (0x1fU & (vlSelfRef.inst_i >> 0x14U)))
          ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
         [(0x1fU & (vlSelfRef.inst_i >> 0x14U))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 
        = ((0x6fU == (0x7fU & vlSelfRef.inst_i)) | 
           (0x67U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 
        = (IData)((0x33U == (0x707fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en 
        = ((0x23U == (0x7fU & vlSelfRef.inst_i)) | 
           (3U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                    | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu))));
    vlSelfRef.mem_len_o = (((IData)((0x2003U == (0x707fU 
                                                 & vlSelfRef.inst_i))) 
                            | (IData)((0x2023U == (0x707fU 
                                                   & vlSelfRef.inst_i))))
                            ? 4U : (((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelfRef.inst_i))) 
                                     | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                                        | (IData)((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst_i)))))
                                     ? 2U : (((IData)(
                                                      (0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.inst_i))) 
                                              | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.inst_i)))))
                                              ? 1U : 0U)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
           & (0x20U == (vlSelfRef.inst_i >> 0x19U)));
    vlSelfRef.mem_ren_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (3U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.mem_wen_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (0x23U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
           & (0x20U == (vlSelfRef.inst_i >> 0x19U)));
    if ((4U == (IData)(vlSelfRef.mem_len_o))) {
        vlSelfRef.mem_wdata_o = vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o 
            = vlSelfRef.mem_rdata_i;
    } else if ((2U == (IData)(vlSelfRef.mem_len_o))) {
        vlSelfRef.mem_wdata_o = (0xffffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o);
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o 
            = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.mem_rdata_i 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.mem_rdata_i))
                : (0xffffU & vlSelfRef.mem_rdata_i));
    } else if ((1U == (IData)(vlSelfRef.mem_len_o))) {
        vlSelfRef.mem_wdata_o = (0xffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o);
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o 
            = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.mem_rdata_i 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.mem_rdata_i))
                : (0xffU & vlSelfRef.mem_rdata_i));
    } else {
        vlSelfRef.mem_wdata_o = 0U;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o = 0U;
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o 
        = ((((((((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                 & (0U == (vlSelfRef.inst_i >> 0x19U))) 
                | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl)) 
               << 0xeU) | (((IData)((0x1013U == (0x707fU 
                                                 & vlSelfRef.inst_i))) 
                            | (IData)((0x1033U == (0x707fU 
                                                   & vlSelfRef.inst_i)))) 
                           << 0xdU)) | ((((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai) 
                                          | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
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
                  | ((IData)((0x2013U == (0x707fU & vlSelfRef.inst_i))) 
                     | (IData)((0x2033U == (0x707fU 
                                            & vlSelfRef.inst_i))))) 
                 << 0xaU) | ((IData)((0x7063U == (0x707fU 
                                                  & vlSelfRef.inst_i))) 
                             << 9U)) | ((((IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst_i))) 
                                          | ((IData)(
                                                     (0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.inst_i))) 
                                             | (IData)(
                                                       (0x3033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.inst_i))))) 
                                         << 8U) | ((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.inst_i))) 
                                                   << 7U)))) 
           | (((((IData)((0x63U == (0x707fU & vlSelfRef.inst_i))) 
                 << 6U) | (((IData)((0x7033U == (0x707fU 
                                                 & vlSelfRef.inst_i))) 
                            | (IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.inst_i)))) 
                           << 5U)) | ((((IData)((0x6033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.inst_i))) 
                                        | (IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.inst_i)))) 
                                       << 4U) | (((IData)(
                                                          (0x4033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.inst_i))) 
                                                  | (IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.inst_i)))) 
                                                 << 3U))) 
              | (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub) 
                  << 2U) | ((((0x17U == (0x7fU & vlSelfRef.inst_i)) 
                              | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                 | ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.inst_i))) 
                                    | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
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
          ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
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
                                               ? vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o
                                               : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc))) 
                             + (QData)((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o))));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o = 
        ((0x37U == (0x7fU & vlSelfRef.inst_i)) ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
          : ((0x17U == (0x7fU & vlSelfRef.inst_i)) ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc
              : ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5)
                  ? ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
                  : vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o)));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o = 
        (((0x33U == (0x7fU & vlSelfRef.inst_i)) | (0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.inst_i)))
          ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
          : (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
              | ((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                 | (0x17U == (0x7fU & vlSelfRef.inst_i))))
              ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
              : 0U));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 
        = (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
           ^ vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 
        = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub)
            ? ((IData)(1U) + (~ vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o))
            : vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = 0U;
    if ((IData)((0U != (0xffU & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o
                : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o))) 
                       + (IData)((0x1ffffffffULL & 
                                  VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                    : ((4U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? ((IData)((0x1ffffffffULL 
                                    & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o))) 
                           + (IData)((0x1ffffffffULL 
                                      & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                        : ((8U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2
                            : ((0x10U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
                                   | vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                : ((0x20U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
                                       & vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                    : ((0x40U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (- (IData)(
                                                     (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))))
                                        : (- (IData)(
                                                     (0U 
                                                      != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))))))));
    } else if ((0x100U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
                          < vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o)));
    } else if ((0x200U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
                          >= vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o)));
    } else if ((0x400U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (- (IData)(VL_LTS_III(32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o)));
    } else if ((0x800U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (- (IData)(VL_GTES_III(32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o)));
    } else if ((0x1000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o, 
                             (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o));
    } else if ((0x2000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
               << (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o));
    } else if ((0x4000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
               >> (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o));
    }
    vlSelfRef.mem_addr_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_triggers__stl(Vysyx_25050136_NPC___024root* vlSelf);

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

VL_ATTR_COLD void Vysyx_25050136_NPC___024root____Vm_traceActivitySetAll(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___ctor_var_reset(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->inst_i = VL_RAND_RESET_I(32);
    vlSelf->mem_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->mem_ren_o = VL_RAND_RESET_I(1);
    vlSelf->mem_wen_o = VL_RAND_RESET_I(1);
    vlSelf->mem_len_o = VL_RAND_RESET_I(3);
    vlSelf->pc_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__if2id_static_npc_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_alu_op_o = VL_RAND_RESET_I(15);
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_op1_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_op2_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_op4_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_op5_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__id2ex_mem_signed_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__reg2id_rdata1_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
