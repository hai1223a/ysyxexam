#include "../include/common.h"

void reset(Vysyx_25050136_NPC *ysyx_25050136_NPC, vluint64_t &sim_time)
{
  ysyx_25050136_NPC->reset = 0;
  if (sim_time < (reset_time + stop_time))
    ysyx_25050136_NPC->reset = 1;
}

void cpu_exec_once()
{
  while (npcstate.state == NPC_RUNNING)
  {
    // 模拟时钟反转
    ysyx_25050136_NPC->clk ^= 1;
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 复位
    reset(ysyx_25050136_NPC, sim_time);
    // 取指
    inst_read(ysyx_25050136_NPC);
    // 访存
    pmem_read_write(ysyx_25050136_NPC);
    // 找到ebreak
    if (ysyx_25050136_NPC->inst_i == 0x00100073)
    {
      set_nemu_state(NPC_END, ysyx_25050136_NPC->pc_o, ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]);
    }
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 记录波形数据
    tfp->dump(sim_time);
    // 推动仿真进行
    sim_time++;
    // 指令计算
    if (sim_time >= (reset_time + stop_time) && ysyx_25050136_NPC->pc_o != pc_pre)
    {
      pc__ = pc_pre;
      inst__ = *(uint32_t *)(pmem + pc__ - CONFIG_MBASE);
      pc_pre = ysyx_25050136_NPC->pc_o;
      break;
    }
  }
}

void cpu_exec(uint32_t inst_num)
{
  for (uint32_t i = 0; i < inst_num; i++)
  {
    if (npcstate.state == NPC_END || npcstate.state == NPC_STOP ||
        npcstate.state == NPC_ABORT)
    {
      break;
    }
    cpu_exec_once();
#ifdef CONFIG_ITRACE
    Itrace(inst__, pc__);
    // if(inst_num < PRINT_INST_NUM)
    printf("%s\n", itrace_buf);
#endif
#ifdef CONFIG_DIFFTEST
    difftest_step(pc_pre, ysyx_25050136_NPC);
#endif
    if (!batch_mode)
      scan_watchpoint();
  }
}

int batch_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp)
{
  cpu_exec(-1);
  return 0;
}