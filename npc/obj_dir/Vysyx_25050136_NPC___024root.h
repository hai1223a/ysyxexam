// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC___024ROOT_H_
#define VERILATED_VYSYX_25050136_NPC___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(mem_ren_o,0,0);
    VL_OUT8(mem_wen_o,0,0);
    VL_OUT8(mem_len_o,2,0);
    CData/*1:0*/ ysyx_25050136_NPC__DOT__id2ex_alu_op_o;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_3;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst_i,31,0);
    VL_IN(mem_rdata_i,31,0);
    VL_OUT(mem_wdata_o,31,0);
    VL_OUT(mem_addr_o,31,0);
    VL_OUT(pc_o,31,0);
    IData/*31:0*/ ysyx_25050136_NPC__DOT__if2id_static_npc_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_op1_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_op4_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_op5_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__reg2id_rdata1_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add;
    VlUnpacked<IData/*31:0*/, 16> ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC___024root(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC___024root();
    VL_UNCOPYABLE(Vysyx_25050136_NPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
