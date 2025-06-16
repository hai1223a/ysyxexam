// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC___024root.h"

void Vysyx_25050136_NPC___024root___eval_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC___024root___eval_ico(Vysyx_25050136_NPC___024root* vlSelf);

bool Vysyx_25050136_NPC___024root___eval_phase__ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_phase__ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136_NPC___024root___eval_triggers__ico(vlSelf);
    vlSelfRef.__VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (vlSelfRef.__VicoExecute) {
        Vysyx_25050136_NPC___024root___eval_ico(vlSelf);
    }
    return (vlSelfRef.__VicoExecute);
}

void Vysyx_25050136_NPC___024root___eval_act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vysyx_25050136_NPC___024root___eval_triggers__act(Vysyx_25050136_NPC___024root* vlSelf);

bool Vysyx_25050136_NPC___024root___eval_phase__act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_phase__act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136_NPC___024root___eval_triggers__act(vlSelf);
    vlSelfRef.__VactExecute = vlSelfRef.__VactTriggered.any();
    if (vlSelfRef.__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25050136_NPC___024root___eval_act(vlSelf);
    }
    return (vlSelfRef.__VactExecute);
}

void Vysyx_25050136_NPC___024root___eval_nba(Vysyx_25050136_NPC___024root* vlSelf);

bool Vysyx_25050136_NPC___024root___eval_phase__nba(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_phase__nba\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (vlSelfRef.__VnbaExecute) {
        Vysyx_25050136_NPC___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (vlSelfRef.__VnbaExecute);
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
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    // Body
    vlSelfRef.__VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    vlSelfRef.__VicoContinue = 1U;
    while (vlSelfRef.__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136_NPC___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 3, "", "Input combinational region did not converge.");
        }
        __Vtemp_1 = ((IData)(1U) + vlSelfRef.__VicoIterCount);
        vlSelfRef.__VicoIterCount = __Vtemp_1;
        vlSelfRef.__VicoContinue = 0U;
        if (Vysyx_25050136_NPC___024root___eval_phase__ico(vlSelf)) {
            vlSelfRef.__VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    vlSelfRef.__VnbaIterCount = 0U;
    vlSelfRef.__VnbaFirstIteration = 1U;
    vlSelfRef.__VnbaContinue = 1U;
    while (vlSelfRef.__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < vlSelfRef.__VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136_NPC___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 3, "", "NBA region did not converge.");
        }
        __Vtemp_2 = ((IData)(1U) + vlSelfRef.__VnbaIterCount);
        vlSelfRef.__VnbaIterCount = __Vtemp_2;
        vlSelfRef.__VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactFirstIteration = 1U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25050136_NPC___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 3, "", "Active region did not converge.");
            }
            __Vtemp_3 = ((IData)(1U) + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactIterCount = __Vtemp_3;
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25050136_NPC___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
            vlSelfRef.__VactFirstIteration = 0U;
        }
        if (Vysyx_25050136_NPC___024root___eval_phase__nba(vlSelf)) {
            vlSelfRef.__VnbaContinue = 1U;
        }
        vlSelfRef.__VnbaFirstIteration = 0U;
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
