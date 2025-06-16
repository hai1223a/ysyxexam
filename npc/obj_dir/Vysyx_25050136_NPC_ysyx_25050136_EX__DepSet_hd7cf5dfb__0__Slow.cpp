// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_EX.h"

VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_EX___ctor_var_reset(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_EX___ctor_var_reset\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__fu_i = 0;
    vlSelf->__PVT__alu_op_i = 0;
    vlSelf->__PVT__lsu_op_i = 0;
    vlSelf->__PVT__bqu_op_i = 0;
    vlSelf->__PVT__op1_i = 0;
    vlSelf->__PVT__op2_i = 0;
    vlSelf->__PVT__op3_i = 0;
    vlSelf->__PVT__op4_i = 0;
    vlSelf->__PVT__op5_i = 0;
    vlSelf->__PVT__mem_len_i = 0;
    vlSelf->__PVT__mem_signed_i = 0;
    vlSelf->__PVT__mem_rdata_i = 0;
    vlSelf->__PVT__mem_ren_o = 0;
    vlSelf->__PVT__mem_wen_o = 0;
    vlSelf->__PVT__mem_wdata_o = 0;
    vlSelf->__PVT__mem_addr_o = 0;
    vlSelf->__PVT__gpr_data_o = 0;
    vlSelf->__PVT__jump_en_o = 0;
    vlSelf->__PVT__jump_addr_o = 0;
    vlSelf->__PVT__alu_en = 0;
    vlSelf->__PVT__alu_out_o = 0;
    vlSelf->__PVT__lsu_en = 0;
    vlSelf->__PVT__load_data_o = 0;
    vlSelf->__PVT__bqu_en = 0;
}
