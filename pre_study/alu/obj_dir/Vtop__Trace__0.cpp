// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.op_i),3);
    bufp->chgCData(oldp+1,(vlSelfRef.A_i),4);
    bufp->chgCData(oldp+2,(vlSelfRef.B_i),4);
    bufp->chgCData(oldp+3,(vlSelfRef.out_o),4);
    bufp->chgBit(oldp+4,(vlSelfRef.zero_o));
    bufp->chgBit(oldp+5,(vlSelfRef.overflow_o));
    bufp->chgBit(oldp+6,(vlSelfRef.carry_o));
    bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__out0),5);
    bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__out1),5);
    bufp->chgCData(oldp+9,((0xfU & ((IData)(1U) + (~ (IData)(vlSelfRef.B_i))))),4);
    bufp->chgCData(oldp+10,((0xfU & (~ (IData)(vlSelfRef.A_i)))),4);
    bufp->chgCData(oldp+11,(((IData)(vlSelfRef.A_i) 
                             & (IData)(vlSelfRef.B_i))),4);
    bufp->chgCData(oldp+12,(((IData)(vlSelfRef.A_i) 
                             | (IData)(vlSelfRef.B_i))),4);
    bufp->chgCData(oldp+13,(((IData)(vlSelfRef.A_i) 
                             ^ (IData)(vlSelfRef.B_i))),4);
    bufp->chgCData(oldp+14,((((IData)(vlSelfRef.A_i) 
                              < (IData)(vlSelfRef.B_i))
                              ? 1U : 0U)),4);
    bufp->chgCData(oldp+15,((((IData)(vlSelfRef.A_i) 
                              == (IData)(vlSelfRef.B_i))
                              ? 1U : 0U)),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
