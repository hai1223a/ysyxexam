#include "Vysyx_25050136_NPC.h"            // 包含Verilog工程的C++模型
#include <verilated.h>       // Verilator的库
#include "verilated_fst_c.h" // fst波形文件所需要的库

#define MAX_TIME 20000       // 最大仿真时间

vluint64_t sim_time = 0; // 记录当前仿真时间

// 存储器
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};

void pmem_init()
{
  uint32_t *pmem_w = (uint32_t *)pmem;
  *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
  *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
  *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
  *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268  
  *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
}

uint32_t inst_read(uint32_t pc) {return *((uint32_t *)pmem + CONFIG_MBASE - pc);}

void reset(Vysyx_25050136_NPC *ysyx_25050136_NPC, vluint64_t &sim_time)
{
  ysyx_25050136_NPC->reset = 1;
  if (sim_time < 10)
  {
    ysyx_25050136_NPC->reset = 0;
  }
}

int main(int argc, char **argv)
{
  // 传递参数给verilator,建议在创建任何模型之前使用
  Verilated::commandArgs(argc, argv);
  // 创建一个fst波形文件指针
  VerilatedFstC *tfp = new VerilatedFstC;
  // 构建一个名为ysyx_25050136_NPC的仿真模型
  Vysyx_25050136_NPC *ysyx_25050136_NPC = new Vysyx_25050136_NPC;

  // 启用跟踪
  Verilated::traceEverOn(true);
  // 采样深度为5
  ysyx_25050136_NPC->trace(tfp, 5);
  // 打开波形文件
  tfp->open("waveform.fst");

  while (sim_time < MAX_TIME)
  {
    // 复位
    reset(ysyx_25050136_NPC, sim_time);
    // 模拟时钟反转
    ysyx_25050136_NPC->clk ^= 1;
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 捕获时钟上升沿,其他输入信号可以在这时候改变
    if (ysyx_25050136_NPC->clk == 1)
    {
      ysyx_25050136_NPC->inst_i = inst_read(ysyx_25050136_NPC->pc_o);
    }
    // 记录波形数据
    tfp->dump(sim_time);
    // 推动仿真进行
    sim_time++;
  }
  // 关闭波形文件
  tfp->close();
  // 删除指针
  delete ysyx_25050136_NPC;
  // 结束
  return 0;
}