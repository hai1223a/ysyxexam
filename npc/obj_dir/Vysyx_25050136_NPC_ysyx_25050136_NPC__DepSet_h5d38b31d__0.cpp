// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_NPC.h"

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__reset 
        = vlSelfRef.reset;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__clk 
        = vlSelfRef.clk;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_rdata_i 
        = vlSelfRef.mem_rdata_i;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_i 
        = vlSelfRef.inst_i;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__1(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id2reg_rd_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd_o;
    vlSelfRef.__PVT__id2reg_raddr1_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__raddr1_o;
    vlSelfRef.__PVT__id2reg_raddr2_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__raddr2_o;
    vlSelfRef.__PVT__id2ex_lsu_op_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__lsu_op_o;
    vlSelfRef.__PVT__id2reg_rd_en_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd_en_o;
    vlSelfRef.__PVT__id2ex_bqu_op_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__bqu_op_o;
    vlSelfRef.__PVT__id2ex_fu_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__fu_o;
    vlSelfRef.__PVT__id2ex_mem_signed_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__mem_signed_o;
    vlSelfRef.mem_len_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__mem_len_o;
    vlSelfRef.__PVT__id2ex_alu_op_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__alu_op_o;
    vlSelfRef.__PVT__id2ex_op4_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op4_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__waddr_i 
        = vlSelfRef.__PVT__id2reg_rd_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__raddr1_i 
        = vlSelfRef.__PVT__id2reg_raddr1_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__raddr2_i 
        = vlSelfRef.__PVT__id2reg_raddr2_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__lsu_op_i 
        = vlSelfRef.__PVT__id2ex_lsu_op_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__wen_i 
        = vlSelfRef.__PVT__id2reg_rd_en_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__bqu_op_i 
        = vlSelfRef.__PVT__id2ex_bqu_op_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__fu_i 
        = vlSelfRef.__PVT__id2ex_fu_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_signed_i 
        = vlSelfRef.__PVT__id2ex_mem_signed_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_len_i 
        = vlSelfRef.mem_len_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__alu_op_i 
        = vlSelfRef.__PVT__id2ex_alu_op_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op4_i 
        = vlSelfRef.__PVT__id2ex_op4_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__2(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__2\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg2id_rdata1_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata1_o;
    vlSelfRef.__PVT__reg2id_rdata2_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata2_o;
    vlSelfRef.mem_ren_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_ren_o;
    vlSelfRef.mem_wen_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_wen_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata1_i 
        = vlSelfRef.__PVT__reg2id_rdata1_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata2_i 
        = vlSelfRef.__PVT__reg2id_rdata2_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__3(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__3\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id2ex_op3_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op3_o;
    vlSelfRef.__PVT__id2ex_op1_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op1_o;
    vlSelfRef.__PVT__id2ex_op5_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op5_o;
    vlSelfRef.__PVT__id2ex_op2_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op2_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op3_i 
        = vlSelfRef.__PVT__id2ex_op3_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op1_i 
        = vlSelfRef.__PVT__id2ex_op1_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op5_i 
        = vlSelfRef.__PVT__id2ex_op5_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op2_i 
        = vlSelfRef.__PVT__id2ex_op2_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__4(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__4\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ex2if_jump_addr_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_addr_o;
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_wdata_o;
    vlSelfRef.mem_addr_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_addr_o;
    vlSelfRef.__PVT__ex2if_jump_en_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_en_o;
    vlSelfRef.__PVT__ex2reg_gpr_data_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__gpr_data_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_npc_i 
        = vlSelfRef.__PVT__ex2if_jump_addr_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_valid_i 
        = vlSelfRef.__PVT__ex2if_jump_en_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__wdata_i 
        = vlSelfRef.__PVT__ex2reg_gpr_data_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reg2id_rdata1_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata1_o;
    vlSelfRef.__PVT__reg2id_rdata2_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata2_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata1_i 
        = vlSelfRef.__PVT__reg2id_rdata1_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata2_i 
        = vlSelfRef.__PVT__reg2id_rdata2_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__1(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id2ex_op5_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op5_o;
    vlSelfRef.__PVT__id2ex_op2_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op2_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op5_i 
        = vlSelfRef.__PVT__id2ex_op5_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op2_i 
        = vlSelfRef.__PVT__id2ex_op2_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__2(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__2\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_wdata_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__3(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__3\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__if2id_static_npc_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__static_npc_o;
    vlSelfRef.pc_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__pc_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__static_npc_i 
        = vlSelfRef.__PVT__if2id_static_npc_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__pc_i 
        = vlSelfRef.pc_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id2ex_op3_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op3_o;
    vlSelfRef.__PVT__id2ex_op1_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op1_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op3_i 
        = vlSelfRef.__PVT__id2ex_op3_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op1_i 
        = vlSelfRef.__PVT__id2ex_op1_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__1(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ex2if_jump_addr_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_addr_o;
    vlSelfRef.mem_addr_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_addr_o;
    vlSelfRef.__PVT__ex2if_jump_en_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_en_o;
    vlSelfRef.__PVT__ex2reg_gpr_data_o = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__gpr_data_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_npc_i 
        = vlSelfRef.__PVT__ex2if_jump_addr_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_valid_i 
        = vlSelfRef.__PVT__ex2if_jump_en_o;
    vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__wdata_i 
        = vlSelfRef.__PVT__ex2reg_gpr_data_o;
}
