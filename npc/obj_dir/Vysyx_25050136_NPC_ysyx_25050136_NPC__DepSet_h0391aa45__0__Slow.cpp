// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_NPC.h"

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_NPC___ctor_var_reset(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vysyx_25050136_NPC_ysyx_25050136_NPC___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->inst_i = 0;
    vlSelf->mem_rdata_i = 0;
    vlSelf->mem_wdata_o = 0;
    vlSelf->mem_addr_o = 0;
    vlSelf->mem_ren_o = 0;
    vlSelf->mem_wen_o = 0;
    vlSelf->mem_len_o = 0;
    vlSelf->pc_o = 0;
    vlSelf->__PVT__if2id_static_npc_o = 0;
    vlSelf->__PVT__id2reg_raddr1_o = 0;
    vlSelf->__PVT__id2reg_raddr2_o = 0;
    vlSelf->__PVT__id2reg_rd_o = 0;
    vlSelf->__PVT__id2reg_rd_en_o = 0;
    vlSelf->__PVT__id2ex_fu_o = 0;
    vlSelf->__PVT__id2ex_alu_op_o = 0;
    vlSelf->__PVT__id2ex_lsu_op_o = 0;
    vlSelf->__PVT__id2ex_bqu_op_o = 0;
    vlSelf->__PVT__id2ex_op1_o = 0;
    vlSelf->__PVT__id2ex_op2_o = 0;
    vlSelf->__PVT__id2ex_op3_o = 0;
    vlSelf->__PVT__id2ex_op4_o = 0;
    vlSelf->__PVT__id2ex_op5_o = 0;
    vlSelf->__PVT__id2ex_mem_signed_o = 0;
    vlSelf->__PVT__reg2id_rdata1_o = 0;
    vlSelf->__PVT__reg2id_rdata2_o = 0;
    vlSelf->__PVT__ex2reg_gpr_data_o = 0;
    vlSelf->__PVT__ex2if_jump_addr_o = 0;
    vlSelf->__PVT__ex2if_jump_en_o = 0;
}
