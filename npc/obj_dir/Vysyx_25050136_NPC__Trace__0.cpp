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
        bufp->chgCData(oldp+0,((1U | (((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                       << 2U) | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                                 << 1U)))),3);
        bufp->chgSData(oldp+1,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
        bufp->chgIData(oldp+2,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op4_o),32);
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o),32);
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
        bufp->chgBit(oldp+9,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
        bufp->chgBit(oldp+10,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
        bufp->chgBit(oldp+11,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+12,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o),32);
        bufp->chgIData(oldp+13,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o),32);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op5_o),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
        bufp->chgQData(oldp+17,((0x1ffffffffULL & (
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o) 
                                                   + 
                                                   VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
        bufp->chgIData(oldp+21,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o, 
                                               (0x1fU 
                                                & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o))),32);
        bufp->chgIData(oldp+22,((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
                                 << (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o))),32);
        bufp->chgIData(oldp+23,((vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op1_o 
                                 >> (0x1fU & vlSelfRef.ysyx_25050136_NPC__DOT__id2ex_op2_o))),32);
        bufp->chgQData(oldp+24,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+26,(((IData)(4U) + vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    }
    bufp->chgBit(oldp+60,(vlSelfRef.clk));
    bufp->chgBit(oldp+61,(vlSelfRef.reset));
    bufp->chgIData(oldp+62,(vlSelfRef.inst_i),32);
    bufp->chgIData(oldp+63,(vlSelfRef.mem_rdata_i),32);
    bufp->chgIData(oldp+64,(vlSelfRef.mem_wdata_o),32);
    bufp->chgIData(oldp+65,(vlSelfRef.mem_addr_o),32);
    bufp->chgBit(oldp+66,(vlSelfRef.mem_ren_o));
    bufp->chgBit(oldp+67,(vlSelfRef.mem_wen_o));
    bufp->chgCData(oldp+68,(vlSelfRef.mem_len_o),3);
    bufp->chgIData(oldp+69,(vlSelfRef.pc_o),32);
    bufp->chgCData(oldp+70,((0x1fU & (vlSelfRef.inst_i 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+71,((0x1fU & (vlSelfRef.inst_i 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+72,((0x1fU & (vlSelfRef.inst_i 
                                      >> 7U))),5);
    bufp->chgBit(oldp+73,((1U & (~ ((0x23U == (0x7fU 
                                               & vlSelfRef.inst_i)) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelfRef.inst_i)))))));
    bufp->chgCData(oldp+74,((((0x23U == (0x7fU & vlSelfRef.inst_i)) 
                              << 1U) | (3U == (0x7fU 
                                               & vlSelfRef.inst_i)))),2);
    bufp->chgCData(oldp+75,((((0x63U == (0x7fU & vlSelfRef.inst_i)) 
                              << 2U) | (((0x6fU == 
                                          (0x7fU & vlSelfRef.inst_i)) 
                                         << 1U) | (0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.inst_i))))),3);
    bufp->chgIData(oldp+76,(((0x67U == (0x7fU & vlSelfRef.inst_i))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__reg2id_rdata1_o
                              : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->chgIData(oldp+77,(((3U == (0x7fU & vlSelfRef.inst_i))
                              ? vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__load_data_o
                              : vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)),32);
    bufp->chgIData(oldp+78,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                              ? ((0x67U == (0x7fU & vlSelfRef.inst_i))
                                  ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                              >> 1U)) 
                                     << 1U) : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                              : 0U)),32);
    bufp->chgBit(oldp+79,(((0x67U == (0x7fU & vlSelfRef.inst_i)) 
                           | ((0x6fU == (0x7fU & vlSelfRef.inst_i)) 
                              | ((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                 & (0U != vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out))))));
    bufp->chgIData(oldp+80,(((0x67U == (0x7fU & vlSelfRef.inst_i))
                              ? ((IData)((vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                          >> 1U)) << 1U)
                              : (IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
    bufp->chgCData(oldp+81,((0x7fU & vlSelfRef.inst_i)),7);
    bufp->chgCData(oldp+82,((7U & (vlSelfRef.inst_i 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+83,((vlSelfRef.inst_i >> 0x19U)),7);
    bufp->chgBit(oldp+84,((3U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+85,((0x13U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+86,((0x17U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+87,((0x23U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+88,((0x33U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+89,((0x37U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+90,((0x63U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+91,((0x67U == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+92,((0x6fU == (0x7fU & vlSelfRef.inst_i))));
    bufp->chgBit(oldp+93,((0U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+94,((1U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+95,((2U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+96,((3U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+97,((4U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+98,((5U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+99,((6U == (7U & (vlSelfRef.inst_i 
                                        >> 0xcU)))));
    bufp->chgBit(oldp+100,((7U == (7U & (vlSelfRef.inst_i 
                                         >> 0xcU)))));
    bufp->chgBit(oldp+101,((0U == (vlSelfRef.inst_i 
                                   >> 0x19U))));
    bufp->chgBit(oldp+102,((0x20U == (vlSelfRef.inst_i 
                                      >> 0x19U))));
    bufp->chgBit(oldp+103,((IData)((0x63U == (0x707fU 
                                              & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+104,((IData)((0x1063U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+105,((IData)((0x4063U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+106,((IData)((0x5063U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+107,((IData)((0x6063U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+108,((IData)((0x7063U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+109,((IData)((3U == (0x707fU 
                                           & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+110,((IData)((0x1003U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+111,((IData)((0x2003U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+112,((IData)((0x23U == (0x707fU 
                                              & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+113,((IData)((0x1023U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+114,((IData)((0x2023U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+115,((IData)((0x13U == (0x707fU 
                                              & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+116,((IData)((0x2013U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+117,((IData)((0x3013U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+118,((IData)((0x4013U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+119,((IData)((0x6013U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+120,((IData)((0x7013U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+121,((IData)((0x1013U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+122,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                            & (0U == (vlSelfRef.inst_i 
                                      >> 0x19U)))));
    bufp->chgBit(oldp+123,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                            & (0U == (vlSelfRef.inst_i 
                                      >> 0x19U)))));
    bufp->chgBit(oldp+124,((IData)((0x1033U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+125,((IData)((0x2033U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+126,((IData)((0x3033U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+127,((IData)((0x4033U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+128,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                            & (0x20U == (vlSelfRef.inst_i 
                                         >> 0x19U)))));
    bufp->chgBit(oldp+129,((IData)((0x6033U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+130,((IData)((0x7033U == (0x707fU 
                                                & vlSelfRef.inst_i)))));
    bufp->chgBit(oldp+131,((0x100073U == vlSelfRef.inst_i)));
    bufp->chgBit(oldp+132,(((0x13U == (0x7fU & vlSelfRef.inst_i)) 
                            | ((3U == (0x7fU & vlSelfRef.inst_i)) 
                               | (0x67U == (0x7fU & vlSelfRef.inst_i))))));
    bufp->chgBit(oldp+133,(((0x17U == (0x7fU & vlSelfRef.inst_i)) 
                            | (0x37U == (0x7fU & vlSelfRef.inst_i)))));
    bufp->chgIData(oldp+134,(((IData)(vlSelfRef.ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                               ? (0x1fU & (vlSelfRef.inst_i 
                                           >> 0x14U))
                               : (((- (IData)((vlSelfRef.inst_i 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelfRef.inst_i 
                                               >> 0x14U)))),32);
    bufp->chgIData(oldp+135,((((- (IData)((vlSelfRef.inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelfRef.inst_i 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelfRef.inst_i 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+136,((((- (IData)((vlSelfRef.inst_i 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelfRef.inst_i 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.inst_i 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.inst_i 
                                                    >> 7U)))))),32);
    bufp->chgIData(oldp+137,((0xfffff000U & vlSelfRef.inst_i)),32);
    bufp->chgIData(oldp+138,((((- (IData)((vlSelfRef.inst_i 
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
