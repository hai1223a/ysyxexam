// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_BQU.h"

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_BQU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0(Vysyx_25050136_NPC_ysyx_25050136_BQU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_25050136_NPC_ysyx_25050136_BQU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__result_add = (0x1ffffffffULL & 
                                   (VL_EXTEND_QI(33,32, vlSelfRef.__PVT__op1_i) 
                                    + VL_EXTEND_QI(33,32, vlSelfRef.__PVT__op2_i)));
    vlSelfRef.__PVT__result = ((1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__operation_i), 0U))
                                ? VL_CONCAT_III(32,31,1, 
                                                (0x7fffffffU 
                                                 & VL_SEL_IQII(33, vlSelfRef.__PVT__result_add, 1U, 0x1fU)), 0U)
                                : VL_SEL_IQII(33, vlSelfRef.__PVT__result_add, 0U, 0x20U));
    vlSelfRef.__PVT__out_o = ((IData)(vlSelfRef.__PVT__en_i)
                               ? vlSelfRef.__PVT__result
                               : 0U);
}

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_BQU___ctor_var_reset(Vysyx_25050136_NPC_ysyx_25050136_BQU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_25050136_NPC_ysyx_25050136_BQU___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__op1_i = 0;
    vlSelf->__PVT__op2_i = 0;
    vlSelf->__PVT__operation_i = 0;
    vlSelf->__PVT__en_i = 0;
    vlSelf->__PVT__out_o = 0;
    vlSelf->__PVT__result_add = 0;
    vlSelf->__PVT__result = 0;
}
