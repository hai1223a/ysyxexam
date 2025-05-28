#include "../include/common.h"

bool cpu_run = true;                          // CPU仿真运行状态
vluint64_t sim_time = 0;                      // 记录仿真时间
vluint64_t reset_time = 10;                   // 复位时间
vluint64_t stop_time = 0;                     // 暂停时间点
uint32_t pc_pre = 0x80000000;                 // 用于单步执行程序
char *ref_so_file = NULL;                     // ref的动态库文件指针
char *img_file = NULL;                        // 程序源文件指针
bool batch_mode = false;                      // 默认sdb模式

uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};// 内存变量
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5"
  };