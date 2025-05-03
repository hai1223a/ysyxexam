// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0U] = 0x30U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[1U] = 0x31U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[2U] = 0x32U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[3U] = 0x33U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[4U] = 0x34U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[5U] = 0x35U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[6U] = 0x36U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[7U] = 0x37U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[8U] = 0x38U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[9U] = 0x39U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0xaU] = 0x61U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0xbU] = 0x62U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0xcU] = 0x63U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0xdU] = 0x64U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0xeU] = 0x65U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0xfU] = 0x66U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x10U] = 0x67U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x11U] = 0x68U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x12U] = 0x69U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x13U] = 0x6aU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x14U] = 0x6bU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x15U] = 0x6cU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x16U] = 0x6dU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x17U] = 0x6eU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x18U] = 0x6fU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x19U] = 0x70U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x1aU] = 0x71U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x1bU] = 0x72U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x1cU] = 0x73U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x1dU] = 0x74U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x1eU] = 0x75U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x1fU] = 0x76U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x20U] = 0x77U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x21U] = 0x78U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x22U] = 0x79U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data[0x23U] = 0x7aU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0U] = 0x45U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[1U] = 0x16U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[2U] = 0x1eU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[3U] = 0x26U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[4U] = 0x25U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[5U] = 0x2eU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[6U] = 0x36U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[7U] = 0x3dU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[8U] = 0x3eU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[9U] = 0x46U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0xaU] = 0x1cU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0xbU] = 0x32U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0xcU] = 0x21U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0xdU] = 0x23U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0xeU] = 0x24U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0xfU] = 0x2bU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x10U] = 0x34U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x11U] = 0x33U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x12U] = 0x43U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x13U] = 0x3bU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x14U] = 0x42U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x15U] = 0x4bU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x16U] = 0x3aU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x17U] = 0x31U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x18U] = 0x44U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x19U] = 0x4dU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x1aU] = 0x15U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x1bU] = 0x2dU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x1cU] = 0x1bU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x1dU] = 0x2cU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x1eU] = 0x3cU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x1fU] = 0x2aU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x20U] = 0x1dU;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x21U] = 0x22U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x22U] = 0x35U;
    vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index[0x23U] = 0x1aU;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/yunhai/ysyx-workbench/pre_study/FSM/vsrc/top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_he37b703b_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ top__DOT__ascii;
    top__DOT__ascii = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.top__DOT__caps_state_n = ((8U & (IData)(vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c))
                                         ? 1U : ((4U 
                                                  & (IData)(vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelfRef.top__DOT__ready) 
                                                      & (~ (IData)(vlSelfRef.top__DOT__nextdata_n))) 
                                                     & (0x58U 
                                                        == (IData)(vlSelfRef.top__DOT__data)))
                                                     ? 8U
                                                     : 4U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelfRef.top__DOT__ready) 
                                                      & (~ (IData)(vlSelfRef.top__DOT__nextdata_n))) 
                                                     & (0xf0U 
                                                        == (IData)(vlSelfRef.top__DOT__data)))
                                                     ? 4U
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c))
                                                    ? 
                                                   ((((IData)(vlSelfRef.top__DOT__ready) 
                                                      & (~ (IData)(vlSelfRef.top__DOT__nextdata_n))) 
                                                     & (0x58U 
                                                        == (IData)(vlSelfRef.top__DOT__data)))
                                                     ? 2U
                                                     : 1U)
                                                    : 1U))));
    vlSelfRef.top__DOT__shift_state_n = ((8U & (IData)(vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c))
                                          ? 1U : ((4U 
                                                   & (IData)(vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlSelfRef.top__DOT__ready) 
                                                       & (~ (IData)(vlSelfRef.top__DOT__nextdata_n))) 
                                                      & (0x12U 
                                                         == (IData)(vlSelfRef.top__DOT__data)))
                                                      ? 8U
                                                      : 4U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c))
                                                     ? 1U
                                                     : 
                                                    ((((IData)(vlSelfRef.top__DOT__ready) 
                                                       & (~ (IData)(vlSelfRef.top__DOT__nextdata_n))) 
                                                      & (0xf0U 
                                                         == (IData)(vlSelfRef.top__DOT__data)))
                                                      ? 4U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c))
                                                     ? 
                                                    ((((IData)(vlSelfRef.top__DOT__ready) 
                                                       & (~ (IData)(vlSelfRef.top__DOT__nextdata_n))) 
                                                      & (0x12U 
                                                         == (IData)(vlSelfRef.top__DOT__data)))
                                                      ? 2U
                                                      : 1U)
                                                     : 1U))));
    __Vtableidx1 = (0xfU & (IData)(vlSelfRef.top__DOT__data));
    vlSelfRef.seg0_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelfRef.top__DOT__data) 
                            >> 4U));
    vlSelfRef.seg1_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx2];
    __Vtableidx5 = vlSelfRef.top__DOT__num_press_ge;
    vlSelfRef.seg4_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx5];
    __Vtableidx6 = vlSelfRef.top__DOT__num_press_shi;
    vlSelfRef.seg5_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx6];
    __Vtableidx7 = vlSelfRef.top__DOT__num_press_bai;
    vlSelfRef.seg6_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx7];
    __Vtableidx8 = vlSelfRef.top__DOT__num_press_qian;
    vlSelfRef.seg7_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx8];
    top__DOT__ascii = 0U;
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [0U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [1U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [1U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [1U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [1U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [1U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [2U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [2U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [2U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [2U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [2U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [3U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [3U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [3U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [3U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [3U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [4U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [4U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [4U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [4U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [4U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [5U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [5U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [5U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [5U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [5U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [6U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [6U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [6U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [6U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [6U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [7U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [7U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [7U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [7U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [7U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [8U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [8U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [8U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [8U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [8U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [9U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [9U])) & (0x61U 
                                                   <= 
                                                   vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                   [9U]))
                                     ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [9U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [9U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0xaU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0xaU])) & 
                                     (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                      [0xaU])) ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                  [0xaU] 
                                                  - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0xaU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0xbU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0xbU])) & 
                                     (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                      [0xbU])) ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                  [0xbU] 
                                                  - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0xbU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0xcU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0xcU])) & 
                                     (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                      [0xcU])) ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                  [0xcU] 
                                                  - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0xcU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0xdU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0xdU])) & 
                                     (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                      [0xdU])) ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                  [0xdU] 
                                                  - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0xdU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0xeU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0xeU])) & 
                                     (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                      [0xeU])) ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                  [0xeU] 
                                                  - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0xeU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0xfU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0xfU])) & 
                                     (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                      [0xfU])) ? (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                                  [0xfU] 
                                                  - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0xfU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x10U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x10U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x10U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x10U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x10U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x11U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x11U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x11U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x11U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x11U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x12U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x12U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x12U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x12U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x12U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x13U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x13U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x13U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x13U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x13U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x14U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x14U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x14U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x14U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x14U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x15U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x15U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x15U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x15U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x15U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x16U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x16U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x16U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x16U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x16U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x17U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x17U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x17U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x17U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x17U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x18U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x18U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x18U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x18U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x18U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x19U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x19U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x19U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x19U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x19U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x1aU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x1aU])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x1aU])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x1aU] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x1aU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x1bU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x1bU])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x1bU])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x1bU] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x1bU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x1cU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x1cU])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x1cU])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x1cU] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x1cU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x1dU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x1dU])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x1dU])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x1dU] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x1dU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x1eU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x1eU])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x1eU])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x1eU] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x1eU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x1fU] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x1fU])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x1fU])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x1fU] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x1fU]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x20U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x20U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x20U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x20U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x20U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x21U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x21U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x21U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x21U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x21U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x22U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x22U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x22U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x22U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x22U]));
    }
    if ((vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_index
         [0x23U] == (IData)(vlSelfRef.top__DOT__data))) {
        top__DOT__ascii = (0xffU & (((((IData)(vlSelfRef.caps_o) 
                                       ^ (IData)(vlSelfRef.shift_o)) 
                                      & (0x7aU >= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                         [0x23U])) 
                                     & (0x61U <= vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                        [0x23U])) ? 
                                    (vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                     [0x23U] - (IData)(0x20U))
                                     : vlSelfRef.top__DOT__u_scan2ascii__DOT__rom_data
                                    [0x23U]));
    }
    __Vtableidx3 = (0xfU & (IData)(top__DOT__ascii));
    vlSelfRef.seg2_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(top__DOT__ascii) 
                            >> 4U));
    vlSelfRef.seg3_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx4];
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk_i = 0;
    vlSelf->ps2_data_i = 0;
    vlSelf->caps_o = 0;
    vlSelf->shift_o = 0;
    vlSelf->seg0_o = 0;
    vlSelf->seg1_o = 0;
    vlSelf->seg2_o = 0;
    vlSelf->seg3_o = 0;
    vlSelf->seg4_o = 0;
    vlSelf->seg5_o = 0;
    vlSelf->seg6_o = 0;
    vlSelf->seg7_o = 0;
    vlSelf->top__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__ps2_clk_d = 0;
    vlSelf->top__DOT__count = 0;
    vlSelf->top__DOT__w_ptr = 0;
    vlSelf->top__DOT__r_ptr = 0;
    vlSelf->top__DOT__ready = 0;
    vlSelf->top__DOT__overflow = 0;
    vlSelf->top__DOT__nextdata_n = 0;
    vlSelf->top__DOT__data = 0;
    vlSelf->top__DOT__caps_state_n = 0;
    vlSelf->top__DOT__shift_state_n = 0;
    vlSelf->top__DOT__num_press_ge = 0;
    vlSelf->top__DOT__num_press_shi = 0;
    vlSelf->top__DOT__num_press_bai = 0;
    vlSelf->top__DOT__num_press_qian = 0;
    vlSelf->top__DOT____Vlvbound_h4ebbf8f4__0 = 0;
    vlSelf->top__DOT__u_fsm_caps__DOT__state_c = 0;
    vlSelf->top__DOT__u_fsm_shift__DOT__state_c = 0;
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top__DOT__u_scan2ascii__DOT__rom_data[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->top__DOT__u_scan2ascii__DOT__rom_index[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
}
