// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_EX_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_EX_H_  // guard

#include "verilated.h"
class Vysyx_25050136_NPC_ysyx_25050136_ALU;
class Vysyx_25050136_NPC_ysyx_25050136_BQU;
class Vysyx_25050136_NPC_ysyx_25050136_LSU;


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_EX final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_25050136_NPC_ysyx_25050136_ALU* __PVT__u_ysyx_25050136_ALU;
    Vysyx_25050136_NPC_ysyx_25050136_LSU* __PVT__u_ysyx_25050136_LSU;
    Vysyx_25050136_NPC_ysyx_25050136_BQU* __PVT__u_ysyx_25050136_BQU;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__fu_i,2,0);
    VL_IN8(__PVT__lsu_op_i,1,0);
    VL_IN8(__PVT__bqu_op_i,2,0);
    VL_IN8(__PVT__mem_len_i,2,0);
    VL_IN8(__PVT__mem_signed_i,0,0);
    VL_OUT8(__PVT__mem_ren_o,0,0);
    VL_OUT8(__PVT__mem_wen_o,0,0);
    VL_OUT8(__PVT__jump_en_o,0,0);
    CData/*0:0*/ __PVT__alu_en;
    CData/*0:0*/ __PVT__lsu_en;
    CData/*0:0*/ __PVT__bqu_en;
    VL_IN16(__PVT__alu_op_i,14,0);
    VL_IN(__PVT__op1_i,31,0);
    VL_IN(__PVT__op2_i,31,0);
    VL_IN(__PVT__op3_i,31,0);
    VL_IN(__PVT__op4_i,31,0);
    VL_IN(__PVT__op5_i,31,0);
    VL_IN(__PVT__mem_rdata_i,31,0);
    VL_OUT(__PVT__mem_wdata_o,31,0);
    VL_OUT(__PVT__mem_addr_o,31,0);
    VL_OUT(__PVT__gpr_data_o,31,0);
    VL_OUT(__PVT__jump_addr_o,31,0);
    IData/*31:0*/ __PVT__alu_out_o;
    IData/*31:0*/ __PVT__load_data_o;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_EX(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_EX();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_EX);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
