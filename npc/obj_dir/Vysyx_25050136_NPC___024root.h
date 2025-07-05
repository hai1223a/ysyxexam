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
    CData/*4:0*/ ysyx_25050136_NPC__DOT__id2ex_csru_op_o;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__pc_i;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_en;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren;
    CData/*1:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit;
    CData/*1:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit;
    CData/*1:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit;
    CData/*1:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit;
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__reset;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*14:0*/ ysyx_25050136_NPC__DOT__id2ex_alu_op_o;
    SData/*11:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr;
    VL_IN(inst_i,31,0);
    VL_IN(mem_rdata_i,31,0);
    VL_OUT(mem_wdata_o,31,0);
    VL_OUT(mem_addr_o,31,0);
    VL_OUT(pc_o,31,0);
    IData/*31:0*/ ysyx_25050136_NPC__DOT__if2id_static_npc_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add;
    VlUnpacked<IData/*31:0*/, 32> ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr;
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
