// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136__Syms.h"


VL_ATTR_COLD void Vysyx_25050136___024root__trace_init_sub__TOP__0(Vysyx_25050136___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+297,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+307,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+311,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+315,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+316,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+320,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+322,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+323,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+327,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+329,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+333,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+335,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+336,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+340,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+344,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+345,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+349,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+350,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+351,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+352,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+355,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+356,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+357,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("ysyx_25050136", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+297,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+307,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+311,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+314,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+315,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+316,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+318,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+320,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+322,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+323,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+327,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+329,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+331,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+333,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+335,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+336,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+340,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+344,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+345,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+349,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+350,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+351,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+352,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+355,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+356,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+357,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+409,0,"TOP_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"TOP_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"TOP_MASTER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"TOP_SLAVER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+358,0,"s_awready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"s_awid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+413,0,"s_awlen_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+414,0,"s_awsize_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+415,0,"s_awburst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"s_wready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"s_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"s_wlast_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+199,0,"s_bready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+360,0,"s_bresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+361,0,"s_bid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+200,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"s_arready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+8,0,"s_araddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"s_arid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+413,0,"s_arlen_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"s_arsize_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+415,0,"s_arburst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+201,0,"s_rready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+12,0,"s_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+14,0,"s_rresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"s_rlast_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+362,0,"s_rid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+364,0,"m_awready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+365,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+367,0,"m_awid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+368,0,"m_awlen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+369,0,"m_awsize_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+370,0,"m_awburst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+371,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+372,0,"m_wready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+373,0,"m_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+375,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+376,0,"m_wlast_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+377,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+378,0,"m_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+379,0,"m_bresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+380,0,"m_bid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+381,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+382,0,"m_arready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+383,0,"m_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+385,0,"m_arid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+386,0,"m_arlen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"m_arsize_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+388,0,"m_arburst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+389,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+390,0,"m_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+391,0,"m_rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+393,0,"m_rresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+394,0,"m_rlast_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+395,0,"m_rid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+202,0,"inst_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"inst_arready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"inst_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"inst_arid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"inst_arlen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"inst_arsize_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"inst_arburst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"inst_rvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"inst_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"inst_rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"inst_rresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"inst_rlast_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"inst_rid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+418,0,"inst_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"inst_awready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"inst_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"inst_awid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"inst_awlen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+420,0,"inst_awsize_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"inst_awburst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+418,0,"inst_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"inst_wready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"inst_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"inst_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+418,0,"inst_wlast_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"inst_bvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"inst_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+399,0,"inst_bresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+400,0,"inst_bid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+205,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"mem_awready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"mem_awid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"mem_awlen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"mem_awsize_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"mem_awburst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+206,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"mem_wready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+206,0,"mem_wlast_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"mem_bvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"mem_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"mem_bresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+401,0,"mem_bid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+208,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_arready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"mem_arid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"mem_arlen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"mem_arsize_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"mem_arburst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"mem_rvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"mem_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"mem_rresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"mem_rlast_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"mem_rid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+210,0,"clint_awvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"clint_awready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"clint_awaddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"clint_awid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"clint_awlen_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"clint_awsize_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+214,0,"clint_awburst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+215,0,"clint_wvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"clint_wready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"clint_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"clint_wstrb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+216,0,"clint_wlast_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"clint_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"clint_bready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"clint_bresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+415,0,"clint_bid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+218,0,"clint_arvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"clint_arready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"clint_araddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"clint_arid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"clint_arlen_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"clint_arsize_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+214,0,"clint_arburst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+220,0,"clint_rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"clint_rready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"clint_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"clint_rresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+223,0,"clint_rlast_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"clint_rid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("u_ysyx_25050136_ARBITER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+411,0,"MASTER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"SLAVER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+358,0,"s_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"s_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+413,0,"s_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+414,0,"s_awsize_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+415,0,"s_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"s_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"s_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"s_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+199,0,"s_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+360,0,"s_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+361,0,"s_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+200,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"s_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+8,0,"s_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+412,0,"s_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+413,0,"s_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"s_arsize_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+415,0,"s_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+201,0,"s_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+12,0,"s_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+14,0,"s_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"s_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+362,0,"s_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+364,0,"m_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+365,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+367,0,"m_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+368,0,"m_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+369,0,"m_awsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+370,0,"m_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+371,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+372,0,"m_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+373,0,"m_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+375,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+376,0,"m_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+377,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+378,0,"m_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+379,0,"m_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+380,0,"m_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+381,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+382,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+383,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+385,0,"m_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+386,0,"m_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+387,0,"m_arsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+388,0,"m_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+389,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+390,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+391,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+393,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+394,0,"m_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+395,0,"m_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+421,0,"s0_Laddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"s0_Raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"t_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"t_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"t_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"t_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"t_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"t_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"t_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+230,0,"t_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"t_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"t_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"t_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+231,0,"t_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"t_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"t_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"t_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+407,0,"t_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+233,0,"t_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"t_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"t_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"t_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"t_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"t_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"t_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+47,0,"t_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"t_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"t_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"t_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+50,0,"t_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+408,0,"t_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"for_s_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"for_s_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"current_master",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+236,0,"current_master_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+237,0,"master_grand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+238,0,"master_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+239,0,"current_slaver",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"current_slaver_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"slaver_grand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"slaver_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+241,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_CLINT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"s_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"s_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"s_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"s_awsize_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+214,0,"s_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+215,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"s_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"s_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+216,0,"s_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"s_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"s_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+415,0,"s_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+218,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"s_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"s_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"s_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"s_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"s_arsize_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+214,0,"s_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+220,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"s_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"s_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"s_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+223,0,"s_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"s_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+242,0,"mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+419,0,"READ_IDEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"READ_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"s_araddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"s_araddr_align",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"s_arlen_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"s_arsize_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+248,0,"s_arburst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+219,0,"s_arready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"s_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"s_rid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+249,0,"rdata_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+220,0,"state_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"align_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+250,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_NPC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"inst_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"inst_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"inst_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"inst_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"inst_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"inst_arsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"inst_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"inst_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"inst_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"inst_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"inst_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"inst_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"inst_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+205,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"mem_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"mem_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"mem_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"mem_awsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"mem_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+206,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"mem_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+206,0,"mem_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"mem_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"mem_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"mem_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+401,0,"mem_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+208,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"mem_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"mem_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"mem_arsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"mem_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"mem_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"mem_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"mem_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"mem_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"mem_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+252,0,"if2id_static_npc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"if2id_inst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"if2id_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"id2reg_raddr1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"id2reg_raddr2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"id2reg_rd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+61,0,"id2reg_rd_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"id2ex_fu_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"id2ex_alu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+64,0,"id2ex_lsu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"id2ex_bqu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"id2ex_csru_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+67,0,"id2ex_alu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"id2ex_alu_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"id2ex_lsu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"id2ex_bqu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"id2ex_bqu_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"id2ex_csru_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"id2ex_csru_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+203,0,"id2ex_pc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"id2ex_mem_signed_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"id2ex_csru_wen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"id2ex_csru_ren_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"id2if_fready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"id2ex_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"id2ex_mem_mask_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"reg2id_rdata1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"reg2id_rdata2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"ex2reg_gpr_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"ex2if_jump_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"ex2if_jump_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"ex2id_fready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"ex2reg_gpr_wen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"ex2if_pc_updata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+427,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"m_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+430,0,"m_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"m_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+433,0,"m_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"gpr_wen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"gpr_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+436,0,"jump_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"jump_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+438,0,"fready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"rd_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"fu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+64,0,"lsu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"bqu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"csru_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+67,0,"alu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"alu_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"bqu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"bqu_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"lsu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"csru_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"csru_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+74,0,"csru_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"csru_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"m_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"m_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"m_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"m_awsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"m_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+206,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"m_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"m_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+206,0,"m_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"m_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"m_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+401,0,"m_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+208,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"m_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"m_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"m_arsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"m_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"m_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"m_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"mem_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"gpr_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"gpr_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"jump_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"jump_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"fvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"fready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"alu_out_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"load_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"mem_valid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"bqu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"bqu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"csru_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"csru_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+253,0,"fready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+82,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+92,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+67,0,"add_sub_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"add_sub_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"op1_xor_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"sra_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"sll_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"srl_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_BQU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+88,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+100,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+102,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_CSRU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+71,0,"csru_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"csru_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+75,0,"csru_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"csru_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"csru_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"csr_wdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"csr_wdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"csr_waddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+106,0,"csr_waddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+107,0,"csr_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+108,0,"csr_wen1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"csr_wen2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"csr_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_CSR_File", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"csr_waddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+108,0,"csr_wen1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"csr_wdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"csr_waddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+109,0,"csr_wen2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"csr_wdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"csr_raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+110,0,"csr_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"MEPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+440,0,"MCAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+441,0,"MTVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+442,0,"MSTATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+254,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"mepc_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"mcause_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"mtvec_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"mstatus_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+115,0,"mepc_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"mcause_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"mtvec_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"mstatus_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"m_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"m_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"m_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"m_awsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"m_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+206,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"m_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"m_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+206,0,"m_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"m_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"m_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+401,0,"m_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+208,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"m_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"m_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"m_arsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"m_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+31,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"m_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"m_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+57,0,"fvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"mem_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"mem_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"load_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"mem_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"READ_IEDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+443,0,"READ_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"READ_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+258,0,"m_arvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"m_arsize_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+209,0,"m_rready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"load_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"state_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+119,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"WRITE_IDEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+443,0,"WRITE_RUNNING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"WRITE_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+207,0,"m_bready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"aw_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"w_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"state_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+121,0,"aw_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"b_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_ID", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"static_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"rdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"raddr1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"rdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"raddr2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,0,"fu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"alu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+64,0,"lsu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"bqu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"csru_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+67,0,"alu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"alu_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"bqu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"bqu_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"lsu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"csru_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"csru_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+75,0,"csru_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"csru_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"mem_mask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"mem_signed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+61,0,"rd_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"fvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"fready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+60,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+125,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+126,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+127,0,"type_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"type_op_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"type_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"type_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"type_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"type_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"type_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"type_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"type_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"type_system",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"funct3_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"funct3_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"funct3_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"funct3_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"funct3_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"funct3_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"funct3_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"funct3_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"funct7_0000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"funct7_0100000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"inst_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"inst_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"inst_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"inst_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"inst_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"inst_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"inst_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"inst_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"inst_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"inst_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"inst_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"inst_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"inst_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"inst_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"inst_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"inst_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"inst_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"inst_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"inst_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"inst_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"inst_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"inst_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"inst_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"inst_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"inst_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"inst_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"inst_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"inst_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"inst_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"inst_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"inst_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"inst_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"inst_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"inst_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"inst_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"inst_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"inst_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"inst_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"inst_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"inst_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"inst_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"inst_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"inst_Rtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"inst_Itype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"inst_Stype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"inst_Utype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"inst_Btype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"inst_Jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_IF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"m_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"m_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"m_arsize_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+417,0,"m_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+17,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"m_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+396,0,"m_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"dynamic_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"dynamic_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"static_npc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+204,0,"m_rready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"READ_IEDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+443,0,"READ_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"READ_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+445,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"state_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+410,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+297,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+81,0,"wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"raddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+77,0,"rdata1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"raddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"rdata2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gpr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+265+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25050136___024root__trace_init_top(Vysyx_25050136___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_init_top\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25050136___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25050136___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25050136___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25050136___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_25050136___024root__trace_register(Vysyx_25050136___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_register\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25050136___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25050136___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25050136___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25050136___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25050136___024root__trace_const_0_sub_0(Vysyx_25050136___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25050136___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_const_0\n"); );
    // Init
    Vysyx_25050136___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136___024root*>(voidSelf);
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25050136___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25050136___024root__trace_const_0_sub_0(Vysyx_25050136___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_const_0_sub_0\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+409,(5U),32);
    bufp->fullIData(oldp+410,(0x20U),32);
    bufp->fullIData(oldp+411,(2U),32);
    bufp->fullCData(oldp+412,(0U),8);
    bufp->fullSData(oldp+413,(0U),16);
    bufp->fullCData(oldp+414,(0x10U),6);
    bufp->fullCData(oldp+415,(0U),4);
    bufp->fullCData(oldp+416,(2U),3);
    bufp->fullCData(oldp+417,(0U),2);
    bufp->fullBit(oldp+418,(0U));
    bufp->fullIData(oldp+419,(0U),32);
    bufp->fullCData(oldp+420,(0U),3);
    bufp->fullIData(oldp+421,(0x2000000U),32);
    bufp->fullIData(oldp+422,(0x200ffffU),32);
    bufp->fullIData(oldp+423,(1U),32);
    bufp->fullBit(oldp+424,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__ex2if_pc_updata_o));
    bufp->fullBit(oldp+425,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_awvalid_o));
    bufp->fullIData(oldp+426,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_awaddr_o),32);
    bufp->fullBit(oldp+427,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_wvalid_o));
    bufp->fullIData(oldp+428,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_wdata_o),32);
    bufp->fullCData(oldp+429,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_wstrb_o),4);
    bufp->fullBit(oldp+430,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_bready_o));
    bufp->fullBit(oldp+431,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_arvalid_o));
    bufp->fullIData(oldp+432,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_araddr_o),32);
    bufp->fullBit(oldp+433,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__m_rready_o));
    bufp->fullBit(oldp+434,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__gpr_wen_o));
    bufp->fullIData(oldp+435,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__gpr_data_o),32);
    bufp->fullBit(oldp+436,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__jump_en_o));
    bufp->fullIData(oldp+437,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__jump_addr_o),32);
    bufp->fullBit(oldp+438,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__fready_o));
    bufp->fullSData(oldp+439,(0x341U),12);
    bufp->fullSData(oldp+440,(0x342U),12);
    bufp->fullSData(oldp+441,(0x305U),12);
    bufp->fullSData(oldp+442,(0x300U),12);
    bufp->fullCData(oldp+443,(1U),2);
    bufp->fullCData(oldp+444,(2U),2);
    bufp->fullIData(oldp+445,(0x80000000U),32);
}

