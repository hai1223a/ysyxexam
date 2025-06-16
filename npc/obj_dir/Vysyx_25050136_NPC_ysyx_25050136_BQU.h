// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_BQU_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_BQU_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_BQU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__operation_i,2,0);
    VL_IN8(__PVT__en_i,0,0);
    VL_IN(__PVT__op1_i,31,0);
    VL_IN(__PVT__op2_i,31,0);
    VL_OUT(__PVT__out_o,31,0);
    IData/*31:0*/ __PVT__result;
    QData/*32:0*/ __PVT__result_add;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_BQU(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_BQU();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_BQU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
