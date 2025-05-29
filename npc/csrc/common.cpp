#include "../include/common.h"

NPCState npcstate = {.state = NPC_RUNNING};
void set_nemu_state(int state, uint32_t pc, int halt_ret){
  npcstate.state = state;
  npcstate.halt_pc = pc;
  npcstate.halt_ret = halt_ret;
}


