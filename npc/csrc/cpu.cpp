#include "../include/common.h"

#define IRINGBUF_DEEPTH 10
struct
{
    uint8_t now_p;
    uint8_t p;
    char iringbuf[IRINGBUF_DEEPTH][128];
} IRINGBUF = {0};

char logbuf[128] = {0};

static void print_iringbuf()
{
    printf("iringbuf打印\n");
    printf("如果是发生了 HIT BAD TRAP 或者 ABORT, 则--->指向发生问题的指令\n");
    printf("如果是发生了 assert 0 报错的话, 则--->指向发生问题的指令的上一条指令\n");
    for (int i = 0; i < IRINGBUF_DEEPTH; i++)
    {
        if (i == IRINGBUF.now_p)
            printf("--->");
        else
            printf(">>>>");
        puts(IRINGBUF.iringbuf[i]);
    }
    printf("\n");
}

static void trace_and_difftest(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
#ifdef CONFIG_ITRACE
  uint32_t pc = ysyx_25050136_NPC->pc_o;
  uint32_t inst_i = ysyx_25050136_NPC->inst_i;
  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), "0x%08x:", pc);
  int ilen = 4;
  int i;
  uint8_t *inst = (uint8_t *)&inst_i;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  disassemble(p, logbuf + sizeof(logbuf) - p, pc, (uint8_t *)&inst_i, ilen);
  // 这里也是IRINGBUF部分的代码
  //===============================================
  IRINGBUF.now_p = IRINGBUF.p;
  strcpy(IRINGBUF.iringbuf[IRINGBUF.p], logbuf);
  if(IRINGBUF.p < IRINGBUF_DEEPTH - 1)
    IRINGBUF.p++;
  else
    IRINGBUF.p = 0;
  //===============================================
#endif
}

void reset(Vysyx_25050136_NPC *ysyx_25050136_NPC, vluint64_t &sim_time)
{
  ysyx_25050136_NPC->reset = 0;
  if (sim_time < (reset_time + stop_time))
    ysyx_25050136_NPC->reset = 1;
}

void cpu_init(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
    stop_time = sim_time;
    pmem_init();
    pc_pre = 0x80000000;
    cpu_run = true;
    ysyx_25050136_NPC->clk = 0;
    ysyx_25050136_NPC->inst_i = 0;
    ysyx_25050136_NPC->mem_rdata_i = 0;
}
void cpu_exec_once(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp)
{
  while (cpu_run)
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
    // 计算电路状态
    if(ysyx_25050136_NPC->inst_i == 0x00100073) cpu_run = false;
    ysyx_25050136_NPC->eval();
    // 记录波形数据
    tfp->dump(sim_time);
    // 推动仿真进行
    sim_time++;
    // 指令计算
    if(sim_time >= (reset_time + stop_time) && ysyx_25050136_NPC->pc_o != pc_pre) {
      pc_pre = ysyx_25050136_NPC->pc_o;
      break;
    }
  }
}
void cpu_exec(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp, uint32_t inst_num)
{
  for (uint32_t i = 0; i < inst_num; i++)
  {
    if (!cpu_run)
    {
      printf("你的程序已经运行结束了\n");
      break;
    }
    cpu_exec_once(ysyx_25050136_NPC, tfp);
    trace_and_difftest(ysyx_25050136_NPC);
    printf("%s\n", logbuf);
  }
}

int batch_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp)
{
  cpu_init(ysyx_25050136_NPC, tfp);
  cpu_exec(ysyx_25050136_NPC, tfp, -1);
  return 0;
}