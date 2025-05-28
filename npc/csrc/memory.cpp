#include "../include/common.h"

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
bool in_pmem(uint32_t paddr) { return paddr - CONFIG_MBASE < CONFIG_MSIZE;}

long pmem_init()
{
  if (!img_file){
    uint32_t *pmem_w = (uint32_t *)pmem;
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x10cb0b13; //addi	s6,s6,268
    *pmem_w++ = 0x00100073; //ebreak
    return 0;
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
  return size;
}

void inst_read(Vysyx_25050136_NPC *ysyx_25050136_NPC) 
{
  if(!ysyx_25050136_NPC->reset)
    if(likely(in_pmem(ysyx_25050136_NPC->pc_o)))
      ysyx_25050136_NPC->inst_i = *(uint32_t *)(pmem + ysyx_25050136_NPC->pc_o - CONFIG_MBASE);
    else
      Assert(0, "你取指令的pc值不合法,pc = 0x%08x\n", ysyx_25050136_NPC->pc_o);
}

void pmem_read_write(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
  if(!ysyx_25050136_NPC->reset && (ysyx_25050136_NPC->mem_ren_o || ysyx_25050136_NPC->mem_wen_o)) {
    printf("a\n");
    #ifdef CONFIG_MTRACE
    if(!ysyx_25050136_NPC->clk) {
      add_mtrace(ysyx_25050136_NPC);
    }
#endif
    if(likely(in_pmem(ysyx_25050136_NPC->mem_addr_o))) {
      uint8_t *addr = pmem + ysyx_25050136_NPC->mem_addr_o - CONFIG_MBASE;
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
    } else {
#ifdef CONFIG_MTRACE
      printf_mtrace();
#endif
      Assert(0, "你访存的地址值不合法,addr = 0x%08x\n", ysyx_25050136_NPC->mem_addr_o);
    }
  }
}

uint32_t vaddr_read(uint32_t paddr, int len)
{
  if(likely(in_pmem(paddr))) {
    uint8_t *addr = guest_to_host(paddr);
    switch (len) {
      case 1: return *(uint8_t  *)addr;
      case 2: return *(uint16_t *)addr;
      case 4: return *(uint32_t *)addr;
      default: return 0;
    }
  } else {
    Assert(0, "你使用sdb查看的地址值不合法,addr = 0x%08x\n", paddr);
  }

}