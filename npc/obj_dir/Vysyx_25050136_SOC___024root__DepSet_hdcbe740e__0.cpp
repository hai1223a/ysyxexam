// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_SOC.h for the primary calling header

#include "Vysyx_25050136_SOC__pch.h"
#include "Vysyx_25050136_SOC__Syms.h"
#include "Vysyx_25050136_SOC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_SOC___024root___dump_triggers__act(Vysyx_25050136_SOC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_SOC___024root___eval_triggers__act(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_triggers__act\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("trig act");
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_SOC___024root___dump_triggers__act(vlSelf);
    }
#endif
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_SOC___024root___eval_act(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_act\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func act");
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_SOC___024root___nba_sequent__TOP__0(Vysyx_25050136_SOC___024root* vlSelf);

void Vysyx_25050136_SOC___024root___eval_nba(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval_nba\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func nba");
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136_SOC___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_25050136_SOC__ConstPool__TABLE_h05acd171_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_25050136_SOC__ConstPool__TABLE_h1c136612_0;
void Vysyx_25050136_SOC___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);
void Vysyx_25050136_SOC___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25050136_SOC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit();

VL_INLINE_OPT void Vysyx_25050136_SOC___024root___nba_sequent__TOP__0(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay;
    __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu;
    __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu = 0;
    CData/*4:0*/ __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay;
    __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu;
    __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlyVal__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    // Body
    __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu 
        = vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu;
    __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay 
        = vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay;
    __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu 
        = vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu;
    __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0U;
    __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0U;
    __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay 
        = vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay;
    __Vtableidx1 = ((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__aw_fire) 
                      << 4U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__w_fire) 
                                << 3U)) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.reset)))));
    if (Vysyx_25050136_SOC__ConstPool__TABLE_h05acd171_0
        [__Vtableidx1]) {
        __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu 
            = Vysyx_25050136_SOC__ConstPool__TABLE_h1c136612_0
            [__Vtableidx1];
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_awready_r 
        = (1U & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wready_r 
        = (1U & (~ (IData)(vlSelfRef.reset)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_arready_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__ar_fire))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o) 
                                                        & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_arready_r)))) 
                                                   && ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
                                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_wvalid_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                                                        & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wready_r)))) 
                                                   && ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
                                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_awvalid_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                                                        & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awready_r)))) 
                                                   && ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
                                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen))));
    if (vlSelfRef.reset) {
        __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r = 0U;
        __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay = 0U;
        __VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 
            = (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 7U));
        __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 1U;
        __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wdata_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_awaddr_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wstrb_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_bvalid_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu 
            = __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awaddr_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_araddr_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_bvalid_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rvalid_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay 
            = __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wdata_r = 0U;
    } else {
        if ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu))) {
            if ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu))) {
                __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu = 0U;
            }
        }
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r 
            = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o)
                ? (1U | (0xeU & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r) 
                                 << 1U))) : ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__ar_fire)
                                              ? (0xeU 
                                                 & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r) 
                                                    << 1U))
                                              : ((0xeU 
                                                  & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r)))));
        if (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__ar_fire) 
             | (0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay)))) {
            __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay 
                = ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay))));
        }
        if ((((~ ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                  | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o)) 
             & (0U != (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                >> 7U))))) {
            __VdlyVal__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 
                = ((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                    ? ((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                        ? vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r
                        : ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                            ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r))
                                : (0xffffU & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r))
                            : ((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r 
                                                       >> 7U)))) 
                                        << 8U) | (0xffU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r))
                                    : (0xffU & vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r))
                                : 0U))) : ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                            : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o));
            __VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 
                = (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                            >> 7U));
            __VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 1U;
        }
        if (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__ar_fire) 
             | (0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay)))) {
            __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay 
                = ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay))));
        }
        if ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_bvalid_r = 1U;
        }
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu 
            = __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu;
        if (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__aw_fire) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awaddr_r 
                = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                    : 0U);
        }
        if (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__ar_fire) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_araddr_r 
                = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o)
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                    : 0U);
        }
        if (vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__w_fire) {
            if (vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) {
                vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r 
                    = vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o;
                vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wdata_r 
                    = vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                    [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                               >> 0x14U))];
            } else {
                vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r = 0U;
                vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wdata_r = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                        ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                        ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                        ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                        ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_bvalid_r = 1U;
        }
        if (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i) 
             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_bvalid_r = 0U;
        }
        if (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i) 
             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rvalid_r = 0U;
        } else if ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rvalid_r = 1U;
        }
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay 
            = __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay;
    }
    if (__VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0] = 0U;
    }
    if (__VdlySet__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1] 
            = __VdlyVal__ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_araddr_r = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rvalid_r = 0U;
    } else {
        if (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r 
                = vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rdata_r;
        }
        if (vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__ar_fire) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_araddr_r 
                = vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
        }
        if (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i) 
             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rvalid_r = 0U;
        } else if ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rvalid_r = 1U;
        }
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay 
        = __Vdly__ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay;
    if ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__wstatu))) {
        Vysyx_25050136_SOC___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_awaddr_r, vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wdata_r, 
                                                                             ((((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wstrb_r) 
                                                                                >> 3U)))) 
                                                                                << 0x18U) 
                                                                               | (0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wstrb_r) 
                                                                                >> 2U)))) 
                                                                                << 0x10U))) 
                                                                              | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wstrb_r) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_wstrb_r))))))));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc = 0U;
    } else if (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc 
            = (((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                | ((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                   | ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                      | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                         | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                            & ((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                               & (0U != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))
                ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                    ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                        ? ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                            ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                        >> 1U)) << 1U)
                            : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                        : 0U) : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)
                : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o);
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__ar_fire 
        = (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r) 
            >> 3U) & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_arready_r));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__ar_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_arready_r) 
           & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r) 
              >> 3U));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_arready_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__ar_fire))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wready_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__w_fire))));
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i 
        = ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__count_delay)) 
           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rvalid_r));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awready_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__aw_fire))) 
                                                   || (1U 
                                                       & (~ 
                                                          ((1U 
                                                            == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu)) 
                                                           & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__w_fire)))))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire))));
    vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i 
        = ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__count_delay)) 
           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rvalid_r));
    if (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i) {
        Vysyx_25050136_SOC___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_araddr_r, vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r 
            = vlSelfRef.__Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_rdata_r = 0U;
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu 
        = __Vdly__ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu;
    if (vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i) {
        Vysyx_25050136_SOC___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_araddr_r, vlSelfRef.__Vfunc_pmem_read__1__Vfuncout);
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rdata_r 
            = vlSelfRef.__Vfunc_pmem_read__1__Vfuncout;
    } else {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rdata_r = 0U;
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i));
    if ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu))) {
        Vysyx_25050136_SOC___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awaddr_r, vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wdata_r, 
                                                                             ((((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r) 
                                                                                >> 3U)))) 
                                                                                << 0x18U) 
                                                                               | (0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r) 
                                                                                >> 2U)))) 
                                                                                << 0x10U))) 
                                                                              | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wstrb_r))))))));
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_bvalid_r) 
           | (3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__wstatu)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((0U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
            ? 0x80000000U : ((IData)(4U) + vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
        = ((0U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rdata_r)
            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r
            : vlSelfRef.ysyx_25050136_SOC__DOT__u_ROM__DOT__s_rdata_r);
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en 
        = ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
              | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 
        = ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 
        = (IData)((0x33U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en 
        = ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | (3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                    | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o 
        = (((IData)((0x2003U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
            | (IData)((0x2023U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
            ? 0xfU : (((IData)((0x1023U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                       | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                          | (IData)((0x1003U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))
                       ? 3U : (((IData)((0x23U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu) 
                                   | (IData)((3U == 
                                              (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))
                                ? 1U : 0U)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
           & (0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0x19U)));
    if (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o 
            = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
               | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire));
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren 
            = (3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o));
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen 
            = (0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o));
    } else {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o 
            = vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren = 0U;
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen = 0U;
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
           & (0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_0 = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi) 
                                                | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi) 
                                                   | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc)));
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o 
        = (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren)) 
           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT____VdfgRegularize_h162bcf12_0_0 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o 
        = ((((((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                 & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                           >> 0x19U))) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl)) 
               << 0xeU) | (((IData)((0x1013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                            | (IData)((0x1033U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                           << 0xdU)) | ((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai) 
                                          | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                             & (0x20U 
                                                == 
                                                (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 0x19U)))) 
                                         << 0xcU) | 
                                        ((IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                         << 0xbU))) 
            | (((((IData)((0x4063U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                  | ((IData)((0x2013U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                     | (IData)((0x2033U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))) 
                 << 0xaU) | ((IData)((0x7063U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                             << 9U)) | ((((IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                          | ((IData)(
                                                     (0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                             | (IData)(
                                                       (0x3033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))) 
                                         << 8U) | ((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                                   << 7U)))) 
           | (((((IData)((0x63U == (0x707fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                 << 6U) | (((IData)((0x7033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                            | (IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                           << 5U)) | ((((IData)((0x6033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                        | (IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                       << 4U) | (((IData)(
                                                          (0x4033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                                  | (IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                                 << 3U))) 
              | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub) 
                  << 2U) | ((((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                              | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                 | ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                    | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                       & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 0x19U)))))) 
                             << 1U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5) 
                                       | (0x37U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o 
        = (((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
            | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
               | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
            ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                ? (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                            >> 0x14U)) : (((- (IData)(
                                                      (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0x14U)))
            : ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                ? (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                  >> 7U))))
                : (((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                    | (0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))
                    ? (0xfffff000U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)
                    : ((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                        ? (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0x800U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 7U)))))
                        : ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                            ? (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                              | (0x800U 
                                                 & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U))))
                            : 0U)))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o 
        = ((((0x100073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
             << 5U) | (((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                        << 4U) | ((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                  << 3U))) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
              | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_2_0)
            ? (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0xfU)) : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                      >> 0xfU))]);
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__ar_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_arready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o));
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT____VdfgRegularize_h162bcf12_0_0) 
           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_awvalid_r));
    vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT____VdfgRegularize_h162bcf12_0_0) 
           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_wvalid_r));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
        = (0x1ffffffffULL & ((QData)((IData)(((0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                              [(0x1fU 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0xfU))]
                                               : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc))) 
                             + (QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
        = ((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
            : ((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc
                : ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5)
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o
                    : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                   [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                              >> 0xfU))])));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o 
        = (((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
            | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))
            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                      >> 0x14U))] : (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                      | ((0x13U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
                                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
                                      : 0U));
    if ((0x20U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        Vysyx_25050136_SOC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit();
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0U;
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr 
        = (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
           >> 0x14U);
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                    & (0U == (0xf80U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0U;
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 0U;
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 
        = (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
           >> 0x14U);
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 
        = (1U & (~ (IData)(((0U == (0xf8000U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                            & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                               | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))));
    if ((1U & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                      >> 1U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                          >> 2U)))) {
                if ((0x10U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0xbU;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x305U;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0x342U;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 1U;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 = 0x341U;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 1U;
                } else if ((8U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x341U;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 0U;
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__aw_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_awready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__w_fire 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_RAM__DOT__s_wready_r) 
           & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 
        = (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
           ^ vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub)
            ? ((IData)(1U) + (~ vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
            : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    if (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
            = ((0x341U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc
                : ((0x342U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause
                    : ((0x305U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                        ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec
                        : ((0x300U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus
                            : 0U))));
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit = 0U;
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
    }
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                  << 1U));
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit = 0U;
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit = 0U;
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        }
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
                }
            }
        }
    } else {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
    }
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                      << 1U));
        }
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                          << 1U));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                              << 1U));
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
        = ((IData)((0U != (0xffU & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))))
            ? ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o
                : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o))) 
                       + (IData)((0x1ffffffffULL & 
                                  VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                    : ((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? ((IData)((0x1ffffffffULL 
                                    & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o))) 
                           + (IData)((0x1ffffffffULL 
                                      & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                        : ((8U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2
                            : ((0x10U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                   | vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                : ((0x20U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                    : ((0x40U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (1U & (~ (IData)(
                                                           (0U 
                                                            != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))
                                        : (0U != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))))))
            : ((0x100U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                   < vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                : ((0x200U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                       >= vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                    : ((0x400U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? VL_LTS_III(32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                        : ((0x800U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? VL_GTES_III(32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                            : ((0x1000U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                                 (0x1fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                : ((0x2000U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       << (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                    : ((0x4000U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                           >> (0x1fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                        : 0U))))))));
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 = 0U;
    if ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o;
    } else if ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               | vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o);
    } else if ((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               & (~ vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o));
    } else if ((0x10U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    }
    vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o 
        = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
            ? 0U : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_SOC___024root___dump_triggers__nba(Vysyx_25050136_SOC___024root* vlSelf);
#endif  // VL_DEBUG
bool Vysyx_25050136_SOC___024root___eval_phase__act(Vysyx_25050136_SOC___024root* vlSelf);
bool Vysyx_25050136_SOC___024root___eval_phase__nba(Vysyx_25050136_SOC___024root* vlSelf);

void Vysyx_25050136_SOC___024root___eval(Vysyx_25050136_SOC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root___eval\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("eval");
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop nba");
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136_SOC___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/soc.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop act");
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25050136_SOC___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/soc.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25050136_SOC___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
        if (Vysyx_25050136_SOC___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}
