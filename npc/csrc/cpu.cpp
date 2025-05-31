#include "../include/common.h"

uint32_t pc__ = RESET_VECTOR; // 执行完指令后的PC值
uint32_t pc_pre = 0;          // 执行的指令的PC值
uint32_t inst_pre = 0;        // 执行的指令值
vluint64_t sim_time = 0;      // 记录仿真时间
vluint64_t reset_time = 9;   // 复位时间
vluint64_t stop_time = 0;     // 暂停时间点

void reset()
{
  ysyx_25050136_NPC->reset = 0;
  if (sim_time < (reset_time + stop_time))
    ysyx_25050136_NPC->reset = 1;
}

void cpu_exec_once()
{
  while (npcstate.state == NPC_RUNNING)
  {
    // 模拟上升沿
    ysyx_25050136_NPC->clk = 1;
    // 复位
    reset();
    // 取指
    inst_read();
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 访存
    pmem_read_write();
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 记录上升沿
    tfp->dump(sim_time);
    // 推动仿真进行
    sim_time++;
    // 模拟下降沿
    ysyx_25050136_NPC->clk = 0;
    // 复位
    reset();
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 记录下降沿
    tfp->dump(sim_time);
    // 推动仿真进行
    sim_time++;
    // 找到ebreak
    if (is_ebreak(ysyx_25050136_NPC->inst_i))
    {
      set_nemu_state(NPC_END, ysyx_25050136_NPC->pc_o, get_reg(10));
    }
    // 指令计算
    if (sim_time >= (reset_time + stop_time) && ysyx_25050136_NPC->pc_o != pc__)
    {
      pc_pre = pc__;
      inst_pre = *(uint32_t *)(pmem + pc_pre - CONFIG_MBASE);
      pc__ = ysyx_25050136_NPC->pc_o;
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
    IFDEF(CONFIG_ITRACE, Itrace_log(inst_pre, pc_pre, inst_num));
    IFDEF(CONFIG_FTRACE, ftracer_log(inst_pre, pc_pre));
    IFDEF(CONFIG_DIFFTEST, difftest_step());
    if (!batch_mode)  scan_watchpoint();
  }
}

int batch_mainloop()
{
  cpu_exec(-1);
  return 0;
}