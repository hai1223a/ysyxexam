// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC___024root.h"

void Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval_ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vysyx_25050136_NPC___024root___eval_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf);

bool Vysyx_25050136_NPC___024root___eval_phase__ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_phase__ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25050136_NPC___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25050136_NPC___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25050136_NPC___024root___eval_act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval_nba(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_nba\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    // Body
    __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0U;
    if ((1U & (~ ((0x23U == (0x7fU & vlSelfRef.inst_i)) 
                  | (0x63U == (0x7fU & vlSelfRef.inst_i)))))) {
        if ((0U != (0x1fU & (vlSelfRef.inst_i >> 7U)))) {
            __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 
                = ((3U == (0x7fU & vlSelfRef.inst_i))
                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o
                    : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out);
            __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 
                = (0x1fU & (vlSelfRef.inst_i >> 7U));
            __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 1U;
        }
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc 
        = ((IData)(vlSelfRef.reset) ? 0x80000000U : 
           (((0x67U == (0x7fU & vlSelfRef.inst_i)) 
             | ((0x6fU == (0x7fU & vlSelfRef.inst_i)) 
                | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                   & (0U != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out))))
             ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                 ? ((0x67U == (0x7fU & vlSelfRef.inst_i))
                     ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                 >> 1U)) << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                 : 0U) : vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o));
    if (__VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0] 
            = __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o 
        = ((0U == (0x1fU & (vlSelfRef.inst_i >> 0xfU)))
            ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.inst_i >> 0xfU))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o = 
        ((0U == (0x1fU & (vlSelfRef.inst_i >> 0x14U)))
          ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
         [(0x1fU & (vlSelfRef.inst_i >> 0x14U))]);
    vlSelfRef.pc_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
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
    vlSelfRef.mem_wdata_o = ((4U == (IData)(vlSelfRef.mem_len_o))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                              : ((2U == (IData)(vlSelfRef.mem_len_o))
                                  ? (0xffffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o)
                                  : ((1U == (IData)(vlSelfRef.mem_len_o))
                                      ? (0xffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o)
                                      : 0U)));
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

void Vysyx_25050136_NPC___024root___eval_triggers__act(Vysyx_25050136_NPC___024root* vlSelf);

bool Vysyx_25050136_NPC___024root___eval_phase__act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_phase__act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25050136_NPC___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25050136_NPC___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_25050136_NPC___024root___eval_phase__nba(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_phase__nba\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25050136_NPC___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__nba(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__act(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_NPC___024root___eval(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136_NPC___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25050136_NPC___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136_NPC___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25050136_NPC___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25050136_NPC___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vysyx_25050136_NPC___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25050136_NPC___024root___eval_debug_assertions(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_debug_assertions\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
