// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_RegisterFile.h"

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rdata1_o = ((0U != (IData)(vlSelfRef.__PVT__raddr1_i))
                                  ? vlSelfRef.__PVT__gpr
                                 [vlSelfRef.__PVT__raddr1_i]
                                  : 0U);
    vlSelfRef.__PVT__rdata2_o = ((0U != (IData)(vlSelfRef.__PVT__raddr2_i))
                                  ? vlSelfRef.__PVT__gpr
                                 [vlSelfRef.__PVT__raddr2_i]
                                  : 0U);
}

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ctor_var_reset(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__wdata_i = 0;
    vlSelf->__PVT__waddr_i = 0;
    vlSelf->__PVT__wen_i = 0;
    vlSelf->__PVT__raddr1_i = 0;
    vlSelf->__PVT__rdata1_o = 0;
    vlSelf->__PVT__raddr2_i = 0;
    vlSelf->__PVT__rdata2_o = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__gpr[__Vi0] = 0;
    }
    vlSelf->__VdlyVal__gpr__v0 = 0;
    vlSelf->__VdlyDim0__gpr__v0 = 0;
    vlSelf->__VdlySet__gpr__v0 = 0;
}
