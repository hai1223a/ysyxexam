// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_IF.h"

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_IF___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0(Vysyx_25050136_NPC_ysyx_25050136_IF* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_IF___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__static_npc_o = ((IData)(4U) + vlSelfRef.__PVT__pc);
    vlSelfRef.__PVT__pc_o = vlSelfRef.__PVT__pc;
}

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_IF___ctor_var_reset(Vysyx_25050136_NPC_ysyx_25050136_IF* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_IF___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__dynamic_valid_i = 0;
    vlSelf->__PVT__dynamic_npc_i = 0;
    vlSelf->__PVT__static_npc_o = 0;
    vlSelf->__PVT__pc_o = 0;
    vlSelf->__PVT__pc = 0;
    vlSelf->__Vdly__pc = 0;
}
