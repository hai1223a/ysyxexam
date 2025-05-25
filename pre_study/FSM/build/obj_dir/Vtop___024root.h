// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk_i,0,0);
    VL_IN8(ps2_data_i,0,0);
    VL_OUT8(caps_o,0,0);
    VL_OUT8(shift_o,0,0);
    VL_OUT8(seg0_o,7,0);
    VL_OUT8(seg1_o,7,0);
    VL_OUT8(seg2_o,7,0);
    VL_OUT8(seg3_o,7,0);
    VL_OUT8(seg4_o,7,0);
    VL_OUT8(seg5_o,7,0);
    VL_OUT8(seg6_o,7,0);
    VL_OUT8(seg7_o,7,0);
    CData/*2:0*/ top__DOT__ps2_clk_d;
    CData/*3:0*/ top__DOT__count;
    CData/*2:0*/ top__DOT__w_ptr;
    CData/*2:0*/ top__DOT__r_ptr;
    CData/*0:0*/ top__DOT__ready;
    CData/*0:0*/ top__DOT__overflow;
    CData/*0:0*/ top__DOT__nextdata_n;
    CData/*7:0*/ top__DOT__data;
    CData/*3:0*/ top__DOT__caps_state_n;
    CData/*3:0*/ top__DOT__shift_state_n;
    CData/*3:0*/ top__DOT__num_press_ge;
    CData/*3:0*/ top__DOT__num_press_shi;
    CData/*3:0*/ top__DOT__num_press_bai;
    CData/*3:0*/ top__DOT__num_press_qian;
    CData/*0:0*/ top__DOT____Vlvbound_h4ebbf8f4__0;
    CData/*3:0*/ top__DOT__u_fsm_caps__DOT__state_c;
    CData/*3:0*/ top__DOT__u_fsm_shift__DOT__state_c;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__buffer;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__fifo;
    VlUnpacked<CData/*7:0*/, 36> top__DOT__u_scan2ascii__DOT__rom_data;
    VlUnpacked<CData/*7:0*/, 36> top__DOT__u_scan2ascii__DOT__rom_index;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
