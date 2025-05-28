#ifndef __MEMORY_H__
#define __MEMORY_H__

uint8_t* guest_to_host(uint32_t paddr);
long pmem_init();
void inst_read(Vysyx_25050136_NPC *ysyx_25050136_NPC);
void pmem_read_write(Vysyx_25050136_NPC *ysyx_25050136_NPC);
uint32_t vaddr_read(uint32_t paddr, int len);


#endif