#include "cache_direct.h"
#include "memory.h"
#include <stdio.h>
#include <string.h>
CacheLine cache[BLOCK_NUM];

void cache_init()
{
    for (int i = 0; i < BLOCK_NUM; i++)
    {
        cache[i].Valid = false;
        cache[i].Dirty = false;
        cache[i].Tag = 0;
        memset(cache[i].data, 0, BLOCK_SIZE);
    }
}

// 与write_through 配合的读缓存
int cache_read_through(int addr, long *num_ask)
{
    uint32_t Index = (addr / BLOCK_SIZE) % BLOCK_NUM;
    uint32_t Tag = addr / CACHE_SIZE;
    uint32_t Block_offset = addr % BLOCK_SIZE;

    if(cache[Index].Valid && (cache[Index].Tag == Tag))
        return 1;
    else{
        memcpy(cache[Index].data, &physical_memory[addr-Block_offset], BLOCK_SIZE);
        *num_ask += BLOCK_SIZE;
        cache[Index].Valid = true;
        cache[Index].Tag = Tag;
        return 0;
    }
}

// write_through + Non-Write Allocate
// Non-Write Allocate: 当要写入的地址不在cache中时，直接将数据写入内存而不写入cache中
// write_through： 当写入的地址在cache中时，将数据写入cache中，同时将其写入内存中
int cache_write_through(int addr, uint8_t data, long *num_ask)
{
    uint32_t Index = (addr / BLOCK_SIZE) % BLOCK_NUM;
    uint32_t Tag = addr / CACHE_SIZE;
    uint32_t Block_offset = addr % BLOCK_SIZE;
    int hit = 0;
    if(cache[Index].Tag == Tag){
        cache[Index].data[Block_offset] = data;
        hit = 1;
    }
    physical_memory[addr] = data;
    num_ask ++;
    return hit;
}

int cache_read_back(int addr, long *num_ask)
{
    uint32_t Index = (addr / BLOCK_SIZE) % BLOCK_NUM;
    uint32_t Tag = addr / CACHE_SIZE;
    uint32_t Block_offset = addr % BLOCK_SIZE;

    int addr_pre = cache[Index].Tag * CACHE_SIZE + Index * BLOCK_SIZE;

    if(cache[Index].Valid && (cache[Index].Tag == Tag))
        return 1;
    else{
        if(cache[Index].Dirty){
            memcpy(&physical_memory[addr_pre], cache[Index].data, BLOCK_SIZE);
            *num_ask += BLOCK_SIZE;
        }
        memcpy(cache[Index].data, &physical_memory[addr-Block_offset], BLOCK_SIZE);
        *num_ask += BLOCK_SIZE;
        cache[Index].Dirty = false;
        cache[Index].Valid = true;
        cache[Index].Tag = Tag;
        return 0;
    }
}

int cache_write_back(int addr, uint8_t data, long *num_ask)
{
    uint32_t Index = (addr / BLOCK_SIZE) % BLOCK_NUM;
    uint32_t Tag = addr / CACHE_SIZE;
    uint32_t Block_offset = addr % BLOCK_SIZE;

    int addr_pre = cache[Index].Tag * CACHE_SIZE + Index * BLOCK_SIZE;

    int hit = 1;
    if(!(cache[Index].Tag == Tag))
    {
        hit = 0;
        if(cache[Index].Dirty){
            memcpy(&physical_memory[addr_pre], cache[Index].data, BLOCK_SIZE);
            *num_ask += BLOCK_SIZE;
        }
        memcpy(cache[Index].data, &physical_memory[addr-Block_offset], BLOCK_SIZE);        
        *num_ask += BLOCK_SIZE;
        cache[Index].Tag = Tag;
        cache[Index].Valid = true;
    }
    cache[Index].data[Block_offset] = data;
    cache[Index].Dirty = true;
    return hit;
}