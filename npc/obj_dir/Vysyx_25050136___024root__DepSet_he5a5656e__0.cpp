// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136.h for the primary calling header

#include "Vysyx_25050136__pch.h"
#include "Vysyx_25050136___024root.h"

void Vysyx_25050136___024root___eval_triggers__ico(Vysyx_25050136___024root* vlSelf);
void Vysyx_25050136___024root___eval_ico(Vysyx_25050136___024root* vlSelf);

bool Vysyx_25050136___024root___eval_phase__ico(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_phase__ico\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25050136___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25050136___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25050136___024root___eval_triggers__act(Vysyx_25050136___024root* vlSelf);
void Vysyx_25050136___024root___eval_act(Vysyx_25050136___024root* vlSelf);

bool Vysyx_25050136___024root___eval_phase__act(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_phase__act\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25050136___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25050136___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vysyx_25050136___024root___eval_nba(Vysyx_25050136___024root* vlSelf);

bool Vysyx_25050136___024root___eval_phase__nba(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_phase__nba\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25050136___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
void Vysyx_25050136___024root___eval_debug_assertions(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_debug_assertions\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_interrupt & 0xfeU)))) {
        Verilated::overWidthError("io_interrupt");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_awready & 0xfeU)))) {
        Verilated::overWidthError("io_master_awready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_wready & 0xfeU)))) {
        Verilated::overWidthError("io_master_wready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bvalid & 0xfeU)))) {
        Verilated::overWidthError("io_master_bvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bresp & 0xfcU)))) {
        Verilated::overWidthError("io_master_bresp");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bid & 0xf0U)))) {
        Verilated::overWidthError("io_master_bid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_arready & 0xfeU)))) {
        Verilated::overWidthError("io_master_arready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rvalid & 0xfeU)))) {
        Verilated::overWidthError("io_master_rvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rresp & 0xfcU)))) {
        Verilated::overWidthError("io_master_rresp");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rlast & 0xfeU)))) {
        Verilated::overWidthError("io_master_rlast");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rid & 0xf0U)))) {
        Verilated::overWidthError("io_master_rid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_awvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awid & 0xf0U)))) {
        Verilated::overWidthError("io_slave_awid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awsize & 0xf8U)))) {
        Verilated::overWidthError("io_slave_awsize");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awburst & 0xfcU)))) {
        Verilated::overWidthError("io_slave_awburst");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_wvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wstrb & 0xf0U)))) {
        Verilated::overWidthError("io_slave_wstrb");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wlast & 0xfeU)))) {
        Verilated::overWidthError("io_slave_wlast");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_bready & 0xfeU)))) {
        Verilated::overWidthError("io_slave_bready");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_arvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arid & 0xf0U)))) {
        Verilated::overWidthError("io_slave_arid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arsize & 0xf8U)))) {
        Verilated::overWidthError("io_slave_arsize");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arburst & 0xfcU)))) {
        Verilated::overWidthError("io_slave_arburst");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_rready & 0xfeU)))) {
        Verilated::overWidthError("io_slave_rready");}
}
#endif  // VL_DEBUG
