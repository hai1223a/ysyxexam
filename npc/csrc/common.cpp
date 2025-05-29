#include "../include/common.h"

NPCState npcstate = {.state = NPC_RUNNING};
void set_nemu_state(int state, uint32_t pc, int halt_ret){
  npcstate.state = state;
  npcstate.halt_pc = pc;
  npcstate.halt_ret = halt_ret;
}

uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};// 内存变量
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5"
  };