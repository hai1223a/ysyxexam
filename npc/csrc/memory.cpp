#include "../include/common.h"

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