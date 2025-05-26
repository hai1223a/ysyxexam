// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_NPC___024root___eval_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vysyx_25050136_NPC___024unit____Vdpiimwrap_itrace_get_pc_inst_TOP____024unit(IData/*31:0*/ pc_DPIC, IData/*31:0*/ inst_DPIC);

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136_NPC___024unit____Vdpiimwrap_itrace_get_pc_inst_TOP____024unit(vlSelfRef.pc_o, vlSelfRef.inst_i);
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__act(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_NPC___024root___eval_triggers__act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__act(vlSelf);
    }
#endif
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
    vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
    vlSelfRef.pc_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
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
    Vysyx_25050136_NPC___024unit____Vdpiimwrap_itrace_get_pc_inst_TOP____024unit(vlSelfRef.pc_o, vlSelfRef.inst_i);
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
