// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_ALU_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_ALU_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_ALU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__en_i,0,0);
    VL_IN16(__PVT__operation_i,14,0);
    VL_IN(__PVT__op1_i,31,0);
    VL_IN(__PVT__op2_i,31,0);
    VL_OUT(__PVT__out_o,31,0);
    IData/*31:0*/ __PVT__add_sub_op1;
    IData/*31:0*/ __PVT__add_sub_op2;
    IData/*31:0*/ __PVT__op1_xor_op2;
    IData/*31:0*/ __PVT__sra_result;
    IData/*31:0*/ __PVT__sll_result;
    IData/*31:0*/ __PVT__srl_result;
    IData/*31:0*/ __PVT__out;
    QData/*32:0*/ __PVT__add_sub_result;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_ALU(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_ALU();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_ALU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
