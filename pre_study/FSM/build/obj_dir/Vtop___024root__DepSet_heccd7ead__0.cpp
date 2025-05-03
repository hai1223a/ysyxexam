// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_he37b703b_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
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
    CData/*2:0*/ __Vdly__top__DOT__ps2_clk_d;
    __Vdly__top__DOT__ps2_clk_d = 0;
    CData/*3:0*/ __Vdly__top__DOT__count;
    __Vdly__top__DOT__count = 0;
    CData/*2:0*/ __Vdly__top__DOT__w_ptr;
    __Vdly__top__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__top__DOT__r_ptr;
    __Vdly__top__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__top__DOT__overflow;
    __Vdly__top__DOT__overflow = 0;
    CData/*0:0*/ __Vdly__top__DOT__ready;
    __Vdly__top__DOT__ready = 0;
    CData/*0:0*/ __Vdly__top__DOT__nextdata_n;
    __Vdly__top__DOT__nextdata_n = 0;
    CData/*0:0*/ __Vdly__caps_o;
    __Vdly__caps_o = 0;
    CData/*3:0*/ __Vdly__top__DOT__num_press_ge;
    __Vdly__top__DOT__num_press_ge = 0;
    CData/*3:0*/ __Vdly__top__DOT__num_press_shi;
    __Vdly__top__DOT__num_press_shi = 0;
    CData/*3:0*/ __Vdly__top__DOT__num_press_bai;
    __Vdly__top__DOT__num_press_bai = 0;
    CData/*3:0*/ __Vdly__top__DOT__num_press_qian;
    __Vdly__top__DOT__num_press_qian = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__fifo__v0;
    __VdlyVal__top__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__top__DOT__fifo__v0;
    __VdlyDim0__top__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__fifo__v0;
    __VdlySet__top__DOT__fifo__v0 = 0;
    // Body
    __Vdly__top__DOT__ps2_clk_d = vlSelfRef.top__DOT__ps2_clk_d;
    __Vdly__caps_o = vlSelfRef.caps_o;
    __Vdly__top__DOT__nextdata_n = vlSelfRef.top__DOT__nextdata_n;
    __Vdly__top__DOT__count = vlSelfRef.top__DOT__count;
    __Vdly__top__DOT__w_ptr = vlSelfRef.top__DOT__w_ptr;
    __Vdly__top__DOT__r_ptr = vlSelfRef.top__DOT__r_ptr;
    __Vdly__top__DOT__overflow = vlSelfRef.top__DOT__overflow;
    __VdlySet__top__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__ready = vlSelfRef.top__DOT__ready;
    __Vdly__top__DOT__num_press_ge = vlSelfRef.top__DOT__num_press_ge;
    __Vdly__top__DOT__num_press_shi = vlSelfRef.top__DOT__num_press_shi;
    __Vdly__top__DOT__num_press_bai = vlSelfRef.top__DOT__num_press_bai;
    __Vdly__top__DOT__num_press_qian = vlSelfRef.top__DOT__num_press_qian;
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__ps2_clk_d = 0U;
        __Vdly__caps_o = 0U;
        __Vdly__top__DOT__count = 0U;
        __Vdly__top__DOT__w_ptr = 0U;
        __Vdly__top__DOT__r_ptr = 0U;
        __Vdly__top__DOT__overflow = 0U;
        __Vdly__top__DOT__num_press_ge = 0U;
        __Vdly__top__DOT__num_press_shi = 0U;
        __Vdly__top__DOT__num_press_bai = 0U;
        __Vdly__top__DOT__num_press_qian = 0U;
        vlSelfRef.top__DOT__data = 0U;
        __Vdly__top__DOT__nextdata_n = 0U;
    } else {
        __Vdly__top__DOT__ps2_clk_d = ((6U & ((IData)(vlSelfRef.top__DOT__ps2_clk_d) 
                                              << 1U)) 
                                       | (IData)(vlSelfRef.ps2_clk_i));
        if ((((8U == (IData)(vlSelfRef.top__DOT__caps_state_n)) 
              & (IData)(vlSelfRef.top__DOT__ready)) 
             & (~ (IData)(vlSelfRef.top__DOT__nextdata_n)))) {
            __Vdly__caps_o = (1U & (~ (IData)(vlSelfRef.caps_o)));
        }
        if (vlSelfRef.top__DOT__ready) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__nextdata_n)))) {
                __Vdly__top__DOT__r_ptr = (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.top__DOT__r_ptr)));
                if (((IData)(vlSelfRef.top__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__r_ptr))))) {
                    __Vdly__top__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelfRef.top__DOT__ps2_clk_d))))) {
            if ((0xaU == (IData)(vlSelfRef.top__DOT__count))) {
                if ((((~ (IData)(vlSelfRef.top__DOT__buffer)) 
                      & (IData)(vlSelfRef.ps2_data_i)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelfRef.top__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdly__top__DOT__w_ptr = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.top__DOT__w_ptr)));
                    __VdlyVal__top__DOT__fifo__v0 = 
                        (0xffU & ((IData)(vlSelfRef.top__DOT__buffer) 
                                  >> 1U));
                    __VdlyDim0__top__DOT__fifo__v0 
                        = vlSelfRef.top__DOT__w_ptr;
                    __VdlySet__top__DOT__fifo__v0 = 1U;
                    __Vdly__top__DOT__ready = 1U;
                    __Vdly__top__DOT__overflow = ((IData)(vlSelfRef.top__DOT__overflow) 
                                                  | ((IData)(vlSelfRef.top__DOT__r_ptr) 
                                                     == 
                                                     (7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.top__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__count = 0U;
            } else {
                vlSelfRef.top__DOT____Vlvbound_h4ebbf8f4__0 
                    = vlSelfRef.ps2_data_i;
                if ((9U >= (IData)(vlSelfRef.top__DOT__count))) {
                    vlSelfRef.top__DOT__buffer = ((
                                                   (~ 
                                                    ((IData)(1U) 
                                                     << (IData)(vlSelfRef.top__DOT__count))) 
                                                   & (IData)(vlSelfRef.top__DOT__buffer)) 
                                                  | (0x3ffU 
                                                     & ((IData)(vlSelfRef.top__DOT____Vlvbound_h4ebbf8f4__0) 
                                                        << (IData)(vlSelfRef.top__DOT__count))));
                }
                __Vdly__top__DOT__count = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.top__DOT__count)));
            }
        }
        if ((((IData)(vlSelfRef.top__DOT__ready) & (IData)(vlSelfRef.top__DOT__nextdata_n)) 
             & (0xf0U == (IData)(vlSelfRef.top__DOT__data)))) {
            if ((9U == (IData)(vlSelfRef.top__DOT__num_press_ge))) {
                if ((9U == (IData)(vlSelfRef.top__DOT__num_press_shi))) {
                    if ((9U == (IData)(vlSelfRef.top__DOT__num_press_bai))) {
                        __Vdly__top__DOT__num_press_qian 
                            = ((9U == (IData)(vlSelfRef.top__DOT__num_press_qian))
                                ? 0U : (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.top__DOT__num_press_qian))));
                        __Vdly__top__DOT__num_press_bai = 0U;
                    } else {
                        __Vdly__top__DOT__num_press_bai 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.top__DOT__num_press_bai)));
                    }
                    __Vdly__top__DOT__num_press_shi = 0U;
                } else {
                    __Vdly__top__DOT__num_press_shi 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__num_press_shi)));
                }
                __Vdly__top__DOT__num_press_ge = 0U;
            } else {
                __Vdly__top__DOT__num_press_ge = (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.top__DOT__num_press_ge)));
            }
        }
        if (((IData)(vlSelfRef.top__DOT__ready) & (IData)(vlSelfRef.top__DOT__nextdata_n))) {
            vlSelfRef.top__DOT__data = vlSelfRef.top__DOT__fifo
                [vlSelfRef.top__DOT__r_ptr];
            __Vdly__top__DOT__nextdata_n = 0U;
        } else {
            __Vdly__top__DOT__nextdata_n = 1U;
        }
    }
    vlSelfRef.shift_o = ((~ (IData)(vlSelfRef.rst)) 
                         & (1U != (IData)(vlSelfRef.top__DOT__shift_state_n)));
    vlSelfRef.caps_o = __Vdly__caps_o;
    vlSelfRef.top__DOT__count = __Vdly__top__DOT__count;
    vlSelfRef.top__DOT__w_ptr = __Vdly__top__DOT__w_ptr;
    vlSelfRef.top__DOT__overflow = __Vdly__top__DOT__overflow;
    vlSelfRef.top__DOT__ps2_clk_d = __Vdly__top__DOT__ps2_clk_d;
    vlSelfRef.top__DOT__num_press_ge = __Vdly__top__DOT__num_press_ge;
    vlSelfRef.top__DOT__num_press_shi = __Vdly__top__DOT__num_press_shi;
    vlSelfRef.top__DOT__num_press_bai = __Vdly__top__DOT__num_press_bai;
    vlSelfRef.top__DOT__num_press_qian = __Vdly__top__DOT__num_press_qian;
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
    vlSelfRef.top__DOT__r_ptr = __Vdly__top__DOT__r_ptr;
    if (__VdlySet__top__DOT__fifo__v0) {
        vlSelfRef.top__DOT__fifo[__VdlyDim0__top__DOT__fifo__v0] 
            = __VdlyVal__top__DOT__fifo__v0;
    }
    vlSelfRef.top__DOT__ready = __Vdly__top__DOT__ready;
    vlSelfRef.top__DOT__nextdata_n = __Vdly__top__DOT__nextdata_n;
    __Vtableidx1 = (0xfU & (IData)(vlSelfRef.top__DOT__data));
    vlSelfRef.seg0_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelfRef.top__DOT__data) 
                            >> 4U));
    vlSelfRef.seg1_o = Vtop__ConstPool__TABLE_he37b703b_0
        [__Vtableidx2];
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

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c = 1U;
        vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c = 1U;
    } else {
        vlSelfRef.top__DOT__u_fsm_caps__DOT__state_c 
            = vlSelfRef.top__DOT__caps_state_n;
        vlSelfRef.top__DOT__u_fsm_shift__DOT__state_c 
            = vlSelfRef.top__DOT__shift_state_n;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/yunhai/ysyx-workbench/pre_study/FSM/vsrc/top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/yunhai/ysyx-workbench/pre_study/FSM/vsrc/top.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.ps2_clk_i & 0xfeU)))) {
        Verilated::overWidthError("ps2_clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.ps2_data_i & 0xfeU)))) {
        Verilated::overWidthError("ps2_data_i");}
}
#endif  // VL_DEBUG
