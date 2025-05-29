#include "../include/common.h"

void printf_regs()
{
  printf(ANSI_FMT("npc的寄存器状态如下:\n", ANSI_FG_MAGENTA));
  for (size_t i = 0; i < REG_NUM; i++)
  {
    printf("%s : 0x%8x\n", regs[i], ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[i]);
  }
  printf("pc : 0x%8x\n", ysyx_25050136_NPC->pc_o);
}

uint32_t reg_str2val(const char *s, bool *success)
{
  *success = true;
  for (int i = 0; i < REG_NUM; i++)
  {
    char reg[5] = "$";
    strcat(reg, regs[i]);
    if (!strcmp(reg, s))
    {
      return ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[i];
    }
  }
  const char *reg = "$pc";
  if (!strcmp(s, reg))
    return ysyx_25050136_NPC->pc_o;
  *success = false;
  return 0;
}

bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc)
{
  for (size_t i = 0; i < REG_NUM; i++)
  {
    if (ref->gpr[i] != ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[i])
      return false;
  }
  if (pc != ysyx_25050136_NPC->pc_o)
    return false;
  return true;
}