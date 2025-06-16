// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_NPC___024root___eval_triggers__ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__1(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC___024root___ico_sequent__TOP__1(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__2(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC___024root___ico_sequent__TOP__2(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__1(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__3(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__2(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_BQU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0(Vysyx_25050136_NPC_ysyx_25050136_BQU* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_ALU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(Vysyx_25050136_NPC_ysyx_25050136_ALU* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_LSU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(Vysyx_25050136_NPC_ysyx_25050136_LSU* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__3(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__4(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC___024root___ico_sequent__TOP__3(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval_ico(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_ico\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__0((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__1((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___ico_sequent__TOP__1(vlSelf);
        Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile));
        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__2((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___ico_sequent__TOP__2(vlSelf);
        Vysyx_25050136_NPC_ysyx_25050136_ID___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__1((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__3((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__2((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_BQU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU));
        Vysyx_25050136_NPC_ysyx_25050136_ALU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU));
        Vysyx_25050136_NPC_ysyx_25050136_LSU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU));
        Vysyx_25050136_NPC_ysyx_25050136_EX___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__3((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___ico_sequent__TOP__ysyx_25050136_NPC__4((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___ico_sequent__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___ico_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC.reset = vlSelfRef.reset;
    vlSymsp->TOP__ysyx_25050136_NPC.clk = vlSelfRef.clk;
    vlSymsp->TOP__ysyx_25050136_NPC.mem_rdata_i = vlSelfRef.mem_rdata_i;
    vlSymsp->TOP__ysyx_25050136_NPC.inst_i = vlSelfRef.inst_i;
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___ico_sequent__TOP__1(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ico_sequent__TOP__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_len_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_len_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___ico_sequent__TOP__2(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ico_sequent__TOP__2\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_ren_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_ren_o;
    vlSelfRef.mem_wen_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_wen_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___ico_sequent__TOP__3(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___ico_sequent__TOP__3\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_wdata_o;
    vlSelfRef.mem_addr_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_addr_o;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__act(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_NPC___024root___eval_triggers__act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF____PVT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile____PVT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF____PVT__clk__0 
        = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile____PVT__clk__0 
        = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_ID___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__1(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_LSU___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(Vysyx_25050136_NPC_ysyx_25050136_LSU* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_ALU___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(Vysyx_25050136_NPC_ysyx_25050136_ALU* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__2(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_IF___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0(Vysyx_25050136_NPC_ysyx_25050136_IF* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__3(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC___024root___nba_sequent__TOP__1(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_ID___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_BQU___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0(Vysyx_25050136_NPC_ysyx_25050136_BQU* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_ALU___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(Vysyx_25050136_NPC_ysyx_25050136_ALU* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
void Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__1(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
void Vysyx_25050136_NPC___024root___nba_comb__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval_nba(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_nba\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__0((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC_ysyx_25050136_ID___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__1((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_LSU___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU));
        Vysyx_25050136_NPC_ysyx_25050136_ALU___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU));
        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__2((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136_NPC_ysyx_25050136_IF___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_sequent__TOP__ysyx_25050136_NPC__3((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136_NPC_ysyx_25050136_ID___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__0((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_BQU___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU));
        Vysyx_25050136_NPC_ysyx_25050136_ALU___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU));
        Vysyx_25050136_NPC_ysyx_25050136_EX___nba_comb__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___nba_comb__TOP__ysyx_25050136_NPC__1((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_wdata_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___nba_sequent__TOP__1(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___nba_sequent__TOP__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_o = vlSymsp->TOP__ysyx_25050136_NPC.pc_o;
}

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___nba_comb__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___nba_comb__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_addr_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_addr_o;
}
