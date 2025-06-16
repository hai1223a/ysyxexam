// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_ID_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_ID_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_ID final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__raddr1_o,4,0);
        VL_OUT8(__PVT__raddr2_o,4,0);
        VL_OUT8(__PVT__fu_o,2,0);
        VL_OUT8(__PVT__lsu_op_o,1,0);
        VL_OUT8(__PVT__bqu_op_o,2,0);
        VL_OUT8(__PVT__mem_len_o,2,0);
        VL_OUT8(__PVT__mem_signed_o,0,0);
        VL_OUT8(__PVT__rd_o,4,0);
        VL_OUT8(__PVT__rd_en_o,0,0);
        CData/*6:0*/ __PVT__opcode;
        CData/*4:0*/ __PVT__rd;
        CData/*4:0*/ __PVT__rs1;
        CData/*4:0*/ __PVT__rs2;
        CData/*2:0*/ __PVT__funct3;
        CData/*6:0*/ __PVT__funct7;
        CData/*0:0*/ __PVT__type_load;
        CData/*0:0*/ __PVT__type_op_imm;
        CData/*0:0*/ __PVT__type_auipc;
        CData/*0:0*/ __PVT__type_store;
        CData/*0:0*/ __PVT__type_op;
        CData/*0:0*/ __PVT__type_lui;
        CData/*0:0*/ __PVT__type_branch;
        CData/*0:0*/ __PVT__type_jalr;
        CData/*0:0*/ __PVT__type_jal;
        CData/*0:0*/ __PVT__funct3_000;
        CData/*0:0*/ __PVT__funct3_001;
        CData/*0:0*/ __PVT__funct3_010;
        CData/*0:0*/ __PVT__funct3_011;
        CData/*0:0*/ __PVT__funct3_100;
        CData/*0:0*/ __PVT__funct3_101;
        CData/*0:0*/ __PVT__funct3_110;
        CData/*0:0*/ __PVT__funct3_111;
        CData/*0:0*/ __PVT__funct7_0000000;
        CData/*0:0*/ __PVT__funct7_0100000;
        CData/*0:0*/ __PVT__inst_lui;
        CData/*0:0*/ __PVT__inst_auipc;
        CData/*0:0*/ __PVT__inst_jal;
        CData/*0:0*/ __PVT__inst_jalr;
        CData/*0:0*/ __PVT__inst_beq;
        CData/*0:0*/ __PVT__inst_bne;
        CData/*0:0*/ __PVT__inst_blt;
        CData/*0:0*/ __PVT__inst_bge;
        CData/*0:0*/ __PVT__inst_bltu;
        CData/*0:0*/ __PVT__inst_bgeu;
        CData/*0:0*/ __PVT__inst_lb;
        CData/*0:0*/ __PVT__inst_lh;
        CData/*0:0*/ __PVT__inst_lw;
        CData/*0:0*/ __PVT__inst_lbu;
        CData/*0:0*/ __PVT__inst_lhu;
        CData/*0:0*/ __PVT__inst_sb;
        CData/*0:0*/ __PVT__inst_sh;
        CData/*0:0*/ __PVT__inst_sw;
        CData/*0:0*/ __PVT__inst_addi;
        CData/*0:0*/ __PVT__inst_slti;
        CData/*0:0*/ __PVT__inst_sltiu;
        CData/*0:0*/ __PVT__inst_xori;
        CData/*0:0*/ __PVT__inst_ori;
        CData/*0:0*/ __PVT__inst_andi;
        CData/*0:0*/ __PVT__inst_slli;
        CData/*0:0*/ __PVT__inst_srli;
        CData/*0:0*/ __PVT__inst_srai;
        CData/*0:0*/ __PVT__inst_add;
        CData/*0:0*/ __PVT__inst_sub;
        CData/*0:0*/ __PVT__inst_sll;
    };
    struct {
        CData/*0:0*/ __PVT__inst_slt;
        CData/*0:0*/ __PVT__inst_sltu;
        CData/*0:0*/ __PVT__inst_xor;
        CData/*0:0*/ __PVT__inst_srl;
        CData/*0:0*/ __PVT__inst_sra;
        CData/*0:0*/ __PVT__inst_or;
        CData/*0:0*/ __PVT__inst_and;
        CData/*0:0*/ __PVT__inst_ebreak;
        CData/*0:0*/ __PVT__inst_Rtype;
        CData/*0:0*/ __PVT__inst_Itype;
        CData/*0:0*/ __PVT__inst_Stype;
        CData/*0:0*/ __PVT__inst_Utype;
        CData/*0:0*/ __PVT__inst_Btype;
        CData/*0:0*/ __PVT__inst_Jtype;
        VL_OUT16(__PVT__alu_op_o,14,0);
        VL_IN(__PVT__inst_i,31,0);
        VL_IN(__PVT__pc_i,31,0);
        VL_IN(__PVT__static_npc_i,31,0);
        VL_IN(__PVT__rdata1_i,31,0);
        VL_IN(__PVT__rdata2_i,31,0);
        VL_OUT(__PVT__op1_o,31,0);
        VL_OUT(__PVT__op2_o,31,0);
        VL_OUT(__PVT__op3_o,31,0);
        VL_OUT(__PVT__op4_o,31,0);
        VL_OUT(__PVT__op5_o,31,0);
        IData/*31:0*/ __PVT__immI;
        IData/*31:0*/ __PVT__immS;
        IData/*31:0*/ __PVT__immB;
        IData/*31:0*/ __PVT__immU;
        IData/*31:0*/ __PVT__immJ;
        IData/*31:0*/ __PVT__imm;
    };

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_ID(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_ID();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_ID);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
