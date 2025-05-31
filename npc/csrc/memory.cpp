#include "../include/common.h"

uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {}; // 内存变量
uint8_t *guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
bool in_pmem(uint32_t paddr) { return paddr - CONFIG_MBASE < CONFIG_MSIZE; }

long init_pmem(char *img_file)
{
  if (!img_file)
  {
    uint32_t *pmem_w = (uint32_t *)pmem;
    *pmem_w++ = 0x00000297; // auipc t0,0
    *pmem_w++ = 0x00028823; // sb  zero,16(t0)
    *pmem_w++ = 0x0102c503; // lbu a0,16(t0)
    *pmem_w++ = 0x00100073; // ebreak (used as nemu_trap)
    *pmem_w++ = 0xdeadbeef; // some data
    Log("没有给源文件, 程序使用了内置的代码.");
    return 20;
  }
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("源文件是 %s, 文件大小为 %ld byte.", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

void inst_read()
{
  if (!ysyx_25050136_NPC->reset)
    if (likely(in_pmem(ysyx_25050136_NPC->pc_o)))
      ysyx_25050136_NPC->inst_i = *(uint32_t *)(pmem + ysyx_25050136_NPC->pc_o - CONFIG_MBASE);
    else
      Assert(0, "你取指令的pc值不合法,pc = 0x%08x\n", ysyx_25050136_NPC->pc_o);
  // 找到ebreak
  if (is_ebreak(ysyx_25050136_NPC->inst_i))
  {
    set_nemu_state(NPC_END, ysyx_25050136_NPC->pc_o, get_reg(10));
  }
}

void pmem_read_write()
{
  if (!ysyx_25050136_NPC->reset && (ysyx_25050136_NPC->mem_ren_o || ysyx_25050136_NPC->mem_wen_o))
  {
    IFDEF(CONFIG_MTRACE, add_mtrace());
    if (likely(in_pmem(ysyx_25050136_NPC->mem_addr_o)))
    {
      uint8_t *addr = pmem + ysyx_25050136_NPC->mem_addr_o - CONFIG_MBASE;
      if (ysyx_25050136_NPC->mem_ren_o)
      {
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
      if (ysyx_25050136_NPC->mem_wen_o)
      {
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
    else
    {
      IFDEF(CONFIG_MTRACE, printf_mtrace());
      Assert(0, "你访存的地址值不合法,addr = 0x%08x\n", ysyx_25050136_NPC->mem_addr_o);
    }
  }
}

uint32_t vaddr_read(uint32_t paddr, int len)
{
  if (likely(in_pmem(paddr)))
  {
    uint8_t *addr = guest_to_host(paddr);
    switch (len)
    {
    case 1:
      return *(uint8_t *)addr;
    case 2:
      return *(uint16_t *)addr;
    case 4:
      return *(uint32_t *)addr;
    default:
      return 0;
    }
  }
  else
  {
    Assert(0, "你使用sdb查看的地址值不合法,addr = 0x%08x\n", paddr);
  }
}