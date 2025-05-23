#include "../include/common.h"
//=====================================================
// 用于解析命令行参数
//=====================================================
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"elf"      , required_argument, NULL, 'e'},
    {"elf-log"  , required_argument, NULL, 'g'},
    {"image"    , required_argument, NULL, 'i'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:g:i:", table, NULL)) != -1) {
    switch (o) {
      case 'b': batch_mode = true; break;
      case 'p': break;
      case 'l': break;
      case 'd': break;
      case 'e': break;
      case 'g': break;
      case 'i': img_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch                run with batch mode\n");
        printf("\t-l,--log=FILE             output log to FILE\n");
        printf("\t-d,--diff=REF_SO          run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT            run DiffTest with port PORT\n");
        printf("\t-e,--elf=ELF_FILE         load elf file for ftrace\n");
        printf("\t-g,--elf-log=FTRACER_FILE ftracer output log to FTRACER_FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
//=====================================================
// 存储器相关函数
//=====================================================
uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }

void pmem_init()
{
  if (!img_file){
    uint32_t *pmem_w = (uint32_t *)pmem;
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x00100073; //ebreak
    return;
  }
  FILE *fp = fopen(img_file, "rb");
  assert(fp);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf("程序源文件是%s, 文件大小是%ld byte.\n", img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  assert(ret == 1);
  fclose(fp);
}

void inst_read(Vysyx_25050136_NPC *ysyx_25050136_NPC) 
{
  if(!ysyx_25050136_NPC->reset)
    ysyx_25050136_NPC->inst_i = *(uint32_t *)(pmem + ysyx_25050136_NPC->pc_o - CONFIG_MBASE);
}

void pmem_read_write(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
  uint8_t *addr = pmem + ysyx_25050136_NPC->mem_addr_o - CONFIG_MBASE;
  if(!ysyx_25050136_NPC->reset) {
    if(ysyx_25050136_NPC->mem_ren_o) {
      switch (ysyx_25050136_NPC->mem_len_o)
      {
        case 1:
          ysyx_25050136_NPC->mem_rdata_i = *addr;
          break;
        case 2:
          ysyx_25050136_NPC->mem_rdata_i = *(uint16_t *)addr;
          break;
        case 4:
          ysyx_25050136_NPC->mem_rdata_i = *(uint32_t *)addr;
          break;
        default:
          break;
      }
    }
    if(ysyx_25050136_NPC->mem_wen_o) {
      switch (ysyx_25050136_NPC->mem_len_o)
      {
        case 1:
          *addr = (uint8_t)(ysyx_25050136_NPC->mem_wdata_o);
          break;
        case 2:
          *(uint16_t *)addr = (uint16_t)(ysyx_25050136_NPC->mem_wdata_o);
          break;
        case 4:
          *(uint32_t *)addr = ysyx_25050136_NPC->mem_wdata_o;
          break;
        default:
          break;
      }
    }
  }
}
//=====================================================
// 调试相关函数
//=====================================================

void printf_statu(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
  uint32_t gpr_a0 =  ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10];
  printf("NPC 的结束状态是%s, PC = 0x%x\n", (gpr_a0 == 0) ? 
          ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED),
          ysyx_25050136_NPC->pc_o);
}

//=====================================================
// cpu相关函数
//=====================================================
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

void cpu_exec(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp, uint32_t inst_num)
{
  while (cpu_run && inst_num)
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
      inst_num--;
      pc_pre = ysyx_25050136_NPC->pc_o;
    }
  }
}

int batch_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp)
{
  cpu_init(ysyx_25050136_NPC, tfp);
  cpu_exec(ysyx_25050136_NPC, tfp, -1);
  return 0;
}

//=====================================================
// sdb相关函数
//=====================================================
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(NPC) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  cpu_exec(ysyx_25050136_NPC,tfp,-1);
  return 0;
}


static int cmd_q(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  return -1;
}

static int cmd_help(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp);

static int cmd_si(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  return 0;
}

static int cmd_info(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  return 0;
}

static int cmd_x(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp){
  return 0;
}

static int cmd_p(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp){
  return 0;
}

static int cmd_w(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  return 0;
}

static int cmd_d(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  return 0;
}

static int cmd_r(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  printf("CPU在 sim_time = %ld 时停止了一次\n", stop_time);
  cpu_init(ysyx_25050136_NPC, tfp);
  cpu_exec(ysyx_25050136_NPC, tfp, -1);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *, Vysyx_25050136_NPC *, VerilatedFstC *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "格式为si [N],让程序单步执行N条指令后暂停执行,当N没有给出时,缺省为1", cmd_si},
  { "info", "格式为info SUBCMD, info r表示打印寄存器状态, info w表示打印监视点信息", cmd_info},
  { "x", "格式为x N EXPR, 表示以表达式EXPR为基地址, 以16进制的格式打印连续的N个4字节数据", cmd_x},
  { "p", "查看表达式的值, 格式为p EXPR, 将会打印表达式EXPR的十进制和十六进制表达", cmd_p},
  { "w", "设置监视点, 格式为w EXPR, 当EXPR的值发生改变时将会中断程序", cmd_w},
  { "d", "删除监视点, 格式为d N, 表示删除序号为N的监视点", cmd_d},
  { "r", "重新开始程序,还没实现", cmd_r},
  /* TODO: Add more commands */
};

#define NR_CMD (int)(sizeof(cmd_table) / sizeof(cmd_table[0]))

static int cmd_help(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp) {
  cpu_init(ysyx_25050136_NPC, tfp);
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args, ysyx_25050136_NPC, tfp) < 0) return; 
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

//=====================================================
// 主函数
//=====================================================
int main(int argc, char **argv)
{
  // 解析命令行参数
  parse_args(argc, argv);
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
  if(batch_mode)
    batch_mainloop(ysyx_25050136_NPC,tfp);
  else  
    sdb_mainloop(ysyx_25050136_NPC,tfp);
  printf_statu(ysyx_25050136_NPC);
  // 关闭波形文件
  tfp->close();
  // 删除指针
  delete ysyx_25050136_NPC;
  // 结束
  return 0;
}