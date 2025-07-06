// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__act(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136_NPC___024root___eval_triggers__act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_triggers__act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("trig act");
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136_NPC___024root___dump_triggers__act(vlSelf);
    }
#endif
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_NPC___024root___eval_act(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_act\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func act");
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval_nba(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval_nba\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func nba");
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(vlSelf);
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136_NPC___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25050136_NPC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit();
void Vysyx_25050136_NPC___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_25050136_NPC___024root___nba_sequent__TOP__0(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    // Body
    __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0U;
    __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0U;
    if (vlSelfRef.reset) {
        __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 
            = (0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                        >> 7U));
        __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 1U;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc = 0U;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause = 0U;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec = 0U;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus = 0U;
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc = 0x80000000U;
    } else {
        if (((~ ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                 | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))) 
             & (0U != (0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                >> 7U))))) {
            __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 
                = ((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                    ? ((0xfU == (IData)(vlSelfRef.mem_wmask_o))
                        ? vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata
                        : ((3U == (IData)(vlSelfRef.mem_wmask_o))
                            ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                : (0xffffU & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                            : ((1U == (IData)(vlSelfRef.mem_wmask_o))
                                ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
                                                       >> 7U)))) 
                                        << 8U) | (0xffU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                    : (0xffU & vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata))
                                : 0U))) : ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                            ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                            : vlSelfRef.mem_addr_o));
            __VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 
                = (0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                            >> 7U));
            __VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 1U;
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))) {
            vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                        ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))) {
            vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                        ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))) {
            vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                        ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))) {
            vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                        ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc 
            = (((0x73U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                | ((0x30200073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                   | ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                      | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                         | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                            & ((~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                               & (0U != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))
                ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                    ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                        ? ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                            ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                        >> 1U)) << 1U)
                            : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                        : 0U) : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)
                : vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o);
    }
    if (__VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0] = 0U;
    }
    if (__VdlySet__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1] 
            = __VdlyVal__ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc);
    vlSelfRef.pc_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    Vysyx_25050136_NPC___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.pc_o, vlSelfRef.__Vfunc_pmem_read__2__Vfuncout);
    vlSelfRef.ysyx_25050136_NPC__DOT__inst = vlSelfRef.__Vfunc_pmem_read__2__Vfuncout;
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en 
        = ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
           | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
              | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))));
    vlSelfRef.mem_wdata_o = vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
        [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                   >> 0x14U))];
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 
        = ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
           | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 
        = (IData)((0x33U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en 
        = ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
           | (3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                    | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu))));
    vlSelfRef.mem_wmask_o = ((IData)(((0x2000U == (0x7000U 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                      & ((3U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))
                              ? 0xfU : (((IData)((0x1023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                                         | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                                            | (IData)(
                                                      (0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))
                                         ? 3U : (((IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                                                  | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu) 
                                                     | (IData)(
                                                               (3U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))
                                                  ? 1U
                                                  : 0U)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                                & (0x20U 
                                                   == 
                                                   (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                    >> 0x19U)));
    vlSelfRef.mem_ren_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.mem_wen_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                           & (0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8 
        = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7 
        = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
           | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_3 = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi) 
                                                | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi) 
                                                   | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc)));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
           & (0x20U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                        >> 0x19U)));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o 
        = ((((0x100073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
             << 5U) | (((0x73U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                        << 4U) | ((0x30200073U == vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                                  << 3U))) | (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8))));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)
            ? (0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                        >> 0xfU)) : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                      >> 0xfU))]);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en 
        = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
              | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3))));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o 
        = ((((((((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                 & (0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                           >> 0x19U))) | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl)) 
               << 0xeU) | ((IData)(((0x1000U == (0x7000U 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                    & ((0x13U == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                       | (0x33U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))) 
                           << 0xdU)) | ((((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai) 
                                          | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                             & (0x20U 
                                                == 
                                                (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                 >> 0x19U)))) 
                                         << 0xcU) | 
                                        ((IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                                         << 0xbU))) 
            | (((((IData)((0x4063U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                  | (IData)(((0x2000U == (0x7000U & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                             & ((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                | (0x33U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))) 
                 << 0xaU) | ((IData)((0x7063U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                             << 9U)) | ((((IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                                          | (IData)(
                                                    ((0x3000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                                     & ((0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                                        | (0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))) 
                                         << 8U) | ((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                                                   << 7U)))) 
           | (((((IData)((0x63U == (0x707fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                 << 6U) | ((IData)(((0x7000U == (0x7000U 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                    & ((0x33U == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                       | (0x13U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))) 
                           << 5U)) | (((IData)(((0x6000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                                & ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                                   | (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))) 
                                       << 4U) | ((IData)(
                                                         ((0x4000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                                          & ((0x33U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                                             | (0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))) 
                                                 << 3U))) 
              | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                  << 2U) | ((((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                              | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                 | ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_NPC__DOT__inst))) 
                                    | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                       & (0U == (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                 >> 0x19U)))))) 
                             << 1U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5) 
                                       | (0x37U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))))));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o 
        = (((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
            | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
               | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))
            ? ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                ? (0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                            >> 0x14U)) : (((- (IData)(
                                                      (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                             >> 0x14U)))
            : ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                ? (((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                  >> 7U))))
                : (((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                    | (0x37U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))
                    ? (0xfffff000U & vlSelfRef.ysyx_25050136_NPC__DOT__inst)
                    : ((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                        ? (((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0x800U & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                 >> 7U)))))
                        : ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                            ? (((- (IData)((vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__inst) 
                                              | (0x800U 
                                                 & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   >> 0x14U))))
                            : 0U)))));
    if ((0x20U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        Vysyx_25050136_NPC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit();
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0U;
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr 
        = (vlSelfRef.ysyx_25050136_NPC__DOT__inst >> 0x14U);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                    & (0U == (0xf80U & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0U;
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 0U;
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 
        = (vlSelfRef.ysyx_25050136_NPC__DOT__inst >> 0x14U);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 
        = (1U & (~ (IData)(((0U == (0xf8000U & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                            & ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                               | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))));
    if ((1U & (~ (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                      >> 1U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                          >> 2U)))) {
                if ((0x10U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0xbU;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x305U;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0x342U;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 1U;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 = 0x341U;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 1U;
                } else if ((8U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x341U;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 0U;
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
        = (0x1ffffffffULL & ((QData)((IData)(((0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                                               ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                              [(0x1fU 
                                                & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                                                   >> 0xfU))]
                                               : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc))) 
                             + (QData)((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o))));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
        = ((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
            ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
            : ((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst))
                ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc
                : ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5)
                    ? ((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
                    : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                   [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                              >> 0xfU))])));
    vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o 
        = (((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
            | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)))
            ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136_NPC__DOT__inst 
                      >> 0x14U))] : (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                      | ((0x13U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136_NPC__DOT__inst)) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136_NPC__DOT__inst))))
                                      ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
                                      : 0U));
    if (vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
            = ((0x341U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc
                : ((0x342U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause
                    : ((0x305U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                        ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec
                        : ((0x300U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))
                            ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus
                            : 0U))));
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit = 0U;
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
    }
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                  << 1U));
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit = 0U;
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit = 0U;
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        }
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
                }
            }
        }
    } else {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
    }
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                      << 1U));
        }
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                          << 1U));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                              << 1U));
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 
        = (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
           ^ vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)
            ? ((IData)(1U) + (~ vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
            : vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 = 0U;
    if ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o;
    } else if ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               | vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o);
    } else if ((4U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               & (~ vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o));
    } else if ((0x10U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.pc_o;
    }
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0 
        = ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o))) 
           + (IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))));
    vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
        = ((IData)((0U != (0xffU & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))))
            ? ((1U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o
                : ((2U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0
                    : ((4U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT____VdfgExtracted_h16afe161__0
                        : ((8U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2
                            : ((0x10U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                   | vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                : ((0x20U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       & vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                    : ((0x40U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (1U & (~ (IData)(
                                                           (0U 
                                                            != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))
                                        : (0U != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))))))
            : ((0x100U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                   < vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                : ((0x200U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                       >= vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                    : ((0x400U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? VL_LTS_III(32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                        : ((0x800U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? VL_GTES_III(32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                            : ((0x1000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                                 (0x1fU 
                                                  & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                : ((0x2000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       << (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                    : ((0x4000U & (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                           >> (0x1fU 
                                               & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                        : 0U))))))));
    vlSelfRef.mem_addr_o = ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                             ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out);
    if (vlSelfRef.mem_ren_o) {
        Vysyx_25050136_NPC___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelfRef.mem_addr_o, vlSelfRef.__Vfunc_pmem_read__0__Vfuncout);
        vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata 
            = vlSelfRef.__Vfunc_pmem_read__0__Vfuncout;
    } else {
        vlSelfRef.ysyx_25050136_NPC__DOT__mem_rdata = 0U;
    }
    if (vlSelfRef.mem_wen_o) {
        Vysyx_25050136_NPC___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelfRef.mem_addr_o, vlSelfRef.mem_wdata_o, (IData)(vlSelfRef.mem_wmask_o));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136_NPC___024root___dump_triggers__nba(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG
bool Vysyx_25050136_NPC___024root___eval_phase__act(Vysyx_25050136_NPC___024root* vlSelf);
bool Vysyx_25050136_NPC___024root___eval_phase__nba(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC___024root___eval(Vysyx_25050136_NPC___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root___eval\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vysyx_25050136_NPC___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/top.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop act");
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25050136_NPC___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25050136_NPC___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
        if (Vysyx_25050136_NPC___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}
