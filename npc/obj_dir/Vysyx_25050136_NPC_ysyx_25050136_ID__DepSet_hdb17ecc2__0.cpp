// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_ID.h"

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__inst_ebreak = (0x100073U == vlSelfRef.__PVT__inst_i);
    vlSelfRef.__PVT__rd = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 7U, 5U));
    vlSelfRef.__PVT__rs1 = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0xfU, 5U));
    vlSelfRef.__PVT__rs2 = (0x1fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x14U, 5U));
    vlSelfRef.__PVT__immS = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,7,5, 
                                                        (0x7fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x19U, 7U)), 
                                                        (0x1fU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 7U, 5U))));
    vlSelfRef.__PVT__immB = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_REPLICATE_IOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x1fU)), 0x14U)), 
                                          VL_CONCAT_III(12,1,11, 
                                                        (1U 
                                                         & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst_i, 7U)), 
                                                        VL_CONCAT_III(11,6,5, 
                                                                      (0x3fU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x19U, 6U)), 
                                                                      VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 8U, 4U)), 0U))));
    vlSelfRef.__PVT__immU = VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0xcU, 0x14U)), 0U);
    vlSelfRef.__PVT__immJ = VL_CONCAT_III(32,12,20, 
                                          (0xfffU & VL_REPLICATE_IOI(1,
                                                                     (1U 
                                                                      & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x1fU)), 0xcU)), 
                                          VL_CONCAT_III(20,9,11, 
                                                        VL_CONCAT_III(9,8,1, 
                                                                      (0xffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0xcU, 8U)), 
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x14U))), 
                                                        VL_CONCAT_III(11,10,1, 
                                                                      (0x3ffU 
                                                                       & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x15U, 0xaU)), 0U)));
    vlSelfRef.__PVT__funct7 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x19U, 7U));
    vlSelfRef.__PVT__funct3 = (7U & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0xcU, 3U));
    vlSelfRef.__PVT__opcode = (0x7fU & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0U, 7U));
    vlSelfRef.__PVT__rd_o = vlSelfRef.__PVT__rd;
    vlSelfRef.__PVT__raddr1_o = vlSelfRef.__PVT__rs1;
    vlSelfRef.__PVT__raddr2_o = vlSelfRef.__PVT__rs2;
    vlSelfRef.__PVT__funct7_0000000 = (0U == (IData)(vlSelfRef.__PVT__funct7));
    vlSelfRef.__PVT__funct7_0100000 = (0x20U == (IData)(vlSelfRef.__PVT__funct7));
    vlSelfRef.__PVT__funct3_011 = (3U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__funct3_010 = (2U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__funct3_111 = (7U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__funct3_110 = (6U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__funct3_100 = (4U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__funct3_001 = (1U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__funct3_000 = (0U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__funct3_101 = (5U == (IData)(vlSelfRef.__PVT__funct3));
    vlSelfRef.__PVT__type_lui = (0x37U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_jal = (0x6fU == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_jalr = (0x67U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_store = (0x23U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_auipc = (0x17U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_load = (3U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_op = (0x33U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_branch = (0x63U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__type_op_imm = (0x13U == (IData)(vlSelfRef.__PVT__opcode));
    vlSelfRef.__PVT__inst_lui = vlSelfRef.__PVT__type_lui;
    vlSelfRef.__PVT__inst_jal = vlSelfRef.__PVT__type_jal;
    vlSelfRef.__PVT__inst_Jtype = vlSelfRef.__PVT__type_jal;
    VL_ASSIGNBIT_II(0U, vlSelfRef.__PVT__alu_op_o, 
                    (((IData)(vlSelfRef.__PVT__type_jal) 
                      | (IData)(vlSelfRef.__PVT__type_jalr)) 
                     | (IData)(vlSelfRef.__PVT__type_lui)));
    vlSelfRef.__PVT__inst_jalr = vlSelfRef.__PVT__type_jalr;
    vlSelfRef.__PVT__inst_sb = ((IData)(vlSelfRef.__PVT__type_store) 
                                & (IData)(vlSelfRef.__PVT__funct3_000));
    vlSelfRef.__PVT__inst_sh = ((IData)(vlSelfRef.__PVT__type_store) 
                                & (IData)(vlSelfRef.__PVT__funct3_001));
    vlSelfRef.__PVT__inst_sw = ((IData)(vlSelfRef.__PVT__type_store) 
                                & (IData)(vlSelfRef.__PVT__funct3_010));
    vlSelfRef.__PVT__inst_Stype = vlSelfRef.__PVT__type_store;
    vlSelfRef.__PVT__inst_auipc = vlSelfRef.__PVT__type_auipc;
    vlSelfRef.__PVT__inst_Utype = ((IData)(vlSelfRef.__PVT__type_auipc) 
                                   | (IData)(vlSelfRef.__PVT__type_lui));
    vlSelfRef.__PVT__lsu_op_o = VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__type_store), (IData)(vlSelfRef.__PVT__type_load));
    vlSelfRef.__PVT__inst_lb = ((IData)(vlSelfRef.__PVT__type_load) 
                                & (IData)(vlSelfRef.__PVT__funct3_000));
    vlSelfRef.__PVT__inst_lh = ((IData)(vlSelfRef.__PVT__type_load) 
                                & (IData)(vlSelfRef.__PVT__funct3_001));
    vlSelfRef.__PVT__inst_lw = ((IData)(vlSelfRef.__PVT__type_load) 
                                & (IData)(vlSelfRef.__PVT__funct3_010));
    vlSelfRef.__PVT__inst_lbu = ((IData)(vlSelfRef.__PVT__type_load) 
                                 & (IData)(vlSelfRef.__PVT__funct3_100));
    vlSelfRef.__PVT__inst_lhu = ((IData)(vlSelfRef.__PVT__type_load) 
                                 & (IData)(vlSelfRef.__PVT__funct3_101));
    vlSelfRef.__PVT__inst_Rtype = vlSelfRef.__PVT__type_op;
    vlSelfRef.__PVT__inst_slt = ((IData)(vlSelfRef.__PVT__type_op) 
                                 & (IData)(vlSelfRef.__PVT__funct3_010));
    vlSelfRef.__PVT__inst_sltu = ((IData)(vlSelfRef.__PVT__type_op) 
                                  & (IData)(vlSelfRef.__PVT__funct3_011));
    vlSelfRef.__PVT__inst_and = ((IData)(vlSelfRef.__PVT__type_op) 
                                 & (IData)(vlSelfRef.__PVT__funct3_111));
    vlSelfRef.__PVT__inst_xor = ((IData)(vlSelfRef.__PVT__type_op) 
                                 & (IData)(vlSelfRef.__PVT__funct3_100));
    vlSelfRef.__PVT__inst_or = ((IData)(vlSelfRef.__PVT__type_op) 
                                & (IData)(vlSelfRef.__PVT__funct3_110));
    vlSelfRef.__PVT__inst_add = (((IData)(vlSelfRef.__PVT__type_op) 
                                  & (IData)(vlSelfRef.__PVT__funct3_000)) 
                                 & (IData)(vlSelfRef.__PVT__funct7_0000000));
    vlSelfRef.__PVT__inst_sub = (((IData)(vlSelfRef.__PVT__type_op) 
                                  & (IData)(vlSelfRef.__PVT__funct3_000)) 
                                 & (IData)(vlSelfRef.__PVT__funct7_0100000));
    vlSelfRef.__PVT__inst_sll = ((IData)(vlSelfRef.__PVT__type_op) 
                                 & (IData)(vlSelfRef.__PVT__funct3_001));
    vlSelfRef.__PVT__inst_srl = ((IData)(vlSelfRef.__PVT__type_op) 
                                 & (IData)(vlSelfRef.__PVT__funct3_101));
    vlSelfRef.__PVT__inst_sra = (((IData)(vlSelfRef.__PVT__type_op) 
                                  & (IData)(vlSelfRef.__PVT__funct3_101)) 
                                 & (IData)(vlSelfRef.__PVT__funct7_0100000));
    vlSelfRef.__PVT__rd_en_o = (1U & VL_BITSEL_IIII(32, 
                                                    (((IData)(vlSelfRef.__PVT__type_store) 
                                                      | (IData)(vlSelfRef.__PVT__type_branch))
                                                      ? 0U
                                                      : 1U), 0U));
    vlSelfRef.__PVT__bqu_op_o = VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__type_branch), 
                                              VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__type_jal), (IData)(vlSelfRef.__PVT__type_jalr)));
    vlSelfRef.__PVT__fu_o = VL_CONCAT_III(3,1,2, (((IData)(vlSelfRef.__PVT__type_jalr) 
                                                   | (IData)(vlSelfRef.__PVT__type_jal)) 
                                                  | (IData)(vlSelfRef.__PVT__type_branch)), 
                                          VL_CONCAT_III(2,1,1, 
                                                        ((IData)(vlSelfRef.__PVT__type_store) 
                                                         | (IData)(vlSelfRef.__PVT__type_load)), 1U));
    vlSelfRef.__PVT__inst_beq = ((IData)(vlSelfRef.__PVT__type_branch) 
                                 & (IData)(vlSelfRef.__PVT__funct3_000));
    vlSelfRef.__PVT__inst_bne = ((IData)(vlSelfRef.__PVT__type_branch) 
                                 & (IData)(vlSelfRef.__PVT__funct3_001));
    vlSelfRef.__PVT__inst_blt = ((IData)(vlSelfRef.__PVT__type_branch) 
                                 & (IData)(vlSelfRef.__PVT__funct3_100));
    vlSelfRef.__PVT__inst_bge = ((IData)(vlSelfRef.__PVT__type_branch) 
                                 & (IData)(vlSelfRef.__PVT__funct3_101));
    vlSelfRef.__PVT__inst_bltu = ((IData)(vlSelfRef.__PVT__type_branch) 
                                  & (IData)(vlSelfRef.__PVT__funct3_110));
    vlSelfRef.__PVT__inst_bgeu = ((IData)(vlSelfRef.__PVT__type_branch) 
                                  & (IData)(vlSelfRef.__PVT__funct3_111));
    vlSelfRef.__PVT__inst_Btype = vlSelfRef.__PVT__type_branch;
    vlSelfRef.__PVT__inst_slti = ((IData)(vlSelfRef.__PVT__type_op_imm) 
                                  & (IData)(vlSelfRef.__PVT__funct3_010));
    vlSelfRef.__PVT__inst_sltiu = ((IData)(vlSelfRef.__PVT__type_op_imm) 
                                   & (IData)(vlSelfRef.__PVT__funct3_011));
    vlSelfRef.__PVT__inst_andi = ((IData)(vlSelfRef.__PVT__type_op_imm) 
                                  & (IData)(vlSelfRef.__PVT__funct3_111));
    vlSelfRef.__PVT__inst_addi = ((IData)(vlSelfRef.__PVT__type_op_imm) 
                                  & (IData)(vlSelfRef.__PVT__funct3_000));
    vlSelfRef.__PVT__inst_xori = ((IData)(vlSelfRef.__PVT__type_op_imm) 
                                  & (IData)(vlSelfRef.__PVT__funct3_100));
    vlSelfRef.__PVT__inst_ori = ((IData)(vlSelfRef.__PVT__type_op_imm) 
                                 & (IData)(vlSelfRef.__PVT__funct3_110));
    vlSelfRef.__PVT__inst_slli = ((IData)(vlSelfRef.__PVT__type_op_imm) 
                                  & (IData)(vlSelfRef.__PVT__funct3_001));
    vlSelfRef.__PVT__inst_srli = (((IData)(vlSelfRef.__PVT__type_op_imm) 
                                   & (IData)(vlSelfRef.__PVT__funct3_101)) 
                                  & (IData)(vlSelfRef.__PVT__funct7_0000000));
    vlSelfRef.__PVT__inst_Itype = (((IData)(vlSelfRef.__PVT__type_op_imm) 
                                    | (IData)(vlSelfRef.__PVT__type_load)) 
                                   | (IData)(vlSelfRef.__PVT__type_jalr));
    vlSelfRef.__PVT__inst_srai = (((IData)(vlSelfRef.__PVT__type_op_imm) 
                                   & (IData)(vlSelfRef.__PVT__funct3_101)) 
                                  & (IData)(vlSelfRef.__PVT__funct7_0100000));
    vlSelfRef.__PVT__mem_signed_o = (1U & VL_BITSEL_IIII(32, 
                                                         (((IData)(vlSelfRef.__PVT__inst_lhu) 
                                                           | (IData)(vlSelfRef.__PVT__inst_lbu))
                                                           ? 0U
                                                           : 1U), 0U));
    vlSelfRef.__PVT__mem_len_o = (7U & VL_SEL_IIII(32, 
                                                   (((IData)(vlSelfRef.__PVT__inst_lw) 
                                                     | (IData)(vlSelfRef.__PVT__inst_sw))
                                                     ? 4U
                                                     : 
                                                    ((((IData)(vlSelfRef.__PVT__inst_sh) 
                                                       | (IData)(vlSelfRef.__PVT__inst_lhu)) 
                                                      | (IData)(vlSelfRef.__PVT__inst_lh))
                                                      ? 2U
                                                      : 
                                                     ((((IData)(vlSelfRef.__PVT__inst_sb) 
                                                        | (IData)(vlSelfRef.__PVT__inst_lbu)) 
                                                       | (IData)(vlSelfRef.__PVT__inst_lb))
                                                       ? 1U
                                                       : 0U))), 0U, 3U));
    VL_ASSIGNSEL_II(15,2,0xaU, vlSelfRef.__PVT__alu_op_o, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__inst_bge), 
                                  (((IData)(vlSelfRef.__PVT__inst_blt) 
                                    | (IData)(vlSelfRef.__PVT__inst_slti)) 
                                   | (IData)(vlSelfRef.__PVT__inst_slt))));
    VL_ASSIGNSEL_II(15,2,8U, vlSelfRef.__PVT__alu_op_o, 
                    VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__inst_bgeu), 
                                  (((IData)(vlSelfRef.__PVT__inst_bltu) 
                                    | (IData)(vlSelfRef.__PVT__inst_sltiu)) 
                                   | (IData)(vlSelfRef.__PVT__inst_sltu))));
    VL_ASSIGNSEL_II(15,3,5U, vlSelfRef.__PVT__alu_op_o, 
                    VL_CONCAT_III(3,1,2, (IData)(vlSelfRef.__PVT__inst_bne), 
                                  VL_CONCAT_III(2,1,1, (IData)(vlSelfRef.__PVT__inst_beq), 
                                                ((IData)(vlSelfRef.__PVT__inst_and) 
                                                 | (IData)(vlSelfRef.__PVT__inst_andi)))));
    VL_ASSIGNBIT_II(1U, vlSelfRef.__PVT__alu_op_o, 
                    (((((IData)(vlSelfRef.__PVT__type_auipc) 
                        | (IData)(vlSelfRef.__PVT__type_store)) 
                       | (IData)(vlSelfRef.__PVT__type_load)) 
                      | (IData)(vlSelfRef.__PVT__inst_addi)) 
                     | (IData)(vlSelfRef.__PVT__inst_add)));
    VL_ASSIGNSEL_II(15,3,2U, vlSelfRef.__PVT__alu_op_o, 
                    VL_CONCAT_III(3,1,2, ((IData)(vlSelfRef.__PVT__inst_or) 
                                          | (IData)(vlSelfRef.__PVT__inst_ori)), 
                                  VL_CONCAT_III(2,1,1, 
                                                ((IData)(vlSelfRef.__PVT__inst_xor) 
                                                 | (IData)(vlSelfRef.__PVT__inst_xori)), (IData)(vlSelfRef.__PVT__inst_sub))));
    VL_ASSIGNSEL_II(15,3,0xcU, vlSelfRef.__PVT__alu_op_o, 
                    VL_CONCAT_III(3,1,2, ((IData)(vlSelfRef.__PVT__inst_srli) 
                                          | (IData)(vlSelfRef.__PVT__inst_srl)), 
                                  VL_CONCAT_III(2,1,1, 
                                                ((IData)(vlSelfRef.__PVT__inst_slli) 
                                                 | (IData)(vlSelfRef.__PVT__inst_sll)), 
                                                ((IData)(vlSelfRef.__PVT__inst_srai) 
                                                 | (IData)(vlSelfRef.__PVT__inst_sra)))));
    vlSelfRef.__PVT__immI = ((IData)(vlSelfRef.__PVT__inst_srai)
                              ? VL_EXTEND_II(32,5, 
                                             (0x1fU 
                                              & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x14U, 5U)))
                              : VL_CONCAT_III(32,20,12, 
                                              (0xfffffU 
                                               & VL_REPLICATE_IOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x1fU)), 0x14U)), 
                                              (0xfffU 
                                               & VL_SEL_IIII(32, vlSelfRef.__PVT__inst_i, 0x14U, 0xcU))));
    vlSelfRef.__PVT__imm = ((IData)(vlSelfRef.__PVT__inst_Itype)
                             ? vlSelfRef.__PVT__immI
                             : ((IData)(vlSelfRef.__PVT__inst_Stype)
                                 ? vlSelfRef.__PVT__immS
                                 : ((IData)(vlSelfRef.__PVT__inst_Utype)
                                     ? vlSelfRef.__PVT__immU
                                     : ((IData)(vlSelfRef.__PVT__inst_Btype)
                                         ? vlSelfRef.__PVT__immB
                                         : ((IData)(vlSelfRef.__PVT__inst_Jtype)
                                             ? vlSelfRef.__PVT__immJ
                                             : 0U)))));
    vlSelfRef.__PVT__op4_o = vlSelfRef.__PVT__imm;
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__1(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__op3_o = ((IData)(vlSelfRef.__PVT__type_jalr)
                               ? vlSelfRef.__PVT__rdata1_i
                               : vlSelfRef.__PVT__pc_i);
    vlSelfRef.__PVT__op1_o = ((IData)(vlSelfRef.__PVT__inst_lui)
                               ? vlSelfRef.__PVT__imm
                               : ((IData)(vlSelfRef.__PVT__inst_auipc)
                                   ? vlSelfRef.__PVT__pc_i
                                   : (((IData)(vlSelfRef.__PVT__inst_jal) 
                                       | (IData)(vlSelfRef.__PVT__inst_jalr))
                                       ? vlSelfRef.__PVT__static_npc_i
                                       : vlSelfRef.__PVT__rdata1_i)));
    vlSelfRef.__PVT__op5_o = vlSelfRef.__PVT__rdata2_i;
    vlSelfRef.__PVT__op2_o = (((IData)(vlSelfRef.__PVT__type_op) 
                               | (IData)(vlSelfRef.__PVT__type_branch))
                               ? vlSelfRef.__PVT__rdata2_i
                               : (((((IData)(vlSelfRef.__PVT__type_store) 
                                     | (IData)(vlSelfRef.__PVT__type_load)) 
                                    | (IData)(vlSelfRef.__PVT__type_op_imm)) 
                                   | (IData)(vlSelfRef.__PVT__type_auipc))
                                   ? vlSelfRef.__PVT__imm
                                   : 0U));
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_ID___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_ID___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__op5_o = vlSelfRef.__PVT__rdata2_i;
    vlSelfRef.__PVT__op2_o = (((IData)(vlSelfRef.__PVT__type_op) 
                               | (IData)(vlSelfRef.__PVT__type_branch))
                               ? vlSelfRef.__PVT__rdata2_i
                               : (((((IData)(vlSelfRef.__PVT__type_store) 
                                     | (IData)(vlSelfRef.__PVT__type_load)) 
                                    | (IData)(vlSelfRef.__PVT__type_op_imm)) 
                                   | (IData)(vlSelfRef.__PVT__type_auipc))
                                   ? vlSelfRef.__PVT__imm
                                   : 0U));
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_ID___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC_ysyx_25050136_ID___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__op3_o = ((IData)(vlSelfRef.__PVT__type_jalr)
                               ? vlSelfRef.__PVT__rdata1_i
                               : vlSelfRef.__PVT__pc_i);
    vlSelfRef.__PVT__op1_o = ((IData)(vlSelfRef.__PVT__inst_lui)
                               ? vlSelfRef.__PVT__imm
                               : ((IData)(vlSelfRef.__PVT__inst_auipc)
                                   ? vlSelfRef.__PVT__pc_i
                                   : (((IData)(vlSelfRef.__PVT__inst_jal) 
                                       | (IData)(vlSelfRef.__PVT__inst_jalr))
                                       ? vlSelfRef.__PVT__static_npc_i
                                       : vlSelfRef.__PVT__rdata1_i)));
}
