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

void Vysyx_25050136_NPC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit(CData/*0:0*/ find);

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136_NPC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit(
                                                                          (0x100073U 
                                                                           == vlSelfRef.inst_i));
    vlSelfRef.mem_wdata_o = vlSelfRef.mem_rdata_i;
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = 0U;
    if ((IData)((0x13U == (0x707fU & vlSelfRef.inst_i)))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
            = (((0U == (0x1fU & (vlSelfRef.inst_i >> 0xfU)))
                 ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                [(0x1fU & (vlSelfRef.inst_i >> 0xfU))]) 
               + (((- (IData)((vlSelfRef.inst_i >> 0x1fU))) 
                   << 0xcU) | (vlSelfRef.inst_i >> 0x14U)));
    }
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
