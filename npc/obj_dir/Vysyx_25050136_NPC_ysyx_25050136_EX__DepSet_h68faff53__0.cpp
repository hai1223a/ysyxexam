// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_EX.h"

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_rdata_i 
        = vlSelfRef.__PVT__mem_rdata_i;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__operation_i 
        = vlSelfRef.__PVT__bqu_op_i;
    vlSelfRef.__PVT__lsu_en = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fu_i), 1U));
    vlSelfRef.__PVT__bqu_en = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fu_i), 2U));
    vlSelfRef.__PVT__alu_en = (1U & VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__fu_i), 0U));
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_signed_i 
        = vlSelfRef.__PVT__mem_signed_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_len_i 
        = vlSelfRef.__PVT__mem_len_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__operation_i 
        = vlSelfRef.__PVT__alu_op_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__op2_i 
        = vlSelfRef.__PVT__op4_i;
    vlSelfRef.__PVT__mem_ren_o = ((IData)(vlSelfRef.__PVT__lsu_en) 
                                  & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__lsu_op_i), 0U));
    vlSelfRef.__PVT__mem_wen_o = ((IData)(vlSelfRef.__PVT__lsu_en) 
                                  & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__lsu_op_i), 1U));
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__en_i 
        = vlSelfRef.__PVT__bqu_en;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__en_i 
        = vlSelfRef.__PVT__alu_en;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__2(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__2\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__op1_i 
        = vlSelfRef.__PVT__op3_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op1_i 
        = vlSelfRef.__PVT__op1_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__store_data_i 
        = vlSelfRef.__PVT__op5_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op2_i 
        = vlSelfRef.__PVT__op2_i;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__3(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__3\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__jump_addr_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__out_o;
    vlSelfRef.__PVT__alu_out_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__out_o;
    vlSelfRef.__PVT__mem_wdata_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_wdata_o;
    vlSelfRef.__PVT__load_data_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__load_data_o;
    vlSelfRef.__PVT__mem_addr_o = vlSelfRef.__PVT__alu_out_o;
    vlSelfRef.__PVT__jump_en_o = (1U & ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__bqu_op_i), 0U) 
                                         | VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__bqu_op_i), 1U)) 
                                        | ((IData)(vlSelfRef.__PVT__bqu_en) 
                                           & VL_REDOR_I(vlSelfRef.__PVT__alu_out_o))));
    vlSelfRef.__PVT__gpr_data_o = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__lsu_op_i), 0U))
                                    ? vlSelfRef.__PVT__load_data_o
                                    : vlSelfRef.__PVT__alu_out_o);
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__store_data_i 
        = vlSelfRef.__PVT__op5_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op2_i 
        = vlSelfRef.__PVT__op2_i;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_wdata_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_wdata_o;
    vlSelfRef.__PVT__load_data_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__load_data_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__op1_i 
        = vlSelfRef.__PVT__op3_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op1_i 
        = vlSelfRef.__PVT__op1_i;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__jump_addr_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__out_o;
    vlSelfRef.__PVT__alu_out_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__out_o;
    vlSelfRef.__PVT__mem_addr_o = vlSelfRef.__PVT__alu_out_o;
    vlSelfRef.__PVT__jump_en_o = (1U & ((VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__bqu_op_i), 0U) 
                                         | VL_BITSEL_IIII(3, (IData)(vlSelfRef.__PVT__bqu_op_i), 1U)) 
                                        | ((IData)(vlSelfRef.__PVT__bqu_en) 
                                           & VL_REDOR_I(vlSelfRef.__PVT__alu_out_o))));
    vlSelfRef.__PVT__gpr_data_o = ((1U & VL_BITSEL_IIII(2, (IData)(vlSelfRef.__PVT__lsu_op_i), 0U))
                                    ? vlSelfRef.__PVT__load_data_o
                                    : vlSelfRef.__PVT__alu_out_o);
}
