// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_NPC_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_NPC_H_  // guard

#include "verilated.h"
class Vysyx_25050136_NPC_ysyx_25050136_EX;
class Vysyx_25050136_NPC_ysyx_25050136_ID;
class Vysyx_25050136_NPC_ysyx_25050136_IF;
class Vysyx_25050136_NPC_ysyx_25050136_RegisterFile;


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_NPC final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_25050136_NPC_ysyx_25050136_IF* __PVT__u_ysyx_25050136_IF;
    Vysyx_25050136_NPC_ysyx_25050136_ID* __PVT__u_ysyx_25050136_ID;
    Vysyx_25050136_NPC_ysyx_25050136_EX* __PVT__u_ysyx_25050136_EX;
    Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* __PVT__u_ysyx_25050136_RegisterFile;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(mem_ren_o,0,0);
    VL_OUT8(mem_wen_o,0,0);
    VL_OUT8(mem_len_o,2,0);
    CData/*4:0*/ __PVT__id2reg_raddr1_o;
    CData/*4:0*/ __PVT__id2reg_raddr2_o;
    CData/*4:0*/ __PVT__id2reg_rd_o;
    CData/*0:0*/ __PVT__id2reg_rd_en_o;
    CData/*2:0*/ __PVT__id2ex_fu_o;
    CData/*1:0*/ __PVT__id2ex_lsu_op_o;
    CData/*2:0*/ __PVT__id2ex_bqu_op_o;
    CData/*0:0*/ __PVT__id2ex_mem_signed_o;
    CData/*0:0*/ __PVT__ex2if_jump_en_o;
    SData/*14:0*/ __PVT__id2ex_alu_op_o;
    VL_IN(inst_i,31,0);
    VL_IN(mem_rdata_i,31,0);
    VL_OUT(mem_wdata_o,31,0);
    VL_OUT(mem_addr_o,31,0);
    VL_OUT(pc_o,31,0);
    IData/*31:0*/ __PVT__if2id_static_npc_o;
    IData/*31:0*/ __PVT__id2ex_op1_o;
    IData/*31:0*/ __PVT__id2ex_op2_o;
    IData/*31:0*/ __PVT__id2ex_op3_o;
    IData/*31:0*/ __PVT__id2ex_op4_o;
    IData/*31:0*/ __PVT__id2ex_op5_o;
    IData/*31:0*/ __PVT__reg2id_rdata1_o;
    IData/*31:0*/ __PVT__reg2id_rdata2_o;
    IData/*31:0*/ __PVT__ex2reg_gpr_data_o;
    IData/*31:0*/ __PVT__ex2if_jump_addr_o;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_NPC(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_NPC();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_NPC);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
