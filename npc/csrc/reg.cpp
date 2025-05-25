#include "../include/common.h"

void printf_regs(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
  for (size_t i = 0; i < 16; i++)
  {
    printf("%s : 0x%8x\n", regs[i], ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[i]);
  }
  printf("pc = 0x%8x\n", ysyx_25050136_NPC->pc_o); 
}

uint32_t reg_str2val(Vysyx_25050136_NPC *ysyx_25050136_NPC, const char *s, bool *success) {
  *success = true;
  for(int i = 0; i < 16; i++) {
    char reg[5] = "$";
    strcat(reg,regs[i]);
    if(!strcmp(reg, s)) {
      return ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[i];
    }
  }
  const char* reg = "$pc";
  if(!strcmp(s, reg)) return ysyx_25050136_NPC->pc_o;
  *success = false;
  return 0;
}