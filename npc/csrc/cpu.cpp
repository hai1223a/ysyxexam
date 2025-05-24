// #include "../include/common.h"

// void reset(Vysyx_25050136_NPC *ysyx_25050136_NPC, vluint64_t &sim_time)
// {
//   ysyx_25050136_NPC->reset = 0;
//   if (sim_time < (reset_time + stop_time))
//     ysyx_25050136_NPC->reset = 1;
// }

// void cpu_init(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
//     stop_time = sim_time;
//     pmem_init();
//     pc_pre = 0x80000000;
//     cpu_run = true;
//     ysyx_25050136_NPC->clk = 0;
//     ysyx_25050136_NPC->inst_i = 0;
//     ysyx_25050136_NPC->mem_rdata_i = 0;
// }

// void cpu_exec(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp, uint32_t inst_num)
// {
//   if (!cpu_run)
//   {
//     printf("你的程序已经运行结束了\n");
//   }
//   while (cpu_run && inst_num)
//   {
//     // 模拟时钟反转
//     ysyx_25050136_NPC->clk ^= 1;
//     // 计算电路状态
//     ysyx_25050136_NPC->eval();
//     // 复位
//     reset(ysyx_25050136_NPC, sim_time);
//     // 取指
//     inst_read(ysyx_25050136_NPC);
//     // 访存
//     pmem_read_write(ysyx_25050136_NPC);
//     // 计算电路状态
//     if(ysyx_25050136_NPC->inst_i == 0x00100073) cpu_run = false;
//     ysyx_25050136_NPC->eval();
//     // 记录波形数据
//     tfp->dump(sim_time);
//     // 推动仿真进行
//     sim_time++;
//     // 指令计算
//     if(sim_time >= (reset_time + stop_time) && ysyx_25050136_NPC->pc_o != pc_pre) {
//       inst_num--;
//       pc_pre = ysyx_25050136_NPC->pc_o;
//     }
//   }
// }

// int batch_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp)
// {
//   cpu_init(ysyx_25050136_NPC, tfp);
//   cpu_exec(ysyx_25050136_NPC, tfp, -1);
//   return 0;
// }