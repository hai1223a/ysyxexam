#include "Vysyx_25050136_NPC.h"            // 包含Verilog工程的C++模型
#include <verilated.h>       // Verilator的库
#include "verilated_fst_c.h" // fst波形文件所需要的库

bool cpu_run = true;
vluint64_t sim_time = 0; // 记录当前仿真时间

static char *img_file = NULL;
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
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:g:", table, NULL)) != -1) {
    switch (o) {
      case 'b': break;
      case 'p': break;
      case 'l': break;
      case 'd': break;
      case 'e': break;
      case 'g': break;
      case 'i': img_file = optarg; return 0;
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

// 存储器
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }

void pmem_init()
{
  if(img_file == NULL){
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

  printf("The image is %s, size = %ld", img_file, size);

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

extern "C" void find_ebreak(bool find) {if(find) cpu_run = false;}

void reset(Vysyx_25050136_NPC *ysyx_25050136_NPC, vluint64_t &sim_time)
{
  ysyx_25050136_NPC->reset = 0;
  if (sim_time < 4)
  {
    ysyx_25050136_NPC->reset = 1;
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

  // 内存初始化
  pmem_init();
  while (cpu_run)
  {
    // 模拟时钟反转
    ysyx_25050136_NPC->clk ^= 1;
    // 计算电路状态
    ysyx_25050136_NPC->eval();
    // 复位
    reset(ysyx_25050136_NPC, sim_time);
    // 访存操作
    pmem_read_write(ysyx_25050136_NPC);
    // 取指操作
    inst_read(ysyx_25050136_NPC);
    ysyx_25050136_NPC->eval();
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