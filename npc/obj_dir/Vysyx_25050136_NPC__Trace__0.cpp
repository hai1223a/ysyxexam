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
        bufp->chgBit(oldp+0,(vlSymsp->TOP__ysyx_25050136_NPC.clk));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__ysyx_25050136_NPC.reset));
        bufp->chgIData(oldp+2,(vlSymsp->TOP__ysyx_25050136_NPC.inst_i),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__ysyx_25050136_NPC.mem_rdata_i),32);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__ysyx_25050136_NPC.mem_ren_o));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__ysyx_25050136_NPC.mem_wen_o));
        bufp->chgCData(oldp+6,(vlSymsp->TOP__ysyx_25050136_NPC.mem_len_o),3);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_raddr1_o),5);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_raddr2_o),5);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_rd_o),5);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2reg_rd_en_o));
        bufp->chgCData(oldp+11,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_fu_o),3);
        bufp->chgSData(oldp+12,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_alu_op_o),15);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_lsu_op_o),2);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_bqu_op_o),3);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op4_o),32);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_mem_signed_o));
        bufp->chgCData(oldp+17,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__fu_i),3);
        bufp->chgSData(oldp+18,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__alu_op_i),15);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__lsu_op_i),2);
        bufp->chgCData(oldp+20,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__bqu_op_i),3);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op4_i),32);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_len_i),3);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_signed_i));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_rdata_i),32);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_ren_o));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_wen_o));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__alu_en));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__lsu_en));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__bqu_en));
        bufp->chgIData(oldp+30,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_i),32);
        bufp->chgCData(oldp+31,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__raddr1_o),5);
        bufp->chgCData(oldp+32,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__raddr2_o),5);
        bufp->chgCData(oldp+33,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__fu_o),3);
        bufp->chgSData(oldp+34,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__alu_op_o),15);
        bufp->chgCData(oldp+35,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__lsu_op_o),2);
        bufp->chgCData(oldp+36,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__bqu_op_o),3);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op4_o),32);
        bufp->chgCData(oldp+38,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__mem_len_o),3);
        bufp->chgBit(oldp+39,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__mem_signed_o));
        bufp->chgCData(oldp+40,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd_o),5);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd_en_o));
        bufp->chgCData(oldp+42,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__opcode),7);
        bufp->chgCData(oldp+43,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rd),5);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rs1),5);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rs2),5);
        bufp->chgCData(oldp+46,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3),3);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct7),7);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_load));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_op_imm));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_auipc));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_store));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_op));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_lui));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_branch));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_jalr));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__type_jal));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_000));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_001));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_010));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_011));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_100));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_101));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_110));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct3_111));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct7_0000000));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__funct7_0100000));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lui));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_auipc));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_jal));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_jalr));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_beq));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bne));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_blt));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bge));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bltu));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_bgeu));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lb));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lh));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lw));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lbu));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_lhu));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sb));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sh));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sw));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_addi));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_slti));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sltiu));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_xori));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_ori));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_andi));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_slli));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_srli));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_srai));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_add));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sub));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sll));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_slt));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sltu));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_xor));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_srl));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_sra));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_or));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_and));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_ebreak));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Rtype));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Itype));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Stype));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Utype));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Btype));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__inst_Jtype));
        bufp->chgIData(oldp+111,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immI),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immS),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immB),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immU),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__immJ),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__imm),32);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__clk));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__reset));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__clk));
        bufp->chgCData(oldp+120,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__waddr_i),5);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__wen_i));
        bufp->chgCData(oldp+122,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__raddr1_i),5);
        bufp->chgCData(oldp+123,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__raddr2_i),5);
        bufp->chgSData(oldp+124,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__operation_i),15);
        bufp->chgBit(oldp+125,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__en_i));
        bufp->chgIData(oldp+126,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__op2_i),32);
        bufp->chgCData(oldp+127,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__operation_i),3);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__en_i));
        bufp->chgCData(oldp+129,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_len_i),3);
        bufp->chgBit(oldp+130,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_signed_i));
        bufp->chgIData(oldp+131,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_rdata_i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+132,(vlSymsp->TOP__ysyx_25050136_NPC.mem_wdata_o),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op2_o),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op5_o),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__reg2id_rdata1_o),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__reg2id_rdata2_o),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op2_i),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op5_i),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_wdata_o),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__load_data_o),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata1_i),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__rdata2_i),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op2_o),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op5_o),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata1_o),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__rdata2_o),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op2_i),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__add_sub_op2),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__store_data_i),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__mem_wdata_o),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__PVT__load_data_o),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+152,(vlSymsp->TOP__ysyx_25050136_NPC.mem_addr_o),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op1_o),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__id2ex_op3_o),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__ex2reg_gpr_data_o),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__ex2if_jump_addr_o),32);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__ex2if_jump_en_o));
        bufp->chgIData(oldp+158,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op1_i),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__op3_i),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__mem_addr_o),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__gpr_data_o),32);
        bufp->chgBit(oldp+162,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_en_o));
        bufp->chgIData(oldp+163,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__jump_addr_o),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__alu_out_o),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op1_o),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__op3_o),32);
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_valid_i));
        bufp->chgIData(oldp+168,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__dynamic_npc_i),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__wdata_i),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op1_i),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__out_o),32);
        bufp->chgQData(oldp+172,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__add_sub_result),33);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__add_sub_op1),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__op1_xor_op2),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__sra_result),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__sll_result),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__srl_result),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__PVT__out),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__op1_i),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__out_o),32);
        bufp->chgQData(oldp+182,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__result_add),33);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__PVT__result),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+185,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[0]),32);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[1]),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[2]),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[3]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[4]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[5]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[6]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[7]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[8]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[9]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[10]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[11]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[12]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[13]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[14]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[15]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[16]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[17]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[18]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[19]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[20]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[21]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[22]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[23]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[24]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[25]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[26]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[27]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[28]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[29]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[30]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__PVT__gpr[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+217,(vlSymsp->TOP__ysyx_25050136_NPC.pc_o),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__ysyx_25050136_NPC.__PVT__if2id_static_npc_o),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__pc_i),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__PVT__static_npc_i),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__static_npc_o),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__pc_o),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__PVT__pc),32);
    }
    bufp->chgBit(oldp+224,(vlSelfRef.clk));
    bufp->chgBit(oldp+225,(vlSelfRef.reset));
    bufp->chgIData(oldp+226,(vlSelfRef.inst_i),32);
    bufp->chgIData(oldp+227,(vlSelfRef.mem_rdata_i),32);
    bufp->chgIData(oldp+228,(vlSelfRef.mem_wdata_o),32);
    bufp->chgIData(oldp+229,(vlSelfRef.mem_addr_o),32);
    bufp->chgBit(oldp+230,(vlSelfRef.mem_ren_o));
    bufp->chgBit(oldp+231,(vlSelfRef.mem_wen_o));
    bufp->chgCData(oldp+232,(vlSelfRef.mem_len_o),3);
    bufp->chgIData(oldp+233,(vlSelfRef.pc_o),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
