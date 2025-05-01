#ifndef __MEMORY_H__
#define __MEMORY_H__

#define MEMORY_SIZE (128 * 1024 * 1024)    // 128KB
extern unsigned char physical_memory[MEMORY_SIZE];

void write_file();
void load_memory_from_file();
#endif
