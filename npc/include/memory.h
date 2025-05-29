#ifndef __MEMORY_H__
#define __MEMORY_H__

#define CONFIG_MSIZE 0x8000000                // 内存大小
#define CONFIG_MBASE 0x80000000               // 内存基地址
#define RESET_VECTOR 0x80000000               // 程序复位地址

uint8_t* guest_to_host(uint32_t paddr);
long init_pmem(char *img_file);
void inst_read();
void pmem_read_write();
uint32_t vaddr_read(uint32_t paddr, int len);


#endif