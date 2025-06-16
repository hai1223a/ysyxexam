// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024root.h"

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
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop stl");
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
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_triggers__stl(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__stl\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("trig stl");
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__stl(vlSelf);
    }
#endif
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_stl(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_stl\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func stl");
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(vlSelf);
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}
