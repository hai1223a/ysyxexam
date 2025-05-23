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
    vlSelfRef.find_ebreak_o = (0x100073U == vlSelfRef.inst_i);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en 
        = ((0x67U == (0x7fU & vlSelfRef.inst_i)) | 
           ((0x6fU == (0x7fU & vlSelfRef.inst_i)) | 
            (0x63U == (0x7fU & vlSelfRef.inst_i))));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o = 
        ((0U == (0x1fU & (vlSelfRef.inst_i >> 0x14U)))
          ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
         [(0x1fU & (vlSelfRef.inst_i >> 0x14U))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en 
        = ((0x23U == (0x7fU & vlSelfRef.inst_i)) | 
           (3U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o 
        = ((0U == (0x1fU & (vlSelfRef.inst_i >> 0xfU)))
            ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.inst_i >> 0xfU))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_3 
        = ((0x6fU == (0x7fU & vlSelfRef.inst_i)) | 
           (0x67U == (0x7fU & vlSelfRef.inst_i)));
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
          ? (((- (IData)((vlSelfRef.inst_i >> 0x1fU))) 
              << 0xcU) | (vlSelfRef.inst_i >> 0x14U))
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
    vlSelfRef.mem_wdata_o = ((4U == (IData)(vlSelfRef.mem_len_o))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                              : ((2U == (IData)(vlSelfRef.mem_len_o))
                                  ? (0xffffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o)
                                  : ((1U == (IData)(vlSelfRef.mem_len_o))
                                      ? (0xffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o)
                                      : 0U)));
    vlSelfRef.mem_ren_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (3U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.mem_wen_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (0x23U == (0x7fU & vlSelfRef.inst_i)));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o 
        = ((((0x17U == (0x7fU & vlSelfRef.inst_i)) 
             | ((0x23U == (0x7fU & vlSelfRef.inst_i)) 
                | ((3U == (0x7fU & vlSelfRef.inst_i)) 
                   | (IData)((0x13U == (0x707fU & vlSelfRef.inst_i)))))) 
            << 1U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_3) 
                      | (0x37U == (0x7fU & vlSelfRef.inst_i))));
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
              : ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_3)
                  ? ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
                  : vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = 0U;
    if ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o;
    } else if ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
               + (((0x33U == (0x7fU & vlSelfRef.inst_i)) 
                   | (0x63U == (0x7fU & vlSelfRef.inst_i)))
                   ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                   : (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                       | ((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                          | (0x17U == (0x7fU & vlSelfRef.inst_i))))
                       ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                       : 0U)));
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
                    ? ((4U == (IData)(vlSelfRef.mem_len_o))
                        ? vlSelfRef.mem_rdata_i : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.mem_len_o))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.mem_rdata_i 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelfRef.mem_rdata_i))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.mem_len_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.mem_rdata_i 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelfRef.mem_rdata_i))
                                                     : 0U)))
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
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o = 
        ((0U == (0x1fU & (vlSelfRef.inst_i >> 0x14U)))
          ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
         [(0x1fU & (vlSelfRef.inst_i >> 0x14U))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o 
        = ((0U == (0x1fU & (vlSelfRef.inst_i >> 0xfU)))
            ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.inst_i >> 0xfU))]);
    vlSelfRef.pc_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
    vlSelfRef.mem_wdata_o = ((4U == (IData)(vlSelfRef.mem_len_o))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                              : ((2U == (IData)(vlSelfRef.mem_len_o))
                                  ? (0xffffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o)
                                  : ((1U == (IData)(vlSelfRef.mem_len_o))
                                      ? (0xffU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o)
                                      : 0U)));
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
              : ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_3)
                  ? ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
                  : vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = 0U;
    if ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o;
    } else if ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
               + (((0x33U == (0x7fU & vlSelfRef.inst_i)) 
                   | (0x63U == (0x7fU & vlSelfRef.inst_i)))
                   ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                   : (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                       | ((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                          | (0x17U == (0x7fU & vlSelfRef.inst_i))))
                       ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                       : 0U)));
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
            VL_FATAL_MT("vsrc/top.v", 2, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("vsrc/top.v", 2, "", "NBA region did not converge.");
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
                VL_FATAL_MT("vsrc/top.v", 2, "", "Active region did not converge.");
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
