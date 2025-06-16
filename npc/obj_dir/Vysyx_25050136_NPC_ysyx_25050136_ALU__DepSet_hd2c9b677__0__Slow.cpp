// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_ALU.h"

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_ALU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(Vysyx_25050136_NPC_ysyx_25050136_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_25050136_NPC_ysyx_25050136_ALU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_sub_op1 = vlSelfRef.__PVT__op1_i;
    vlSelfRef.__PVT__op1_xor_op2 = (vlSelfRef.__PVT__op1_i 
                                    ^ vlSelfRef.__PVT__op2_i);
    vlSelfRef.__PVT__sra_result = VL_SHIFTRS_III(32,32,5, vlSelfRef.__PVT__op1_i, 
                                                 (0x1fU 
                                                  & VL_SEL_IIII(32, vlSelfRef.__PVT__op2_i, 0U, 5U)));
    vlSelfRef.__PVT__sll_result = (vlSelfRef.__PVT__op1_i 
                                   << (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__op2_i, 0U, 5U)));
    vlSelfRef.__PVT__srl_result = (vlSelfRef.__PVT__op1_i 
                                   >> (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__op2_i, 0U, 5U)));
    vlSelfRef.__PVT__add_sub_op2 = ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 2U))
                                     ? ((IData)(1U) 
                                        + (~ vlSelfRef.__PVT__op2_i))
                                     : vlSelfRef.__PVT__op2_i);
    vlSelfRef.__PVT__add_sub_result = (0x1ffffffffULL 
                                       & (VL_EXTENDS_QI(33,32, vlSelfRef.__PVT__add_sub_op1) 
                                          + VL_EXTENDS_QI(33,32, vlSelfRef.__PVT__add_sub_op2)));
    vlSelfRef.__PVT__out = 0U;
    if ((1U & (((((((VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 0U) 
                     | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 1U)) 
                    | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 2U)) 
                   | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 3U)) 
                  | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 4U)) 
                 | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 5U)) 
                | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 6U)) 
               | VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 7U)))) {
        vlSelfRef.__PVT__out = ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 0U))
                                 ? vlSelfRef.__PVT__op1_i
                                 : ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 1U))
                                     ? VL_SEL_IQII(33, vlSelfRef.__PVT__add_sub_result, 0U, 0x20U)
                                     : ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 2U))
                                         ? VL_SEL_IQII(33, vlSelfRef.__PVT__add_sub_result, 0U, 0x20U)
                                         : ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 3U))
                                             ? vlSelfRef.__PVT__op1_xor_op2
                                             : ((1U 
                                                 & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 4U))
                                                 ? 
                                                (vlSelfRef.__PVT__add_sub_op1 
                                                 | vlSelfRef.__PVT__add_sub_op2)
                                                 : 
                                                ((1U 
                                                  & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 5U))
                                                  ? 
                                                 (vlSelfRef.__PVT__add_sub_op1 
                                                  & vlSelfRef.__PVT__add_sub_op2)
                                                  : 
                                                 ((1U 
                                                   & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 6U))
                                                   ? 
                                                  VL_EXTEND_II(32,1, 
                                                               (1U 
                                                                & (~ 
                                                                   VL_REDOR_I(vlSelfRef.__PVT__op1_xor_op2))))
                                                   : 
                                                  VL_EXTEND_II(32,1, 
                                                               VL_REDOR_I(vlSelfRef.__PVT__op1_xor_op2)))))))));
    } else if ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 8U))) {
        vlSelfRef.__PVT__out = VL_EXTEND_II(32,1, (vlSelfRef.__PVT__op1_i 
                                                   < vlSelfRef.__PVT__op2_i));
    } else if ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 9U))) {
        vlSelfRef.__PVT__out = VL_EXTEND_II(32,1, (vlSelfRef.__PVT__op1_i 
                                                   >= vlSelfRef.__PVT__op2_i));
    } else if ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 0xaU))) {
        vlSelfRef.__PVT__out = VL_EXTEND_II(32,1, VL_LTS_III(32, vlSelfRef.__PVT__op1_i, vlSelfRef.__PVT__op2_i));
    } else if ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 0xbU))) {
        vlSelfRef.__PVT__out = VL_EXTEND_II(32,1, VL_GTES_III(32, vlSelfRef.__PVT__op1_i, vlSelfRef.__PVT__op2_i));
    } else if ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 0xcU))) {
        vlSelfRef.__PVT__out = vlSelfRef.__PVT__sra_result;
    } else if ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 0xdU))) {
        vlSelfRef.__PVT__out = vlSelfRef.__PVT__sll_result;
    } else if ((1U & VL_BITSEL_IIII(15, (IData)(vlSelfRef.__PVT__operation_i), 0xeU))) {
        vlSelfRef.__PVT__out = vlSelfRef.__PVT__srl_result;
    }
    vlSelfRef.__PVT__out_o = ((IData)(vlSelfRef.__PVT__en_i)
                               ? vlSelfRef.__PVT__out
                               : 0U);
}

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_ALU___ctor_var_reset(Vysyx_25050136_NPC_ysyx_25050136_ALU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_25050136_NPC_ysyx_25050136_ALU___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__op1_i = 0;
    vlSelf->__PVT__op2_i = 0;
    vlSelf->__PVT__operation_i = 0;
    vlSelf->__PVT__en_i = 0;
    vlSelf->__PVT__out_o = 0;
    vlSelf->__PVT__add_sub_result = 0;
    vlSelf->__PVT__add_sub_op1 = 0;
    vlSelf->__PVT__add_sub_op2 = 0;
    vlSelf->__PVT__op1_xor_op2 = 0;
    vlSelf->__PVT__sra_result = 0;
    vlSelf->__PVT__sll_result = 0;
    vlSelf->__PVT__srl_result = 0;
    vlSelf->__PVT__out = 0;
}
