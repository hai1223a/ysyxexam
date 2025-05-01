
// #include "cache_direct.h"
#include "cache_set.h"

#include "memory.h"
#include <stdio.h>
#include <stdlib.h>

#define TEST_NUM 10000
#define LOCALITY_RANGE 64 // 局部性范围（以字节为单位）

int main()
{
    write_file();
    load_memory_from_file();
    int count_r = 0, count_w = 0;
    long num_ask = 0;
    // 初始基地址，确保不会超出 MEMORY_SIZE
    int base_addr = rand() % (MEMORY_SIZE - LOCALITY_RANGE);

    for (unsigned long i = 0; i < TEST_NUM; i++) {
        // 模拟局部性访问
        int addr = base_addr + (rand() % LOCALITY_RANGE); // 在局部性范围内随机访问
        if (addr >= MEMORY_SIZE) {
            addr = addr % MEMORY_SIZE; // 确保地址不超出 MEMORY_SIZE
        }

        count_r += read(addr, &num_ask);
        addr = base_addr + (rand() % LOCALITY_RANGE); // 在局部性范围内随机访问
        if (addr >= MEMORY_SIZE) {
            addr = addr % MEMORY_SIZE; // 确保地址不超出 MEMORY_SIZE
        }
        count_w += write(addr, rand() % 256, &num_ask);

        // 每隔一定次数，改变基地址，模拟程序切换到新的局部性区域
        if (i % (TEST_NUM / 10) == 0) {
            base_addr = rand() % (MEMORY_SIZE - LOCALITY_RANGE);
        }
    }
    printf("The num of ask memory is %ld bytes\n", num_ask);
    printf("Read hit rate is %f%%, Write hit rate is %f%%\n",
           (float)count_r * 100 / TEST_NUM, (float)count_w * 100 / TEST_NUM);

    return 0;
}