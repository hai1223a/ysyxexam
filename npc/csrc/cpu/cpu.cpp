#include "../../include/common.h"

uint32_t pc__ = 0; // 执行完指令后的PC值
uint32_t pc_pre = 0;          // 执行的指令的PC值
uint32_t inst_pre = 0;        // 执行的指令值
vluint64_t inst_count = 0;    // 指令数量
vluint64_t sim_time = 0;      // 记录仿真时间
vluint64_t reset_time = 3;    // 复位时间
vluint64_t stop_time = 0;     // 暂停时间点
uint64_t g_timer = 0;         // unit: us
void reset()
{
  top->reset = 0;
  if (sim_time < (reset_time + stop_time))
    top->reset = 1;
}

void cpu_exec_once()
{
  while (npcstate.state == NPC_RUNNING)
  {
    top->clock ^= 1;
    // 复位
    reset();
    // 计算电路状态
    top->eval();
    // 记录
    IFDEF(CONFIG_FST, tfp->dump(sim_time));
    // 推动仿真进行
    sim_time++;
    // 指令计算
    if (SOC_PC != pc__ )
    {
      pc_pre = pc__;
      pc__ = SOC_PC;
      if((sim_time >= (reset_time + stop_time)) & pc__ != RESET_VECTOR) {
        inst_pre = *(uint32_t *)(pmem + pc_pre - CONFIG_MBASE);
        inst_count++;
        break;
      }
    }
  }
}

void cpu_exec(uint32_t inst_num)
{
  uint64_t timer_start = get_time();
  for (uint32_t i = 0; i < inst_num; i++)
  {
    if (npcstate.state == NPC_END || npcstate.state == NPC_STOP ||
        npcstate.state == NPC_ABORT)
    {
      break;
    }
    cpu_exec_once();
    if (npcstate.state == NPC_END || npcstate.state == NPC_STOP ||
        npcstate.state == NPC_ABORT)
    {
      break;
    }
    IFDEF(CONFIG_ITRACE, Itrace_log(inst_pre, pc_pre, inst_num));
    IFDEF(CONFIG_FTRACE, ftracer_log(inst_pre, pc_pre));
    IFDEF(CONFIG_DIFFTEST, difftest_step());
    IFDEF(CONFIG_WATCHPOINT, if(!batch_mode) scan_watchpoint());
  }
  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;
}

int batch_mainloop()
{
  cpu_exec(-1);
  return 0;
}