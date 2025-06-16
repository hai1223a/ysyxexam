// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024root.h"

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_static(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_static\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF____PVT__clk__0 
        = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile____PVT__clk__0 
        = vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__stl(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_triggers__stl(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__stl\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root____Vm_traceActivitySetAll(Vysyx_25050136_NPC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_IF___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0(Vysyx_25050136_NPC_ysyx_25050136_IF* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__0(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_ID___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__1(Vysyx_25050136_NPC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__1(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__2(Vysyx_25050136_NPC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__2(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__3(Vysyx_25050136_NPC___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_ID___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__1(Vysyx_25050136_NPC_ysyx_25050136_ID* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__3(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__2(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_BQU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0(Vysyx_25050136_NPC_ysyx_25050136_BQU* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_ALU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0(Vysyx_25050136_NPC_ysyx_25050136_ALU* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_LSU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(Vysyx_25050136_NPC_ysyx_25050136_LSU* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__3(Vysyx_25050136_NPC_ysyx_25050136_EX* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__4(Vysyx_25050136_NPC_ysyx_25050136_NPC* vlSelf);
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__4(Vysyx_25050136_NPC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___eval_stl(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_stl\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25050136_NPC___024root____Vm_traceActivitySetAll(vlSelf);
        Vysyx_25050136_NPC_ysyx_25050136_IF___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__0((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_ID___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID));
        Vysyx_25050136_NPC___024root___stl_sequent__TOP__1(vlSelf);
        Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__1((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___stl_sequent__TOP__2(vlSelf);
        Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile));
        Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__1((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__2((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___stl_sequent__TOP__3(vlSelf);
        Vysyx_25050136_NPC_ysyx_25050136_ID___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID__1((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__3((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__2((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_BQU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU));
        Vysyx_25050136_NPC_ysyx_25050136_ALU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU));
        Vysyx_25050136_NPC_ysyx_25050136_LSU___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU));
        Vysyx_25050136_NPC_ysyx_25050136_EX___stl_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__3((&vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX));
        Vysyx_25050136_NPC_ysyx_25050136_NPC___stl_sequent__TOP__ysyx_25050136_NPC__4((&vlSymsp->TOP__ysyx_25050136_NPC));
        Vysyx_25050136_NPC___024root___stl_sequent__TOP__4(vlSelf);
    }
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__ysyx_25050136_NPC.reset = vlSelfRef.reset;
    vlSymsp->TOP__ysyx_25050136_NPC.clk = vlSelfRef.clk;
    vlSymsp->TOP__ysyx_25050136_NPC.mem_rdata_i = vlSelfRef.mem_rdata_i;
    vlSymsp->TOP__ysyx_25050136_NPC.inst_i = vlSelfRef.inst_i;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__1(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___stl_sequent__TOP__1\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pc_o = vlSymsp->TOP__ysyx_25050136_NPC.pc_o;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__2(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___stl_sequent__TOP__2\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_len_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_len_o;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__3(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___stl_sequent__TOP__3\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_ren_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_ren_o;
    vlSelfRef.mem_wen_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_wen_o;
}

VL_ATTR_COLD void Vysyx_25050136_NPC___024root___stl_sequent__TOP__4(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___stl_sequent__TOP__4\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_wdata_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_wdata_o;
    vlSelfRef.mem_addr_o = vlSymsp->TOP__ysyx_25050136_NPC.mem_addr_o;
}
