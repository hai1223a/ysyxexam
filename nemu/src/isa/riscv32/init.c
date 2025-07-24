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

#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x00000297, // auipc t0,0
  0x00028513, // addi a0, t0, 0
  0x00100593, // li a1, 1      (addi a1, zero, 1)
  0x00b52023, // sw a1, 0(t0)  (访存：将a1写入t0指向的内存)
  0x00052283, // lw t0, 0(a0)  (访存：从a0指向的内存读到t0)
  0x0040006f, // jal zero, +4  (跳转到下一条，演示jal)
  0x00000013, // nop           (addi zero, zero, 0)
  0x00128293, // addi t0, t0, 1 (寄存器加法)
  0xfe529ee3, // bne a0, a1, -4 (分支跳转：如果a0!=a1则跳回前面)
  0x00100073, // ebreak        (用于trap/调试)
  };

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
