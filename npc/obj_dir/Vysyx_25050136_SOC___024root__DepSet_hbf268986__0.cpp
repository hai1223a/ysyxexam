// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_SOC.h for the primary calling header

#include "Vysyx_25050136_SOC__pch.h"
#include "Vysyx_25050136_SOC___024root.h"

VL_INLINE_OPT void Vysyx_25050136_SOC___024root___ico_sequent__TOP__0(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT____Vcellinp__u_ysyx_25050136_IF__resetn 
        = (1U & (~ (IData)(vlSelfRef.reset)));
}

void Vysyx_25050136_SOC___024root___eval_triggers__ico(Vysyx_25050136_SOC___024root* vlSelf);
void Vysyx_25050136_SOC___024root___eval_ico(Vysyx_25050136_SOC___024root* vlSelf);

bool Vysyx_25050136_SOC___024root___eval_phase__ico(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_phase__ico\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25050136_SOC___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25050136_SOC___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

extern const VlUnpacked<CData/*7:0*/, 512> Vysyx_25050136_SOC__ConstPool__TABLE_hc51d2432_0;

VL_INLINE_OPT void Vysyx_25050136_SOC___024root___nba_sequent__TOP__1(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___nba_sequent__TOP__1\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr) 
                     << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT____Vcellinp__u_ysyx_25050136_IF__resetn));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr 
        = Vysyx_25050136_SOC__ConstPool__TABLE_hc51d2432_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vysyx_25050136_SOC___024root___nba_comb__TOP__0(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___nba_comb__TOP__0\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i) 
           & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire 
        = (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_bvalid_r) 
            | (3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu))) 
           & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr)));
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o 
        = ((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren)) 
            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r)) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr));
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o 
        = (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT____VdfgRegularize_h162bcf12_0_0) 
            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_awvalid_r)) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr));
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o 
        = (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT____VdfgRegularize_h162bcf12_0_0) 
            | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_wvalid_r)) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__lfsr));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en)
            ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
               | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire))
            : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__ar_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_arready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__aw_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__w_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o));
}

void Vysyx_25050136_SOC___024root___eval_triggers__act(Vysyx_25050136_SOC___024root* vlSelf);
void Vysyx_25050136_SOC___024root___eval_act(Vysyx_25050136_SOC___024root* vlSelf);

bool Vysyx_25050136_SOC___024root___eval_phase__act(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_phase__act\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25050136_SOC___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25050136_SOC___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vysyx_25050136_SOC___024root___eval_nba(Vysyx_25050136_SOC___024root* vlSelf);

bool Vysyx_25050136_SOC___024root___eval_phase__nba(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_phase__nba\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25050136_SOC___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
void Vysyx_25050136_SOC___024root___eval_debug_assertions(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_debug_assertions\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
