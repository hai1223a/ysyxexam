// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136_NPC__Syms.h"


void Vysyx_25050136_NPC___024root__trace_chg_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25050136_NPC___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25050136_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_NPC___024root*>(voidSelf);
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25050136_NPC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25050136_NPC___024root__trace_chg_0_sub_0(Vysyx_25050136_NPC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgIData(oldp+1,(((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    }
    bufp->chgBit(oldp+34,(vlSelfRef.clk));
    bufp->chgBit(oldp+35,(vlSelfRef.reset));
    bufp->chgIData(oldp+36,(vlSelfRef.inst_i),32);
    bufp->chgIData(oldp+37,(vlSelfRef.mem_rdata_i),32);
    bufp->chgIData(oldp+38,(vlSelfRef.mem_wdata_o),32);
    bufp->chgIData(oldp+39,(vlSelfRef.mem_addr_o),32);
    bufp->chgBit(oldp+40,(vlSelfRef.mem_ren_o));
    bufp->chgBit(oldp+41,(vlSelfRef.mem_wen_o));
    bufp->chgCData(oldp+42,(vlSelfRef.mem_len_o),3);
    bufp->chgIData(oldp+43,(vlSelfRef.pc_o),32);
    bufp->chgCData(oldp+44,((0x1fU & (vlSelfRef.inst_i 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+45,((0x1fU & (vlSelfRef.inst_i 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+46,((0x1fU & (vlSelfRef.inst_i 
                                      >> 7U))),5);
    bufp->chgBit(oldp+47,((0x13U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+48,((IData)((0x13U == (0x707fU 
                                             & vlSelfRef.inst_i)))));
    bufp->chgIData(oldp+49,(((0U == (0x1fU & (vlSelfRef.inst_i 
                                              >> 0xfU)))
                              ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                             [(0x1fU & (vlSelfRef.inst_i 
                                        >> 0xfU))])),32);
    bufp->chgIData(oldp+50,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelfRef.inst_i 
                                          >> 0x14U))),32);
    bufp->chgBit(oldp+51,((0x100073U == vlSelfRef.inst_i)));
    bufp->chgIData(oldp+52,(((0U == (0x1fU & (vlSelfRef.inst_i 
                                              >> 0x14U)))
                              ? 0U : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                             [(0x1fU & (vlSelfRef.inst_i 
                                        >> 0x14U))])),32);
    bufp->chgIData(oldp+53,(((0x13U == (0x7fU & vlSelfRef.inst_i))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out
                              : 0U)),32);
    bufp->chgQData(oldp+54,((0x1ffffffffULL & ((QData)((IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelfRef.inst_i 
                                                                     >> 0xfU)))
                                                                 ? 0U
                                                                 : 
                                                                vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                                [
                                                                (0x1fU 
                                                                 & (vlSelfRef.inst_i 
                                                                    >> 0xfU))]))) 
                                               + (QData)((IData)(
                                                                 (((- (IData)(
                                                                              (vlSelfRef.inst_i 
                                                                               >> 0x1fU))) 
                                                                   << 0xcU) 
                                                                  | (vlSelfRef.inst_i 
                                                                     >> 0x14U))))))),33);
    bufp->chgIData(oldp+56,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
    bufp->chgCData(oldp+57,((0x7fU & vlSelfRef.inst_i)),7);
    bufp->chgCData(oldp+58,((7U & (vlSelfRef.inst_i 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+59,((vlSelfRef.inst_i >> 0x19U)),7);
    bufp->chgBit(oldp+60,((3U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+61,((0x17U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+62,((0x23U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+63,((0x33U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+64,((0x37U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+65,((0x63U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+66,((0x67U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+67,((0x6fU == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+68,((0U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+69,((1U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+70,((2U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+71,((3U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+72,((4U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+73,((5U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+74,((6U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+75,((7U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+76,((0U == (vlSelfRef.inst_i 
                                  >> 0x19U))));
    bufp->chgBit(oldp+77,((0x20U == (vlSelfRef.inst_i 
                                     >> 0x19U))));
    bufp->chgBit(oldp+78,(((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                           | ((3U == (0x7fU & vlSelfRef.inst_i)) 
                              | (0x67U == (0x7fU & vlSelfRef.inst_i))))));
    bufp->chgBit(oldp+79,(((0x17U == (0x7fU & vlSelfRef.inst_i)) 
                           | (0x37U == (0x7fU & vlSelfRef.inst_i)))));
    bufp->chgIData(oldp+80,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0xfe0U & 
                                           (vlSelfRef.inst_i 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSelfRef.inst_i 
                                                >> 7U))))),32);
    bufp->chgIData(oldp+81,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0xcU) | ((0x800U & 
                                           (vlSelfRef.inst_i 
                                            << 4U)) 
                                          | ((0x7e0U 
                                              & (vlSelfRef.inst_i 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelfRef.inst_i 
                                                   >> 7U)))))),32);
    bufp->chgIData(oldp+82,((0xfffff000U & vlSelfRef.inst_i)),32);
    bufp->chgIData(oldp+83,((((- (IData)((vlSelfRef.inst_i 
                                          >> 0x1fU))) 
                              << 0x14U) | (((0xff000U 
                                             & vlSelfRef.inst_i) 
                                            | (0x800U 
                                               & (vlSelfRef.inst_i 
                                                  >> 9U))) 
                                           | (0x7feU 
                                              & (vlSelfRef.inst_i 
                                                 >> 0x14U))))),32);
}

void Vysyx_25050136_NPC___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_NPC___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25050136_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_NPC___024root*>(voidSelf);
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
