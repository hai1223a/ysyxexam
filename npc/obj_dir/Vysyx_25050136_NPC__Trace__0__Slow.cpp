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
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"mem_wmask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ysyx_25050136_NPC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"TOP_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"TOP_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"mem_wmask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"if2id_static_npc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"id2reg_raddr1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"id2reg_raddr2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"id2reg_rd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"id2reg_rd_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"id2ex_fu_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"id2ex_alu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+8,0,"id2ex_lsu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"id2ex_bqu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"id2ex_csru_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"id2ex_alu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"id2ex_alu_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"id2ex_lsu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"id2ex_bqu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"id2ex_bqu_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"id2ex_csru_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"id2ex_csru_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+18,0,"id2ex_mem_signed_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"id2ex_csru_wen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"id2ex_csru_ren_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"reg2id_rdata1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"reg2id_rdata2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"ex2reg_gpr_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"ex2if_jump_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"ex2if_jump_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ysyx_25050136_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"fu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+8,0,"lsu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"bqu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"csru_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"alu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"alu_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"bqu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"bqu_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"lsu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"csru_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"csru_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+19,0,"csru_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"csru_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"mem_wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+18,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,0,"mem_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"mem_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"gpr_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"jump_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"jump_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"alu_out_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"load_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"bqu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"bqu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"csru_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"csru_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ysyx_25050136_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+26,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+33,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+11,0,"add_sub_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"add_sub_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"op1_xor_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"sra_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"sll_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"srl_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_BQU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+29,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+41,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+43,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_CSRU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+16,0,"csru_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"csru_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+20,0,"csru_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"csru_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"csru_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"csr_wdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"csr_wdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"csr_waddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+47,0,"csr_waddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+48,0,"csr_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+49,0,"csr_wen1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"csr_wen2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"csr_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_CSR_File", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"csr_waddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+49,0,"csr_wen1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"csr_wdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"csr_waddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+50,0,"csr_wen2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"csr_wdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"csr_raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+51,0,"csr_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"MEPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+181,0,"MCAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+182,0,"MTVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+183,0,"MSTATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+52,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"mepc_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"mcause_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"mtvec_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+59,0,"mstatus_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"mepc_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"mcause_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"mtvec_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"mstatus_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"mem_wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+18,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"load_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_ID", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"static_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"rdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"raddr1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"raddr2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"fu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"alu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+8,0,"lsu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"bqu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"csru_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+11,0,"alu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"alu_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"bqu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"bqu_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"lsu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"csru_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"csru_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+20,0,"csru_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"csru_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"mem_wmask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+18,0,"mem_signed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"rd_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+4,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+67,0,"type_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"type_op_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"type_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"type_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"type_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"type_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"type_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"type_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"type_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"type_system",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"funct3_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"funct3_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"funct3_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"funct3_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"funct3_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"funct3_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"funct3_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"funct3_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"funct7_0000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"funct7_0100000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"inst_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"inst_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"inst_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"inst_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"inst_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"inst_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"inst_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"inst_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"inst_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inst_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"inst_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"inst_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"inst_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"inst_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"inst_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"inst_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"inst_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"inst_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"inst_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"inst_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"inst_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"inst_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"inst_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"inst_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"inst_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"inst_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"inst_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"inst_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"inst_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"inst_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"inst_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"inst_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"inst_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"inst_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"inst_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"inst_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"inst_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"inst_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"inst_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"inst_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"inst_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"inst_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"inst_Rtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"inst_Itype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"inst_Stype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"inst_Utype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"inst_Btype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"inst_Jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_IF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"dynamic_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"dynamic_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"static_npc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"raddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"rdata1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"raddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"rdata2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gpr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+136+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
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
    bufp->fullIData(oldp+178,(5U),32);
    bufp->fullIData(oldp+179,(0x20U),32);
    bufp->fullSData(oldp+180,(0x341U),12);
    bufp->fullSData(oldp+181,(0x342U),12);
    bufp->fullSData(oldp+182,(0x305U),12);
    bufp->fullSData(oldp+183,(0x300U),12);
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
    bufp->fullIData(oldp+1,(((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->fullCData(oldp+2,((0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                      >> 7U))),5);
    bufp->fullBit(oldp+5,((1U & (~ ((0x23U == (0x7fU 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))));
    bufp->fullCData(oldp+6,(((((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                               << 3U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                         << 2U)) | 
                             (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
    bufp->fullSData(oldp+7,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
    bufp->fullCData(oldp+8,((((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                              << 1U) | (3U == (0x7fU 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))),2);
    bufp->fullCData(oldp+9,((((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                              << 2U) | (((0x6fU == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                         << 1U) | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))),3);
    bufp->fullCData(oldp+10,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
    bufp->fullIData(oldp+11,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
    bufp->fullIData(oldp+12,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
    bufp->fullIData(oldp+13,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                             [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+14,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                              [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xfU))]
                               : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->fullIData(oldp+15,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
    bufp->fullIData(oldp+16,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
    bufp->fullSData(oldp+17,((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+18,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
    bufp->fullBit(oldp+19,((1U & (~ (IData)(((0U == 
                                              (0xf8000U 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                             & ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
    bufp->fullBit(oldp+20,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                     & (0U == (0xf80U 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))));
    bufp->fullIData(oldp+21,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                             [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+22,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                               ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                       ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                   >> 1U)) 
                                          << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                   : 0U) : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
    bufp->fullBit(oldp+23,(((0x73U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                            | ((0x30200073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                               | ((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                     | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                        & ((~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                           & (0U != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
    bufp->fullIData(oldp+24,(vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata),32);
    bufp->fullIData(oldp+25,(vlSelfRef.ysyx_25050136_NPC__DOT__inst),32);
    bufp->fullBit(oldp+26,((1U & (~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
    bufp->fullIData(oldp+27,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
    bufp->fullBit(oldp+28,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
    bufp->fullBit(oldp+29,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
    bufp->fullIData(oldp+30,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                               ? ((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                   ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                               >> 1U)) 
                                      << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                               : 0U)),32);
    bufp->fullBit(oldp+31,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
    bufp->fullIData(oldp+32,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
    bufp->fullQData(oldp+33,((0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                                + VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
    bufp->fullIData(oldp+35,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
    bufp->fullIData(oldp+36,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
    bufp->fullIData(oldp+37,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                            (0x1fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+38,((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                              << (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+39,((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                              >> (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+40,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
    bufp->fullQData(oldp+41,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
    bufp->fullIData(oldp+43,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                               ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                           >> 1U)) 
                                  << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
    bufp->fullIData(oldp+44,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
    bufp->fullIData(oldp+45,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
    bufp->fullSData(oldp+46,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
    bufp->fullSData(oldp+47,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
    bufp->fullSData(oldp+48,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
    bufp->fullBit(oldp+49,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
    bufp->fullBit(oldp+50,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
    bufp->fullBit(oldp+51,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
    bufp->fullIData(oldp+52,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
    bufp->fullIData(oldp+53,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
    bufp->fullIData(oldp+54,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
    bufp->fullIData(oldp+55,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
    bufp->fullCData(oldp+56,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
    bufp->fullCData(oldp+57,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
    bufp->fullCData(oldp+58,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
    bufp->fullCData(oldp+59,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
    bufp->fullIData(oldp+60,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                               : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                   ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                   : 0U))),32);
    bufp->fullIData(oldp+61,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                               : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                   ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                   : 0U))),32);
    bufp->fullIData(oldp+62,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                               : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                   ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                   : 0U))),32);
    bufp->fullIData(oldp+63,(((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                               ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                               : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                   ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                   : 0U))),32);
    bufp->fullCData(oldp+64,((0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)),7);
    bufp->fullCData(oldp+65,((7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+66,((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+67,((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+68,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+69,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+70,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+71,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+72,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+73,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+74,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+75,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+76,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    bufp->fullBit(oldp+77,((0U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+78,((1U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+79,((2U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+80,((3U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+81,((4U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+82,((5U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+83,((6U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+84,((7U == (7U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+85,((0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                   >> 0x19U))));
    bufp->fullBit(oldp+86,((0x20U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                      >> 0x19U))));
    bufp->fullBit(oldp+87,((IData)((0x63U == (0x707fU 
                                              & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+88,((IData)((0x1063U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+89,((IData)((0x4063U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+90,((IData)((0x5063U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+91,((IData)((0x6063U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+92,((IData)((0x7063U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+93,((IData)((3U == (0x707fU 
                                           & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+94,((IData)((0x1003U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+95,((IData)((0x2003U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+96,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
    bufp->fullBit(oldp+97,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
    bufp->fullBit(oldp+98,((IData)((0x23U == (0x707fU 
                                              & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+99,((IData)((0x1023U == (0x707fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+100,((IData)((0x2023U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+101,((IData)((0x13U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+102,((IData)((0x2013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+103,((IData)((0x3013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+104,((IData)((0x4013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+105,((IData)((0x6013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+106,((IData)((0x7013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+107,((IData)((0x1013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+108,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                             & (0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+109,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
    bufp->fullBit(oldp+110,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                             & (0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+111,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
    bufp->fullBit(oldp+112,((IData)((0x1033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+113,((IData)((0x2033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+114,((IData)((0x3033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+115,((IData)((0x4033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+116,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
    bufp->fullBit(oldp+117,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                             & (0x20U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+118,((IData)((0x6033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+119,((IData)((0x7033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullBit(oldp+120,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
    bufp->fullBit(oldp+121,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
    bufp->fullBit(oldp+122,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
    bufp->fullBit(oldp+123,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
    bufp->fullBit(oldp+124,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
    bufp->fullBit(oldp+125,((0x30200073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    bufp->fullBit(oldp+126,((0x73U == vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    bufp->fullBit(oldp+127,((0x100073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    bufp->fullBit(oldp+128,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                             | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                | (0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))));
    bufp->fullBit(oldp+129,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                             | (0x37U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    bufp->fullIData(oldp+130,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                ? (0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0x14U))
                                : (((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                >> 0x14U)))),32);
    bufp->fullIData(oldp+131,((((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+132,((((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+133,((0xfffff000U & vlSelfRef.ysyx_25050136_NPC__DOT__inst)),32);
    bufp->fullIData(oldp+134,((((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                                              | (0x800U 
                                                 & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+135,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    bufp->fullBit(oldp+168,(vlSelfRef.clk));
    bufp->fullBit(oldp+169,(vlSelfRef.reset));
    bufp->fullIData(oldp+170,(vlSelfRef.mem_wdata_o),32);
    bufp->fullIData(oldp+171,(vlSelfRef.mem_addr_o),32);
    bufp->fullBit(oldp+172,(vlSelfRef.mem_ren_o));
    bufp->fullBit(oldp+173,(vlSelfRef.mem_wen_o));
    bufp->fullCData(oldp+174,(vlSelfRef.mem_wmask_o),4);
    bufp->fullIData(oldp+175,(vlSelfRef.pc_o),32);
    bufp->fullIData(oldp+176,(((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                ? ((0xfU == (IData)(vlSelfRef.mem_wmask_o))
                                    ? vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata
                                    : ((3U == (IData)(vlSelfRef.mem_wmask_o))
                                        ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                            : (0xffffU 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                        : ((1U == (IData)(vlSelfRef.mem_wmask_o))
                                            ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                                : (0xffU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                            : 0U)))
                                : ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                    : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o))),32);
    bufp->fullIData(oldp+177,(((0xfU == (IData)(vlSelfRef.mem_wmask_o))
                                ? vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata
                                : ((3U == (IData)(vlSelfRef.mem_wmask_o))
                                    ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                        : (0xffffU 
                                           & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                    : ((1U == (IData)(vlSelfRef.mem_wmask_o))
                                        ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                            : (0xffU 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                        : 0U)))),32);
}
