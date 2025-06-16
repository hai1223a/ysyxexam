// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_RegisterFile.h"

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0\n"); );
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

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__gpr__v0 = 0U;
    if (vlSelfRef.__PVT__wen_i) {
        if ((0U != (IData)(vlSelfRef.__PVT__waddr_i))) {
            vlSelfRef.__VdlyVal__gpr__v0 = vlSelfRef.__PVT__wdata_i;
            vlSelfRef.__VdlyDim0__gpr__v0 = vlSelfRef.__PVT__waddr_i;
            vlSelfRef.__VdlySet__gpr__v0 = 1U;
        }
    }
    if (vlSelfRef.__VdlySet__gpr__v0) {
        vlSelfRef.__PVT__gpr[vlSelfRef.__VdlyDim0__gpr__v0] 
            = vlSelfRef.__VdlyVal__gpr__v0;
    }
    vlSelfRef.__PVT__rdata1_o = ((0U != (IData)(vlSelfRef.__PVT__raddr1_i))
                                  ? vlSelfRef.__PVT__gpr
                                 [vlSelfRef.__PVT__raddr1_i]
                                  : 0U);
    vlSelfRef.__PVT__rdata2_o = ((0U != (IData)(vlSelfRef.__PVT__raddr2_i))
                                  ? vlSelfRef.__PVT__gpr
                                 [vlSelfRef.__PVT__raddr2_i]
                                  : 0U);
}
