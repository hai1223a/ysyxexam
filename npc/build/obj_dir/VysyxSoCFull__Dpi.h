// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2687:30
    extern void alu_get();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2686:30
    extern void branch_get();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2682:30
    extern void commit_get();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2695:30
    extern void dcache_get(int cache_type);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2696:30
    extern void dcache_misscycle(int cache_type);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2681:30
    extern void fetch_get();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2675:30
    extern void find_addr_0();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2678:30
    extern void find_diff_skip();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2676:30
    extern void find_ebreak();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2677:30
    extern void find_resp();
    // DPI import at ../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2692:30
    extern void icache_get(int cache_type);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2693:30
    extern void icache_miss(int cache_type);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2694:30
    extern void icache_misscycle(int cache_type);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2685:30
    extern void jump_get();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2683:30
    extern void load_get();
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:6722:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2689:30
    extern void predict_miss_count();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2690:30
    extern void predict_not_jump_count();
    // DPI import at ../ysyxSoC/perip/psram/psram.v:2:30
    extern void psram_read(int addr, int* data);
    // DPI import at ../ysyxSoC/perip/psram/psram.v:3:30
    extern void psram_write(int addr, int data, int len);
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2691:30
    extern void related_delay_get();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2684:30
    extern void store_get();
    // DPI import at /home/yunhai/ysyx-workbench/npc/build/ysyx_25050136.v:2688:30
    extern void system_get();

#ifdef __cplusplus
}
#endif

#endif  // guard