VL_ATTR_COLD void Vysyx_25050136___024root__trace_full_0_sub_0(Vysyx_25050136___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25050136___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_full_0\n"); );
    // Init
    Vysyx_25050136___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136___024root*>(voidSelf);
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25050136___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25050136___024root__trace_full_0_sub_0(Vysyx_25050136___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root__trace_full_0_sub_0\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                             << 0x20U)),64);
    bufp->fullQData(oldp+3,(((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                             [(0x1fU 
                                               & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                  >> 0x14U))])) 
                             << 0x20U)),64);
    bufp->fullCData(oldp+5,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                             << 4U)),8);
    bufp->fullCData(oldp+6,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i) 
                              << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                                        & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->fullCData(oldp+7,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_arready_i) 
                              << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_arready_i))),2);
    bufp->fullQData(oldp+8,(vlSelfRef.ysyx_25050136__DOT__s_araddr_i),64);
    bufp->fullCData(oldp+10,((2U | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r) 
                                    << 3U))),6);
    bufp->fullCData(oldp+11,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i))),2);
    bufp->fullQData(oldp+12,((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rdata_i)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__inst_rdata_i)))),64);
    bufp->fullCData(oldp+14,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i) 
                               << 2U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rresp_i))),4);
    bufp->fullCData(oldp+15,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rlast_i) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rlast_i))),2);
    bufp->fullBit(oldp+16,(vlSelfRef.ysyx_25050136__DOT__inst_arready_i));
    bufp->fullBit(oldp+17,(vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i));
    bufp->fullIData(oldp+18,(vlSelfRef.ysyx_25050136__DOT__inst_rdata_i),32);
    bufp->fullCData(oldp+19,(vlSelfRef.ysyx_25050136__DOT__inst_rresp_i),2);
    bufp->fullBit(oldp+20,(vlSelfRef.ysyx_25050136__DOT__inst_rlast_i));
    bufp->fullBit(oldp+21,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                            & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->fullBit(oldp+22,(vlSelfRef.ysyx_25050136__DOT__mem_awready_i));
    bufp->fullIData(oldp+23,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
    bufp->fullBit(oldp+24,(vlSelfRef.ysyx_25050136__DOT__mem_wready_i));
    bufp->fullIData(oldp+25,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                             [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0x14U))]),32);
    bufp->fullCData(oldp+26,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o),4);
    bufp->fullBit(oldp+27,(vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i));
    bufp->fullCData(oldp+28,(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i),2);
    bufp->fullBit(oldp+29,(vlSelfRef.ysyx_25050136__DOT__mem_arready_i));
    bufp->fullCData(oldp+30,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r),3);
    bufp->fullBit(oldp+31,(vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i));
    bufp->fullIData(oldp+32,(vlSelfRef.ysyx_25050136__DOT__mem_rdata_i),32);
    bufp->fullCData(oldp+33,(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i),2);
    bufp->fullBit(oldp+34,(vlSelfRef.ysyx_25050136__DOT__mem_rlast_i));
    bufp->fullIData(oldp+35,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? (IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                           << 0x20U) 
                                          >> (0x3fU 
                                              & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                               : 0U)),32);
    bufp->fullIData(oldp+36,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? (IData)((((QData)((IData)(
                                                           vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                           [
                                                           (0x1fU 
                                                            & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                               >> 0x14U))])) 
                                           << 0x20U) 
                                          >> (0x3fU 
                                              & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                               : 0U)),32);
    bufp->fullCData(oldp+37,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? (0xfU & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                           << 4U) >> 
                                          (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))))
                               : 0U)),4);
    bufp->fullIData(oldp+38,(vlSelfRef.ysyx_25050136__DOT__clint_araddr_i),32);
    bufp->fullCData(oldp+39,(vlSelfRef.ysyx_25050136__DOT__clint_arsize_i),3);
    bufp->fullIData(oldp+40,((IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                       << 0x20U) >> 
                                      (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))),32);
    bufp->fullIData(oldp+41,((IData)((((QData)((IData)(
                                                       vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                       [
                                                       (0x1fU 
                                                        & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                           >> 0x14U))])) 
                                       << 0x20U) >> 
                                      (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))),32);
    bufp->fullCData(oldp+42,((0xfU & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                       << 4U) >> (7U 
                                                  & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))))),4);
    bufp->fullBit(oldp+43,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid));
    bufp->fullBit(oldp+44,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready));
    bufp->fullIData(oldp+45,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr),32);
    bufp->fullCData(oldp+46,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize),3);
    bufp->fullBit(oldp+47,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid));
    bufp->fullIData(oldp+48,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata),32);
    bufp->fullCData(oldp+49,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp),2);
    bufp->fullBit(oldp+50,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
    bufp->fullIData(oldp+51,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr),32);
    bufp->fullIData(oldp+52,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr),32);
    bufp->fullCData(oldp+53,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand),2);
    bufp->fullCData(oldp+54,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id),2);
    bufp->fullIData(oldp+55,((~ (((IData)(1U) << (IData)(vlSelfRef.ysyx_25050136__DOT__clint_arsize_i)) 
                                 - (IData)(1U)))),32);
    bufp->fullIData(oldp+56,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o),32);
    bufp->fullBit(oldp+57,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o));
    bufp->fullCData(oldp+58,((0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 7U))),5);
    bufp->fullBit(oldp+61,((1U & (~ ((0x23U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
    bufp->fullCData(oldp+62,(((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                << 3U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                << 1U) | (1U & (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
    bufp->fullSData(oldp+63,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
    bufp->fullCData(oldp+64,((((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                               << 1U) | (3U == (0x7fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))),2);
    bufp->fullCData(oldp+65,((((0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                               << 2U) | (((0x6fU == 
                                           (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                          << 1U) | 
                                         (0x67U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))),3);
    bufp->fullCData(oldp+66,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
    bufp->fullIData(oldp+67,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
    bufp->fullIData(oldp+68,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
    bufp->fullIData(oldp+69,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                               ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                              [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                         >> 0xfU))]
                               : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->fullIData(oldp+70,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
    bufp->fullIData(oldp+71,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
    bufp->fullSData(oldp+72,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+73,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
    bufp->fullBit(oldp+74,((1U & (~ (IData)(((0U == 
                                              (0xf8000U 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                             & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
    bufp->fullBit(oldp+75,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                     & (0U == (0xf80U 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
    bufp->fullBit(oldp+76,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o));
    bufp->fullIData(oldp+77,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                             [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+78,(((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                               ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r
                               : ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                   ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                   : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o))),32);
    bufp->fullIData(oldp+79,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                               ? ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                   ? ((0x67U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                       ? ((IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                   >> 1U)) 
                                          << 1U) : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                   : 0U) : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
    bufp->fullBit(oldp+80,(((0x73U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                            | ((0x30200073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                               | ((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                     | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                        & ((~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                           & (0U != vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
    bufp->fullBit(oldp+81,(((~ ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | (0x63U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                            & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o))));
    bufp->fullBit(oldp+82,((1U & (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
    bufp->fullBit(oldp+83,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
    bufp->fullBit(oldp+84,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                            & (3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+85,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                            & (0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullIData(oldp+86,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r),32);
    bufp->fullBit(oldp+87,((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                             & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i))) 
                            | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) 
                               & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i))))));
    bufp->fullBit(oldp+88,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
    bufp->fullIData(oldp+89,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                               ? ((0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                   ? ((IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                               >> 1U)) 
                                      << 1U) : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                               : 0U)),32);
    bufp->fullBit(oldp+90,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
    bufp->fullIData(oldp+91,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
    bufp->fullQData(oldp+92,((0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                                + VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
    bufp->fullIData(oldp+94,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
    bufp->fullIData(oldp+95,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
    bufp->fullIData(oldp+96,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                            (0x1fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+97,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                              << (0x1fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+98,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                              >> (0x1fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+99,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
    bufp->fullQData(oldp+100,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
    bufp->fullIData(oldp+102,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                ? ((IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                            >> 1U)) 
                                   << 1U) : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
    bufp->fullIData(oldp+103,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
    bufp->fullIData(oldp+104,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
    bufp->fullSData(oldp+105,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
    bufp->fullSData(oldp+106,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
    bufp->fullSData(oldp+107,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
    bufp->fullBit(oldp+108,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
    bufp->fullBit(oldp+109,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
    bufp->fullBit(oldp+110,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
    bufp->fullCData(oldp+111,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
    bufp->fullCData(oldp+112,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
    bufp->fullCData(oldp+113,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
    bufp->fullCData(oldp+114,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
    bufp->fullIData(oldp+115,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullIData(oldp+116,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullIData(oldp+117,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullIData(oldp+118,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullBit(oldp+119,(((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read)) 
                             & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_arready_i))));
    bufp->fullBit(oldp+120,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire));
    bufp->fullBit(oldp+121,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire));
    bufp->fullBit(oldp+122,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire));
    bufp->fullBit(oldp+123,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire));
    bufp->fullCData(oldp+124,((0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),7);
    bufp->fullCData(oldp+125,((7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+126,((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+127,((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+128,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+129,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+130,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+131,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+132,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+133,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+134,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+135,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+136,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+137,((0U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+138,((1U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+139,((2U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+140,((3U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+141,((4U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+142,((5U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+143,((6U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+144,((7U == (7U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+145,((0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                    >> 0x19U))));
    bufp->fullBit(oldp+146,((0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U))));
    bufp->fullBit(oldp+147,((IData)((0x63U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+148,((IData)((0x1063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+149,((IData)((0x4063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+150,((IData)((0x5063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+151,((IData)((0x6063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+152,((IData)((0x7063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+153,((IData)((3U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+154,((IData)((0x1003U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+155,((IData)((0x2003U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+156,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
    bufp->fullBit(oldp+157,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
    bufp->fullBit(oldp+158,((IData)((0x23U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+159,((IData)((0x1023U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+160,((IData)((0x2023U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+161,((IData)((0x13U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+162,((IData)((0x2013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+163,((IData)((0x3013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+164,((IData)((0x4013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+165,((IData)((0x6013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+166,((IData)((0x7013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+167,((IData)((0x1013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+168,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                             & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+169,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
    bufp->fullBit(oldp+170,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                             & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+171,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
    bufp->fullBit(oldp+172,((IData)((0x1033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+173,((IData)((0x2033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+174,((IData)((0x3033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+175,((IData)((0x4033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+176,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
    bufp->fullBit(oldp+177,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                             & (0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+178,((IData)((0x6033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+179,((IData)((0x7033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+180,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
    bufp->fullBit(oldp+181,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
    bufp->fullBit(oldp+182,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
    bufp->fullBit(oldp+183,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
    bufp->fullBit(oldp+184,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
    bufp->fullBit(oldp+185,((0x30200073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    bufp->fullBit(oldp+186,((0x73U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    bufp->fullBit(oldp+187,((0x100073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    bufp->fullBit(oldp+188,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                             | ((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | (0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))));
    bufp->fullBit(oldp+189,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                             | (0x37U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullIData(oldp+190,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                ? (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x14U))
                                : (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                >> 0x14U)))),32);
    bufp->fullIData(oldp+191,((((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+192,((((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+193,((0xfffff000U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),32);
    bufp->fullIData(oldp+194,((((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                              | (0x800U 
                                                 & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U))))),32);
    bufp->fullBit(oldp+195,(((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)) 
                             & (IData)(vlSelfRef.ysyx_25050136__DOT__inst_arready_i))));
    bufp->fullBit(oldp+196,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire));
    bufp->fullCData(oldp+197,(((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                               << 1U)),2);
    bufp->fullCData(oldp+198,(((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                               << 1U)),2);
    bufp->fullCData(oldp+199,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                               << 1U)),2);
    bufp->fullCData(oldp+200,(vlSelfRef.ysyx_25050136__DOT__s_arvalid_i),2);
    bufp->fullCData(oldp+201,((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                                << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))),2);
    bufp->fullBit(oldp+202,((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))));
    bufp->fullIData(oldp+203,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
    bufp->fullBit(oldp+204,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r));
    bufp->fullBit(oldp+205,(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o));
    bufp->fullBit(oldp+206,(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o));
    bufp->fullBit(oldp+207,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r));
    bufp->fullBit(oldp+208,((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read))));
    bufp->fullBit(oldp+209,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r));
    bufp->fullBit(oldp+210,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                     & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                        << 1U))) & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullCData(oldp+211,(0U),4);
    bufp->fullCData(oldp+212,(0U),8);
    bufp->fullCData(oldp+213,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                ? ((5U >= (7U & ((IData)(3U) 
                                                 * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))
                                    ? (7U & (0x10U 
                                             >> (7U 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))
                                    : 0U) : 0U)),3);
    bufp->fullCData(oldp+214,(0U),2);
    bufp->fullBit(oldp+215,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                     & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                        << 1U))) & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullBit(oldp+216,((1U & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   & (((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                       << 1U) >> (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))));
    bufp->fullBit(oldp+217,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                             & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullBit(oldp+218,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                             & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullBit(oldp+219,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r));
    bufp->fullBit(oldp+220,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read));
    bufp->fullBit(oldp+221,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                             & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullIData(oldp+222,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r),32);
    bufp->fullBit(oldp+223,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
                             & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count) 
                                == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r)))));
    bufp->fullCData(oldp+224,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r),4);
    bufp->fullBit(oldp+225,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                    & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                       << 1U)))));
    bufp->fullCData(oldp+226,(0U),4);
    bufp->fullCData(oldp+227,(0U),8);
    bufp->fullCData(oldp+228,(((5U >= (7U & ((IData)(3U) 
                                             * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))
                                ? (7U & (0x10U >> (7U 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))
                                : 0U)),3);
    bufp->fullCData(oldp+229,(0U),2);
    bufp->fullBit(oldp+230,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                    & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                       << 1U)))));
    bufp->fullBit(oldp+231,((1U & (((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                    << 1U) >> (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))));
    bufp->fullBit(oldp+232,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready));
    bufp->fullBit(oldp+233,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid));
    bufp->fullBit(oldp+234,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready));
    bufp->fullCData(oldp+235,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master),2);
    bufp->fullBit(oldp+236,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id));
    bufp->fullCData(oldp+237,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand),2);
    bufp->fullBit(oldp+238,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id));
    bufp->fullCData(oldp+239,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver),2);
    bufp->fullCData(oldp+240,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id),2);
    bufp->fullCData(oldp+241,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__request),2);
    bufp->fullQData(oldp+242,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+244,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r),32);
    bufp->fullIData(oldp+245,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align),32);
    bufp->fullCData(oldp+246,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r),8);
    bufp->fullCData(oldp+247,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r),3);
    bufp->fullCData(oldp+248,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r),2);
    bufp->fullCData(oldp+249,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count),8);
    bufp->fullBit(oldp+250,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r) 
                             & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
                             & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
    bufp->fullIData(oldp+252,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o),32);
    bufp->fullBit(oldp+253,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
    bufp->fullIData(oldp+254,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
    bufp->fullIData(oldp+255,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
    bufp->fullIData(oldp+256,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
    bufp->fullIData(oldp+257,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
    bufp->fullBit(oldp+258,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r));
    bufp->fullCData(oldp+259,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read),2);
    bufp->fullBit(oldp+260,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en));
    bufp->fullBit(oldp+261,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en));
    bufp->fullCData(oldp+262,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write),2);
    bufp->fullIData(oldp+263,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r),32);
    bufp->fullCData(oldp+264,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read),2);
    bufp->fullIData(oldp+265,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
    bufp->fullIData(oldp+266,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
    bufp->fullIData(oldp+267,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
    bufp->fullIData(oldp+268,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
    bufp->fullIData(oldp+269,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
    bufp->fullIData(oldp+271,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
    bufp->fullIData(oldp+272,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
    bufp->fullIData(oldp+273,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
    bufp->fullIData(oldp+274,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
    bufp->fullIData(oldp+275,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
    bufp->fullIData(oldp+276,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
    bufp->fullIData(oldp+277,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
    bufp->fullIData(oldp+278,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
    bufp->fullIData(oldp+279,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
    bufp->fullIData(oldp+280,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
    bufp->fullIData(oldp+281,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
    bufp->fullIData(oldp+282,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
    bufp->fullIData(oldp+283,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
    bufp->fullIData(oldp+284,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
    bufp->fullIData(oldp+285,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
    bufp->fullIData(oldp+286,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
    bufp->fullIData(oldp+287,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
    bufp->fullIData(oldp+288,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
    bufp->fullIData(oldp+289,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
    bufp->fullIData(oldp+290,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
    bufp->fullIData(oldp+291,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
    bufp->fullIData(oldp+292,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
    bufp->fullIData(oldp+293,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
    bufp->fullIData(oldp+294,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
    bufp->fullIData(oldp+296,(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    bufp->fullBit(oldp+297,(vlSelfRef.clock));
    bufp->fullBit(oldp+298,(vlSelfRef.reset));
    bufp->fullBit(oldp+299,(vlSelfRef.io_interrupt));
    bufp->fullBit(oldp+300,(vlSelfRef.io_master_awready));
    bufp->fullBit(oldp+301,(vlSelfRef.io_master_awvalid));
    bufp->fullIData(oldp+302,(vlSelfRef.io_master_awaddr),32);
    bufp->fullCData(oldp+303,(vlSelfRef.io_master_awid),4);
    bufp->fullCData(oldp+304,(vlSelfRef.io_master_awlen),8);
    bufp->fullCData(oldp+305,(vlSelfRef.io_master_awsize),3);
    bufp->fullCData(oldp+306,(vlSelfRef.io_master_awburst),2);
    bufp->fullBit(oldp+307,(vlSelfRef.io_master_wready));
    bufp->fullBit(oldp+308,(vlSelfRef.io_master_wvalid));
    bufp->fullIData(oldp+309,(vlSelfRef.io_master_wdata),32);
    bufp->fullCData(oldp+310,(vlSelfRef.io_master_wstrb),4);
    bufp->fullBit(oldp+311,(vlSelfRef.io_master_wlast));
    bufp->fullBit(oldp+312,(vlSelfRef.io_master_bready));
    bufp->fullBit(oldp+313,(vlSelfRef.io_master_bvalid));
    bufp->fullCData(oldp+314,(vlSelfRef.io_master_bresp),2);
    bufp->fullCData(oldp+315,(vlSelfRef.io_master_bid),4);
    bufp->fullBit(oldp+316,(vlSelfRef.io_master_arready));
    bufp->fullBit(oldp+317,(vlSelfRef.io_master_arvalid));
    bufp->fullIData(oldp+318,(vlSelfRef.io_master_araddr),32);
    bufp->fullCData(oldp+319,(vlSelfRef.io_master_arid),4);
    bufp->fullCData(oldp+320,(vlSelfRef.io_master_arlen),8);
    bufp->fullCData(oldp+321,(vlSelfRef.io_master_arsize),3);
    bufp->fullCData(oldp+322,(vlSelfRef.io_master_arburst),2);
    bufp->fullBit(oldp+323,(vlSelfRef.io_master_rready));
    bufp->fullBit(oldp+324,(vlSelfRef.io_master_rvalid));
    bufp->fullCData(oldp+325,(vlSelfRef.io_master_rresp),2);
    bufp->fullIData(oldp+326,(vlSelfRef.io_master_rdata),32);
    bufp->fullBit(oldp+327,(vlSelfRef.io_master_rlast));
    bufp->fullCData(oldp+328,(vlSelfRef.io_master_rid),4);
    bufp->fullBit(oldp+329,(vlSelfRef.io_slave_awready));
    bufp->fullBit(oldp+330,(vlSelfRef.io_slave_awvalid));
    bufp->fullIData(oldp+331,(vlSelfRef.io_slave_awaddr),32);
    bufp->fullCData(oldp+332,(vlSelfRef.io_slave_awid),4);
    bufp->fullCData(oldp+333,(vlSelfRef.io_slave_awlen),8);
    bufp->fullCData(oldp+334,(vlSelfRef.io_slave_awsize),3);
    bufp->fullCData(oldp+335,(vlSelfRef.io_slave_awburst),2);
    bufp->fullBit(oldp+336,(vlSelfRef.io_slave_wready));
    bufp->fullBit(oldp+337,(vlSelfRef.io_slave_wvalid));
    bufp->fullIData(oldp+338,(vlSelfRef.io_slave_wdata),32);
    bufp->fullCData(oldp+339,(vlSelfRef.io_slave_wstrb),4);
    bufp->fullBit(oldp+340,(vlSelfRef.io_slave_wlast));
    bufp->fullBit(oldp+341,(vlSelfRef.io_slave_bready));
    bufp->fullBit(oldp+342,(vlSelfRef.io_slave_bvalid));
    bufp->fullCData(oldp+343,(vlSelfRef.io_slave_bresp),2);
    bufp->fullCData(oldp+344,(vlSelfRef.io_slave_bid),4);
    bufp->fullBit(oldp+345,(vlSelfRef.io_slave_arready));
    bufp->fullBit(oldp+346,(vlSelfRef.io_slave_arvalid));
    bufp->fullIData(oldp+347,(vlSelfRef.io_slave_araddr),32);
    bufp->fullCData(oldp+348,(vlSelfRef.io_slave_arid),4);
    bufp->fullCData(oldp+349,(vlSelfRef.io_slave_arlen),8);
    bufp->fullCData(oldp+350,(vlSelfRef.io_slave_arsize),3);
    bufp->fullCData(oldp+351,(vlSelfRef.io_slave_arburst),2);
    bufp->fullBit(oldp+352,(vlSelfRef.io_slave_rready));
    bufp->fullBit(oldp+353,(vlSelfRef.io_slave_rvalid));
    bufp->fullCData(oldp+354,(vlSelfRef.io_slave_rresp),2);
    bufp->fullIData(oldp+355,(vlSelfRef.io_slave_rdata),32);
    bufp->fullBit(oldp+356,(vlSelfRef.io_slave_rlast));
    bufp->fullCData(oldp+357,(vlSelfRef.io_slave_rid),4);
    bufp->fullCData(oldp+358,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awready_i) 
                                << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                  & ((IData)(vlSelfRef.io_master_awready) 
                                                     << 1U))) 
                                          & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->fullCData(oldp+359,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wready_i) 
                                << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                  & ((IData)(vlSelfRef.io_master_wready) 
                                                     << 1U))) 
                                          & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->fullCData(oldp+360,((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i) 
                                << 2U) | ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                           ? (3U & 
                                              (((IData)(vlSelfRef.io_master_bresp) 
                                                << 2U) 
                                               >> (3U 
                                                   & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                           : 0U))),4);
    bufp->fullCData(oldp+361,(((((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                  ? (0xfU & (((IData)(vlSelfRef.io_master_bid) 
                                              << 4U) 
                                             >> (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                  : 0U) << 4U) | ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                                   ? 
                                                  (0xfU 
                                                   & (((IData)(vlSelfRef.io_master_bid) 
                                                       << 4U) 
                                                      >> 
                                                      (7U 
                                                       & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                                   : 0U))),8);
    bufp->fullCData(oldp+362,(((((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                  ? (0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r)) 
                                             >> (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                  : 0U) << 4U) | ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                                   ? 
                                                  (0xfU 
                                                   & ((((IData)(vlSelfRef.io_master_rid) 
                                                        << 4U) 
                                                       | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r)) 
                                                      >> 
                                                      (7U 
                                                       & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                                   : 0U))),8);
    bufp->fullCData(oldp+363,((((IData)(vlSelfRef.io_master_awvalid) 
                                << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                                     << 1U))) 
                                          & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->fullCData(oldp+364,(((IData)(vlSelfRef.io_master_awready) 
                               << 1U)),2);
    bufp->fullQData(oldp+365,((((QData)((IData)(vlSelfRef.io_master_awaddr)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                              ? (IData)(
                                                                        (((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                                                          << 0x20U) 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                                                              : 0U))))),64);
    bufp->fullCData(oldp+367,(((IData)(vlSelfRef.io_master_awid) 
                               << 4U)),8);
    bufp->fullSData(oldp+368,(((IData)(vlSelfRef.io_master_awlen) 
                               << 8U)),16);
    bufp->fullCData(oldp+369,((((IData)(vlSelfRef.io_master_awsize) 
                                << 3U) | ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                           ? ((5U >= 
                                               (7U 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))
                                               ? (7U 
                                                  & (0x10U 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(3U) 
                                                         * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))
                                               : 0U)
                                           : 0U))),6);
    bufp->fullCData(oldp+370,(((IData)(vlSelfRef.io_master_awburst) 
                               << 2U)),4);
    bufp->fullCData(oldp+371,((((IData)(vlSelfRef.io_master_wvalid) 
                                << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                                     << 1U))) 
                                          & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->fullCData(oldp+372,(((IData)(vlSelfRef.io_master_wready) 
                               << 1U)),2);
    bufp->fullQData(oldp+373,((((QData)((IData)(vlSelfRef.io_master_wdata)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                              ? (IData)(
                                                                        (((QData)((IData)(
                                                                                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                                                >> 0x14U))])) 
                                                                          << 0x20U) 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))))
                                                              : 0U))))),64);
    bufp->fullCData(oldp+375,((((IData)(vlSelfRef.io_master_wstrb) 
                                << 4U) | ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                           ? (0xfU 
                                              & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                                  << 4U) 
                                                 >> 
                                                 (7U 
                                                  & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))))
                                           : 0U))),8);
    bufp->fullCData(oldp+376,((((IData)(vlSelfRef.io_master_wlast) 
                                << 1U) | (1U & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                & (((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                                    << 1U) 
                                                   >> (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))),2);
    bufp->fullCData(oldp+377,(((IData)(vlSelfRef.io_master_bvalid) 
                               << 1U)),2);
    bufp->fullCData(oldp+378,((((IData)(vlSelfRef.io_master_bready) 
                                << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                          & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->fullCData(oldp+379,(((IData)(vlSelfRef.io_master_bresp) 
                               << 2U)),4);
    bufp->fullCData(oldp+380,(((IData)(vlSelfRef.io_master_bid) 
                               << 4U)),8);
    bufp->fullCData(oldp+381,((((IData)(vlSelfRef.io_master_arvalid) 
                                << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                          & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->fullCData(oldp+382,((((IData)(vlSelfRef.io_master_arready) 
                                << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r))),2);
    bufp->fullQData(oldp+383,((((QData)((IData)(vlSelfRef.io_master_araddr)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__clint_araddr_i)))),64);
    bufp->fullCData(oldp+385,(((IData)(vlSelfRef.io_master_arid) 
                               << 4U)),8);
    bufp->fullSData(oldp+386,(((IData)(vlSelfRef.io_master_arlen) 
                               << 8U)),16);
    bufp->fullCData(oldp+387,((((IData)(vlSelfRef.io_master_arsize) 
                                << 3U) | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_arsize_i))),6);
    bufp->fullCData(oldp+388,(((IData)(vlSelfRef.io_master_arburst) 
                               << 2U)),4);
    bufp->fullCData(oldp+389,((((IData)(vlSelfRef.io_master_rvalid) 
                                << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read))),2);
    bufp->fullCData(oldp+390,((((IData)(vlSelfRef.io_master_rready) 
                                << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                          & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))),2);
    bufp->fullQData(oldp+391,((((QData)((IData)(vlSelfRef.io_master_rdata)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r)))),64);
    bufp->fullCData(oldp+393,(((IData)(vlSelfRef.io_master_rresp) 
                               << 2U)),4);
    bufp->fullCData(oldp+394,((((IData)(vlSelfRef.io_master_rlast) 
                                << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
                                          & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count) 
                                             == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r))))),2);
    bufp->fullCData(oldp+395,((((IData)(vlSelfRef.io_master_rid) 
                                << 4U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r))),8);
    bufp->fullCData(oldp+396,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                ? (0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r)) 
                                           >> (7U & 
                                               VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                : 0U)),4);
    bufp->fullBit(oldp+397,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     & ((IData)(vlSelfRef.io_master_awready) 
                                        << 1U))) & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->fullBit(oldp+398,(((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     & ((IData)(vlSelfRef.io_master_wready) 
                                        << 1U))) & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->fullCData(oldp+399,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                ? (3U & (((IData)(vlSelfRef.io_master_bresp) 
                                          << 2U) >> 
                                         (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                : 0U)),2);
    bufp->fullCData(oldp+400,(((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                ? (0xfU & (((IData)(vlSelfRef.io_master_bid) 
                                            << 4U) 
                                           >> (7U & 
                                               VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                : 0U)),4);
    bufp->fullCData(oldp+401,(((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                ? (0xfU & (((IData)(vlSelfRef.io_master_bid) 
                                            << 4U) 
                                           >> (7U & 
                                               VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                : 0U)),4);
    bufp->fullCData(oldp+402,(((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                ? (0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r)) 
                                           >> (7U & 
                                               VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))
                                : 0U)),4);
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->fullBit(oldp+404,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & ((IData)(vlSelfRef.io_master_awready) 
                                       << 1U)))));
    bufp->fullBit(oldp+405,((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & ((IData)(vlSelfRef.io_master_wready) 
                                       << 1U)))));
    bufp->fullCData(oldp+406,((3U & (((IData)(vlSelfRef.io_master_bresp) 
                                      << 2U) >> (3U 
                                                 & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))),2);
    bufp->fullCData(oldp+407,((0xfU & (((IData)(vlSelfRef.io_master_bid) 
                                        << 4U) >> (7U 
                                                   & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))),4);
    bufp->fullCData(oldp+408,((0xfU & ((((IData)(vlSelfRef.io_master_rid) 
                                         << 4U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r)) 
                                       >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 2U))))),4);
}
