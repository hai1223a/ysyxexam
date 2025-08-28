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
    0xa00012b7, // auipc t0,0
    0x11428293, // addi t0,t0,36     // t0 = 指令区首地址+36
    0x12345337, // li a0,1            // a0 = 1
    0x67830313, // sw  a0,0(t0)       // [t0+0] = a0 (把1写到数据区)
    0x0062a023, // lw  a0,0(t0)       // a0 = [t0+0] (从数据区读回a0)
    0x00629023, // jal zero, +4       // 跳转到下一条（演示jal）
    0x00628023, // addi t0,t0,1       // t0 = t0 + 1
    0x0002a383, // bne a0,a1,-4       // 如果a0!=a1, 跳回前面
    0x00029383, // ebreak             // 终止
    0x00028383, // 数据区内容
    0x00100073, // 数据区内容
  };
      // *imem_w++ = 0xa00012b7; // lui	t0,0xa0001
      // *imem_w++ = 0x11428293; // addi	t0,t0,276 
      // *imem_w++ = 0x12345337; // lui	t1,0x12345
      // *imem_w++ = 0x67830313; // addi	t1,t1,1656
      // *imem_w++ = 0x0062a023; // sw	t1,0(t0)
      // *imem_w++ = 0x00629023; // sh	t1,0(t0)
      // *imem_w++ = 0x00628023; // sb	t1,0(t0)
      // *imem_w++ = 0x0002a383; // lw	t2,0(t0)
      // *imem_w++ = 0x00029383; // lh	t2,0(t0)
      // *imem_w++ = 0x00028383; // lb	t2,0(t0)
      // *imem_w++ = 0x00100073; // ebreak 
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
