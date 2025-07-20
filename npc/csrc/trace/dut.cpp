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
#include "../../include/common.h"

enum
{
  DIFFTEST_TO_DUT,
  DIFFTEST_TO_REF
};

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint32_t NO) = NULL;

void init_difftest(char *ref_so_file, long img_size, int port)
{
  CPU_state cpu;
  for (size_t i = 0; i < REG_NUM; i++)
  {
    cpu.gpr[i] = get_reg(i);
  }
  cpu.pc = RESET_VECTOR;

  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint32_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("每一条指令的结果将与 %s 进行比较. "
      "这将帮助你调试, 但是运行会比较慢. "
      "你可以在common.h中去关闭这个功能. ", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void printf_ref_regs(CPU_state *ref)
{
  printf(ANSI_FMT("ref的寄存器状态如下:\n", ANSI_FG_MAGENTA));
  for (size_t i = 0; i < REG_NUM; i++)
  {
    printf("ref[%2lu] : 0x%8x\n", i, ref->gpr[i]);
  }
  printf("ref[16] : 0x%8x\n", ref->pc);
}

static void checkregs(CPU_state *ref)
{
  if (!isa_difftest_checkregs(ref))
  {
    printf_ref_regs(ref);
    printf_regs();
    Assert(0, "寄存器检查不通过\n");
  }
}

bool is_skip_ref = false;
uint8_t skip_insts_ref = 0;
void difftest_skip_ref(uint8_t num) {
  is_skip_ref = true;
  skip_insts_ref = num;
}

void difftest_step()
{
  CPU_state ref_r;
  if (skip_insts_ref == 0)
  {
    if(is_skip_ref) {
      for (size_t i = 0; i < REG_NUM; i++)
      {
        ref_r.gpr[i] = get_reg(i);
      }
      ref_r.pc = ysyx_25050136_NPC->pc_o;
      ref_difftest_regcpy(&ref_r, DIFFTEST_TO_REF);
      is_skip_ref = false;
      return;
    }
  }
  else
  {
    skip_insts_ref--;
  }
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  checkregs(&ref_r);
}