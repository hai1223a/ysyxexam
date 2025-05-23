// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136_NPC__Syms.h"


VL_ATTR_COLD void Vysyx_25050136_NPC___024root__trace_init_sub__TOP__0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"mem_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ysyx_25050136_NPC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"TOP_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"TOP_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"mem_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"if2id_static_npc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"id2reg_raddr1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"id2reg_raddr2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"id2reg_rd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+59,0,"id2reg_rd_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"id2ex_fu_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"id2ex_alu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"id2ex_lsu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"id2ex_bqu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"id2ex_op1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"id2ex_op2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"id2ex_op3_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"id2ex_op4_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"id2ex_op5_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"id2ex_mem_signed_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"reg2id_rdata1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"reg2id_rdata2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"ex2reg_gpr_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"ex2if_jump_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"ex2if_jump_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"fu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"lsu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"bqu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"op3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"op4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"op5_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"mem_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+105,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"gpr_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"jump_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"jump_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"alu_out_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"load_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"bqu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+105,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+68,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+6,0,"add_sub_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"add_sub_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_BQU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+5,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+10,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+70,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"mem_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+105,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"load_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_ID", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"static_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"rdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"raddr1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"rdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"raddr2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"fu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"alu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"lsu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"bqu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"op1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"op2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"op3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"op4_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"op5_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"mem_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+105,0,"mem_signed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+59,0,"rd_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+58,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+73,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+74,0,"type_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"type_op_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"type_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"type_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"type_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"type_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"type_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"type_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"type_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"funct3_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"funct3_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"funct3_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"funct3_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"funct3_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"funct3_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"funct3_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"funct3_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"funct7_0000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"funct7_0100000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"inst_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"inst_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"inst_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"inst_Rtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inst_Itype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"inst_Stype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"inst_Utype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"inst_Btype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"inst_Jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_IF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"dynamic_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"dynamic_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"static_npc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+59,0,"wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"raddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rdata1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"raddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"rdata2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gpr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
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
    bufp->fullIData(oldp+103,(5U),32);
    bufp->fullIData(oldp+104,(0x20U),32);
    bufp->fullBit(oldp+105,(1U));
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
    bufp->fullCData(oldp+1,((1U | (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                    << 2U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                              << 1U)))),3);
    bufp->fullCData(oldp+2,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o),2);
    bufp->fullIData(oldp+3,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o),32);
    bufp->fullBit(oldp+4,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
    bufp->fullBit(oldp+5,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
    bufp->fullIData(oldp+6,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o),32);
    bufp->fullIData(oldp+7,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o),32);
    bufp->fullIData(oldp+8,(vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o),32);
    bufp->fullIData(oldp+9,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
    bufp->fullQData(oldp+10,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
    bufp->fullIData(oldp+12,(((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->fullIData(oldp+13,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
    bufp->fullIData(oldp+14,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    bufp->fullBit(oldp+46,(vlSelfRef.clk));
    bufp->fullBit(oldp+47,(vlSelfRef.reset));
    bufp->fullIData(oldp+48,(vlSelfRef.inst_i),32);
    bufp->fullIData(oldp+49,(vlSelfRef.mem_rdata_i),32);
    bufp->fullIData(oldp+50,(vlSelfRef.mem_wdata_o),32);
    bufp->fullIData(oldp+51,(vlSelfRef.mem_addr_o),32);
    bufp->fullBit(oldp+52,(vlSelfRef.mem_ren_o));
    bufp->fullBit(oldp+53,(vlSelfRef.mem_wen_o));
    bufp->fullCData(oldp+54,(vlSelfRef.mem_len_o),3);
    bufp->fullIData(oldp+55,(vlSelfRef.pc_o),32);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelfRef.inst_i 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelfRef.inst_i 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelfRef.inst_i 
                                       >> 7U))),5);
    bufp->fullBit(oldp+59,((1U & (~ ((0x23U == (0x7fU 
                                                & vlSelfRef.inst_i)) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelfRef.inst_i)))))));
    bufp->fullCData(oldp+60,((((0x23U == (0x7fU & vlSelfRef.inst_i)) 
                               << 1U) | (3U == (0x7fU 
                                                & vlSelfRef.inst_i)))),2);
    bufp->fullCData(oldp+61,((((0x63U == (0x7fU & vlSelfRef.inst_i)) 
                               << 2U) | (((0x6fU == 
                                           (0x7fU & vlSelfRef.inst_i)) 
                                          << 1U) | 
                                         (0x67U == 
                                          (0x7fU & vlSelfRef.inst_i))))),3);
    bufp->fullIData(oldp+62,((((0x33U == (0x7fU & vlSelfRef.inst_i)) 
                               | (0x63U == (0x7fU & vlSelfRef.inst_i)))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                               : (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                   | ((0x13U == (0x7fU 
                                                 & vlSelfRef.inst_i)) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelfRef.inst_i))))
                                   ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                                   : 0U))),32);
    bufp->fullIData(oldp+63,(((0x67U == (0x7fU & vlSelfRef.inst_i))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o
                               : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->fullIData(oldp+64,(((3U == (0x7fU & vlSelfRef.inst_i))
                               ? ((4U == (IData)(vlSelfRef.mem_len_o))
                                   ? vlSelfRef.mem_rdata_i
                                   : ((2U == (IData)(vlSelfRef.mem_len_o))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.mem_rdata_i 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelfRef.mem_rdata_i))
                                       : ((1U == (IData)(vlSelfRef.mem_len_o))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.mem_rdata_i 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.mem_rdata_i))
                                           : 0U))) : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)),32);
    bufp->fullIData(oldp+65,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                               ? ((0x67U == (0x7fU 
                                             & vlSelfRef.inst_i))
                                   ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                               >> 1U)) 
                                      << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                               : 0U)),32);
    bufp->fullBit(oldp+66,(((0x67U == (0x7fU & vlSelfRef.inst_i)) 
                            | ((0x6fU == (0x7fU & vlSelfRef.inst_i)) 
                               | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                  & (0U != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out))))));
    bufp->fullIData(oldp+67,(((4U == (IData)(vlSelfRef.mem_len_o))
                               ? vlSelfRef.mem_rdata_i
                               : ((2U == (IData)(vlSelfRef.mem_len_o))
                                   ? (((- (IData)((1U 
                                                   & (vlSelfRef.mem_rdata_i 
                                                      >> 0xfU)))) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelfRef.mem_rdata_i))
                                   : ((1U == (IData)(vlSelfRef.mem_len_o))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.mem_rdata_i 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelfRef.mem_rdata_i))
                                       : 0U)))),32);
    bufp->fullQData(oldp+68,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o)) 
                                                + (QData)((IData)(
                                                                  (((0x33U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.inst_i)) 
                                                                    | (0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.inst_i)))
                                                                    ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o
                                                                    : 
                                                                   (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                                                     | ((0x13U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.inst_i)) 
                                                                        | (0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.inst_i))))
                                                                     ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o
                                                                     : 0U))))))),33);
    bufp->fullIData(oldp+70,(((0x67U == (0x7fU & vlSelfRef.inst_i))
                               ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                           >> 1U)) 
                                  << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
    bufp->fullCData(oldp+71,((0x7fU & vlSelfRef.inst_i)),7);
    bufp->fullCData(oldp+72,((7U & (vlSelfRef.inst_i 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+73,((vlSelfRef.inst_i >> 0x19U)),7);
    bufp->fullBit(oldp+74,((3U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+75,((0x13U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+76,((0x17U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+77,((0x23U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+78,((0x33U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+79,((0x37U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+80,((0x63U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+81,((0x67U == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+82,((0x6fU == (0x7fU & vlSelfRef.inst_i))));
    bufp->fullBit(oldp+83,((0U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+84,((1U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+85,((2U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+86,((3U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+87,((4U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+88,((5U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+89,((6U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+90,((7U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+91,((0U == (vlSelfRef.inst_i 
                                   >> 0x19U))));
    bufp->fullBit(oldp+92,((0x20U == (vlSelfRef.inst_i 
                                      >> 0x19U))));
    bufp->fullBit(oldp+93,((IData)((0x13U == (0x707fU 
                                              & vlSelfRef.inst_i)))));
    bufp->fullBit(oldp+94,((IData)((0x2023U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->fullBit(oldp+95,((0x100073U == vlSelfRef.inst_i)));
    bufp->fullBit(oldp+96,(((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                            | ((3U == (0x7fU & vlSelfRef.inst_i)) 
                               | (0x67U == (0x7fU & vlSelfRef.inst_i))))));
    bufp->fullBit(oldp+97,(((0x17U == (0x7fU & vlSelfRef.inst_i)) 
                            | (0x37U == (0x7fU & vlSelfRef.inst_i)))));
    bufp->fullIData(oldp+98,((((- (IData)((vlSelfRef.inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelfRef.inst_i 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+99,((((- (IData)((vlSelfRef.inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelfRef.inst_i 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelfRef.inst_i 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+100,((((- (IData)((vlSelfRef.inst_i 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.inst_i 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.inst_i 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.inst_i 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+101,((0xfffff000U & vlSelfRef.inst_i)),32);
    bufp->fullIData(oldp+102,((((- (IData)((vlSelfRef.inst_i 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.inst_i) 
                                              | (0x800U 
                                                 & (vlSelfRef.inst_i 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.inst_i 
                                                   >> 0x14U))))),32);
}
