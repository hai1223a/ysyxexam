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
    if(ysyx_25050136_NPC->inst_i == 0x00100073) npcstate.state = NPC_END;
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 记录波形数据
    tfp->dump(sim_time);
    // 推动仿真进行
    sim_time++;
    // 指令计算
    if(sim_time >= (reset_time + stop_time) && ysyx_25050136_NPC->pc_o != pc_pre) {
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
    if (npcstate.state == NPC_END)
    {
      printf("你的程序已经运行结束了\n");
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
    if(likely(!batch_mode)) {
      static uint32_t data_pre[NR_WP] = {0};
      static uint32_t data_new[NR_WP] = {0};
      int index[NR_WP] = {0};
      scan_watchpoint(ysyx_25050136_NPC, data_new, index);
      bool find = false;
      for (int i = 0; i < NR_WP; i++)
      {
        if(index[i])
        {
          if(data_new[i] != data_pre[i])
          {
            printf("监视点%d发生了变化\n", i);
            data_pre[i] = data_new[i];
            find = true;
          }
        }
      }
      if(unlikely(find))  break;
    }
  
  }
}

int batch_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp)
{
  cpu_exec(1);
  return 0;
}