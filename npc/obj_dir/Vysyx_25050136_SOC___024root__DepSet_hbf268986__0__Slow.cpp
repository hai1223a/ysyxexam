// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_SOC.h for the primary calling header

#include "Vysyx_25050136_SOC__pch.h"
#include "Vysyx_25050136_SOC___024root.h"

VL_ATTR_COLD void Vysyx_25050136_SOC___024root___eval_static(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_static\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root___eval_initial__TOP(Vysyx_25050136_SOC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_SOC___024root____Vm_traceActivitySetAll(Vysyx_25050136_SOC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25050136_SOC___024root___eval_initial(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_initial\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136_SOC___024root___eval_initial__TOP(vlSelf);
    Vysyx_25050136_SOC___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root___eval_initial__TOP(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_initial__TOP\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr = 1U;
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root___eval_final(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_final\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_SOC___024root___dump_triggers__stl(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___dump_triggers__stl\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25050136_SOC___024root___eval_triggers__stl(Vysyx_25050136_SOC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_SOC___024root___eval_stl(Vysyx_25050136_SOC___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25050136_SOC___024root___eval_phase__stl(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_phase__stl\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25050136_SOC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25050136_SOC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_SOC___024root___dump_triggers__act(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___dump_triggers__act\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_SOC___024root___dump_triggers__nba(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___dump_triggers__nba\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25050136_SOC___024root____Vm_traceActivitySetAll(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root___ctor_var_reset(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___ctor_var_reset\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->ysyx_25050136_SOC__DOT__inst_rvalid_i = 0;
    vlSelf->ysyx_25050136_SOC__DOT__mem_awvalid_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__mem_wvalid_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__mem_arvalid_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__mem_rvalid_i = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__ex2if_pc_updata_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_awvalid_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_awaddr_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wvalid_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wdata_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wstrb_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_bready_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_arvalid_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_araddr_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_rready_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__gpr_wen_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__gpr_data_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__jump_en_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__jump_addr_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__fready_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__ar_fire = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_awvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_wvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT____VdfgRegularize_h162bcf12_0_0 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__Vi0] = 0;
    }
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_araddr_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_arready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rdata_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_awready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_bvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_awaddr_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wdata_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wstrb_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_araddr_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_arready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__ar_fire = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wready_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_bvalid_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awaddr_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wdata_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__aw_fire = 0;
    vlSelf->ysyx_25050136_SOC__DOT__u_RAM__DOT__w_fire = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_2_0 = 0;
    vlSelf->__Vfunc_pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_pmem_read__3__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
