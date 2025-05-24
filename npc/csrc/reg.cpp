#include "../include/common.h"

void printf_regs(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
  for (size_t i = 0; i < 16; i++)
  {
    printf("%s : 0x%8x\n", regs[i], ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[i]);
  }
  printf("pc = 0x%8x\n", ysyx_25050136_NPC->pc_o); 
}