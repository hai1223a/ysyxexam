#include "../include/common.h"

/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <dlfcn.h>
#include <capstone/capstone.h>

static size_t (*cs_disasm_dl)(csh handle, const uint8_t *code,
  size_t code_size, uint64_t address, size_t count, cs_insn **insn);
static void (*cs_free_dl)(cs_insn *insn, size_t count);

static csh handle;

void init_disasm() {
  void *dl_handle;
  dl_handle = dlopen("tools/capstone/repo/libcapstone.so.5", RTLD_LAZY);
  if (!dl_handle) {
    fprintf(stderr, "Failed to load Capstone library: %s\n", dlerror());
    exit(1);
  }

  cs_err (*cs_open_dl)(cs_arch arch, cs_mode mode, csh *handle) = NULL;
  cs_open_dl = (cs_err (*)(cs_arch, cs_mode, csh *))dlsym(dl_handle, "cs_open");
  if (!cs_open_dl) {
    fprintf(stderr, "Failed to load function cs_open: %s\n", dlerror());
    exit(1);
  }

  cs_disasm_dl = (size_t (*)(csh, const uint8_t *, size_t, uint64_t, size_t, cs_insn **))dlsym(dl_handle, "cs_disasm");
  if (!cs_disasm_dl) {
    fprintf(stderr, "Failed to load function cs_disasm: %s\n", dlerror());
    exit(1);
  }

  cs_free_dl = (void (*)(cs_insn *, size_t))dlsym(dl_handle, "cs_free");
  if (!cs_free_dl) {
    fprintf(stderr, "Failed to load function cs_free: %s\n", dlerror());
    exit(1);
  }

  cs_arch arch = CS_ARCH_RISCV;
  cs_mode mode = CS_MODE_RISCV32;
  int ret = cs_open_dl(arch, mode, &handle);
  if (ret != CS_ERR_OK) {
    fprintf(stderr, "Failed to initialize Capstone: %d\n", ret);
    exit(1);
  }
}

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
  if (!code || nbyte == 0) {
    fprintf(stderr, "Invalid code or size\n");
    return;
  }

  if (!cs_disasm_dl) {
    fprintf(stderr, "cs_disasm_dl is not initialized\n");
    exit(1);
  }

  if (!handle) {
    fprintf(stderr, "Capstone handle is not initialized\n");
    exit(1);
  }

  cs_insn *insn;
  size_t count = cs_disasm_dl(handle, code, nbyte, pc, 0, &insn);
  if (count == 0) {
    snprintf(str, size, "Failed to disassemble at 0x%lx", pc);
    return;
  }

  int ret = snprintf(str, size, "%s", insn[0].mnemonic);
  if (insn[0].op_str[0] != '\0') {
    snprintf(str + ret, size - ret, "\t%s", insn[0].op_str);
  }

  cs_free_dl(insn, count);
}
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
// 调试相关函数
//=====================================================

void printf_statu(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
  uint32_t gpr_a0 =  ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10];
  printf("NPC 的结束状态是%s, PC = 0x%x\n", (gpr_a0 == 0) ? 
          ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED),
          ysyx_25050136_NPC->pc_o);
}


void init_main(int argc, char **argv)
{
  // 解析命令行参数
  parse_args(argc, argv);
  // ITRACE
  // IFDEF(CONFIG_ITRACE, init_disasm());
  IFDEF(CONFIG_ITRACE, init_disasm());
    // 测试数据：RISC-V 指令
    uint8_t code[] = {0x13, 0x05, 0x00, 0x00}; // RISC-V 指令：addi a0, zero, 0
    uint64_t pc = 0x1000; // 指令的起始地址
    char disasm_str[128]; // 存储反汇编结果
  
    // 调用 disassemble 函数
    disassemble(disasm_str, sizeof(disasm_str), pc, code, sizeof(code));
  
    // 输出反汇编结果
    printf("PC: 0x%lx, Instruction: %s\n", pc, disasm_str);
}
//=====================================================
// 主函数
//=====================================================
int main(int argc, char **argv)
{
  // 初始化
  init_main(argc, argv);
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
  else{
    init_sdb();
    sdb_mainloop(ysyx_25050136_NPC,tfp);
  }  
  printf_statu(ysyx_25050136_NPC);
  // 关闭波形文件
  tfp->close();
  // 删除指针
  delete ysyx_25050136_NPC;
  // 结束
  return 0;
}
