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
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("trig ico");
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__ico(vlSelf);
    }
#endif
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval_ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func ico");
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(vlSelf);
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__act(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_NPC___024root___eval_triggers__act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("trig act");
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__act(vlSelf);
    }
#endif
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_NPC___024root___eval_act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func act");
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval_nba(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_nba\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func nba");
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(vlSelf);
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

bool Vysyx_25050136_NPC___024root___eval_phase__ico(Vysyx_25050136_NPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__nba(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG
bool Vysyx_25050136_NPC___024root___eval_phase__act(Vysyx_25050136_NPC___024root* vlSelf);
bool Vysyx_25050136_NPC___024root___eval_phase__nba(Vysyx_25050136_NPC___024root* vlSelf);

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
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("eval");
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop ico");
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
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop nba");
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
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop act");
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
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
        if (Vysyx_25050136_NPC___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}
