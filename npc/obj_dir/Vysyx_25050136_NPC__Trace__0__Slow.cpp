// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136_NPC__Syms.h"


VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ysyx_25050136_NPC", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+231,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"mem_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+234,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+235,0,"TOP_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"TOP_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"mem_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"if2id_static_npc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"id2reg_raddr1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"id2reg_raddr2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"id2reg_rd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"id2reg_rd_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"id2ex_fu_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"id2ex_alu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+14,0,"id2ex_lsu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"id2ex_bqu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+154,0,"id2ex_op1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"id2ex_op2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"id2ex_op3_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"id2ex_op4_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"id2ex_op5_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"id2ex_mem_signed_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"reg2id_rdata1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"reg2id_rdata2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"ex2reg_gpr_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"ex2if_jump_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"ex2if_jump_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_IF", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_ID", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+236,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"fu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+20,0,"lsu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"bqu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+159,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"op3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"op4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"op5_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"mem_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+24,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"gpr_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+163,0,"jump_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"jump_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"alu_out_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ysyx_25050136_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+29,0,"lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"load_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ysyx_25050136_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+30,0,"bqu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_BQU", VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"static_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"rdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"raddr1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"rdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"raddr2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"fu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"alu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+36,0,"lsu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"bqu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+166,0,"op1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"op2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"op3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"op4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"op5_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"mem_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+40,0,"mem_signed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"rd_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+49,0,"type_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"type_op_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"type_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"type_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"type_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"type_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"type_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"type_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"type_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"funct3_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"funct3_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"funct3_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"funct3_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"funct3_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"funct3_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"funct3_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"funct3_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"funct7_0000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"funct7_0100000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"inst_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"inst_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"inst_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"inst_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"inst_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"inst_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"inst_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"inst_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"inst_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"inst_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"inst_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"inst_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"inst_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"inst_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"inst_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"inst_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"inst_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"inst_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"inst_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"inst_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"inst_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"inst_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"inst_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"inst_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inst_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"inst_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"inst_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"inst_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"inst_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"inst_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"inst_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"inst_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"inst_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"inst_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"inst_Rtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"inst_Itype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"inst_Stype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"inst_Utype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"inst_Btype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"inst_Jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+118,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dynamic_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"dynamic_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"static_npc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+235,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+122,0,"wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"raddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"rdata1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"raddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+147,0,"rdata2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gpr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+186+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+236,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+126,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+173,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+175,0,"add_sub_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"add_sub_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"op1_xor_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"sra_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"sll_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"srl_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+236,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+129,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+183,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+185,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+236,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"mem_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+131,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"load_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_top(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_top\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25050136_NPC___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25050136_NPC___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_register(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_register\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25050136_NPC___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25050136_NPC___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25050136_NPC___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25050136_NPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_const_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_const_0\n"); );
    // Init
    Vysyx_25050136_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_NPC___024root*>(voidSelf);
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25050136_NPC___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_const_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_const_0_sub_0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+235,(5U),32);
    bufp->fullIData(oldp+236,(0x20U),32);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_full_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_full_0\n"); );
    // Init
    Vysyx_25050136_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_NPC___024root*>(voidSelf);
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25050136_NPC___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_full_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_full_0_sub_0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSymsp->TOP__ysyx_25050136_NPC.clk));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__ysyx_25050136_NPC.reset));
    bufp->fullIData(oldp+3,(vlSymsp->TOP__ysyx_25050136_NPC.inst_i),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__ysyx_25050136_NPC.mem_rdata_i),32);
    bufp->fullBit(oldp+5,(vlSymsp->TOP__ysyx_25050136_NPC.mem_ren_o));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__ysyx_25050136_NPC.mem_wen_o));
    bufp->fullCData(oldp+7,(vlSymsp->TOP__ysyx_25050136_NPC.mem_len_o),3);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_raddr1_o),5);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_raddr2_o),5);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_rd_o),5);
    bufp->fullBit(oldp+11,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_rd_en_o));
    bufp->fullCData(oldp+12,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_fu_o),3);
    bufp->fullSData(oldp+13,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_alu_op_o),15);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_lsu_op_o),2);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_bqu_op_o),3);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op4_o),32);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_mem_signed_o));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__fu_i),3);
    bufp->fullSData(oldp+19,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__alu_op_i),15);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__lsu_op_i),2);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__bqu_op_i),3);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op4_i),32);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_len_i),3);
    bufp->fullBit(oldp+24,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_signed_i));
    bufp->fullIData(oldp+25,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_rdata_i),32);
    bufp->fullBit(oldp+26,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_ren_o));
    bufp->fullBit(oldp+27,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_wen_o));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__alu_en));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__lsu_en));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__bqu_en));
    bufp->fullIData(oldp+31,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_i),32);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__raddr1_o),5);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__raddr2_o),5);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__fu_o),3);
    bufp->fullSData(oldp+35,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__alu_op_o),15);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__lsu_op_o),2);
    bufp->fullCData(oldp+37,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__bqu_op_o),3);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op4_o),32);
    bufp->fullCData(oldp+39,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__mem_len_o),3);
    bufp->fullBit(oldp+40,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__mem_signed_o));
    bufp->fullCData(oldp+41,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd_o),5);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd_en_o));
    bufp->fullCData(oldp+43,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__opcode),7);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd),5);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rs1),5);
    bufp->fullCData(oldp+46,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rs2),5);
    bufp->fullCData(oldp+47,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3),3);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct7),7);
    bufp->fullBit(oldp+49,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_load));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_op_imm));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_auipc));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_store));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_op));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_lui));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_branch));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_jalr));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_jal));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_000));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_001));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_010));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_011));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_100));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_101));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_110));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_111));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct7_0000000));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct7_0100000));
    bufp->fullBit(oldp+68,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lui));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_auipc));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_jal));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_jalr));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_beq));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bne));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_blt));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bge));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bltu));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bgeu));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lb));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lh));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lw));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lbu));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lhu));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sb));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sh));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sw));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_addi));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_slti));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sltiu));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_xori));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_ori));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_andi));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_slli));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_srli));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_srai));
    bufp->fullBit(oldp+95,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_add));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sub));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sll));
    bufp->fullBit(oldp+98,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_slt));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sltu));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_xor));
    bufp->fullBit(oldp+101,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_srl));
    bufp->fullBit(oldp+102,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sra));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_or));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_and));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_ebreak));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Rtype));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Itype));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Stype));
    bufp->fullBit(oldp+109,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Utype));
    bufp->fullBit(oldp+110,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Btype));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Jtype));
    bufp->fullIData(oldp+112,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immI),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immS),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immB),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immU),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immJ),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__imm),32);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__clk));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__reset));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__clk));
    bufp->fullCData(oldp+121,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__waddr_i),5);
    bufp->fullBit(oldp+122,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__wen_i));
    bufp->fullCData(oldp+123,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__raddr1_i),5);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__raddr2_i),5);
    bufp->fullSData(oldp+125,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__operation_i),15);
    bufp->fullBit(oldp+126,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__en_i));
    bufp->fullIData(oldp+127,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__op2_i),32);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__operation_i),3);
    bufp->fullBit(oldp+129,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__en_i));
    bufp->fullCData(oldp+130,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_len_i),3);
    bufp->fullBit(oldp+131,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_signed_i));
    bufp->fullIData(oldp+132,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_rdata_i),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__ysyx_25050136_NPC.mem_wdata_o),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op2_o),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op5_o),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__reg2id_rdata1_o),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__reg2id_rdata2_o),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op2_i),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op5_i),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_wdata_o),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__load_data_o),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata1_i),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata2_i),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op2_o),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op5_o),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata1_o),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata2_o),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op2_i),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__add_sub_op2),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__store_data_i),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_wdata_o),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__load_data_o),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__ysyx_25050136_NPC.mem_addr_o),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op1_o),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op3_o),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__ex2reg_gpr_data_o),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__ex2if_jump_addr_o),32);
    bufp->fullBit(oldp+158,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__ex2if_jump_en_o));
    bufp->fullIData(oldp+159,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op1_i),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op3_i),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_addr_o),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__gpr_data_o),32);
    bufp->fullBit(oldp+163,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_en_o));
    bufp->fullIData(oldp+164,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_addr_o),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__alu_out_o),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op1_o),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op3_o),32);
    bufp->fullBit(oldp+168,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_valid_i));
    bufp->fullIData(oldp+169,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_npc_i),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__wdata_i),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op1_i),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__out_o),32);
    bufp->fullQData(oldp+173,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__add_sub_result),33);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__add_sub_op1),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op1_xor_op2),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__sra_result),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__sll_result),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__srl_result),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__out),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__op1_i),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__out_o),32);
    bufp->fullQData(oldp+183,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__result_add),33);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__result),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[0]),32);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[1]),32);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[2]),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[3]),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[4]),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[5]),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[6]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[7]),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[8]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[9]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[10]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[11]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[12]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[13]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[14]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[15]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[16]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[17]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[18]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[19]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[20]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[21]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[22]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[23]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[24]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[25]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[26]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[27]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[28]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[29]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[30]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[31]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__ysyx_25050136_NPC.pc_o),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__if2id_static_npc_o),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__pc_i),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__static_npc_i),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__static_npc_o),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__pc_o),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__pc),32);
    bufp->fullBit(oldp+225,(vlSelfRef.clk));
    bufp->fullBit(oldp+226,(vlSelfRef.reset));
    bufp->fullIData(oldp+227,(vlSelfRef.inst_i),32);
    bufp->fullIData(oldp+228,(vlSelfRef.mem_rdata_i),32);
    bufp->fullIData(oldp+229,(vlSelfRef.mem_wdata_o),32);
    bufp->fullIData(oldp+230,(vlSelfRef.mem_addr_o),32);
    bufp->fullBit(oldp+231,(vlSelfRef.mem_ren_o));
    bufp->fullBit(oldp+232,(vlSelfRef.mem_wen_o));
    bufp->fullCData(oldp+233,(vlSelfRef.mem_len_o),3);
    bufp->fullIData(oldp+234,(vlSelfRef.pc_o),32);
}
