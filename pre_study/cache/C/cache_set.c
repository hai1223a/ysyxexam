#include "cache_set.h"
#include "memory.h"
#include <stdio.h>
#include <string.h>
CacheLine cache[BLOCK_NUM][WAY_SIEZ];

void cache_init()
{
    for (int j = 0; j < WAY_SIEZ; j++)
    {
        for (int i = 0; i < BLOCK_NUM; i++)
        {
            cache[i][j].Valid = false;
            cache[i][j].Dirty = false;
            cache[i][j].Age = false;
            cache[i][j].Tag = 0;
            memset(cache[i][j].data, 0, BLOCK_SIZE);
        }   
    }
}

// 与write_through 配合的读缓存
int cache_read_through(int addr, long *num_ask)
{
    uint32_t Index = (addr / BLOCK_SIZE) % BLOCK_NUM;
    uint32_t Tag = addr / CACHE_SIZE;
    uint32_t Block_offset = addr % BLOCK_SIZE;
    int hit = 0;
    for(int i = 0; i < WAY_SIEZ; i++)
    {
        if (cache[Index][i].Valid && (cache[Index][i].Tag == Tag))
        {
            hit = 1;
            cache[Index][i].Age = 1;
            cache[Index][WAY_SIEZ - i].Age = 0; // 这里只适用于两路组相连
            goto label;
        }
        
    }
    label:
    if (!hit)
    {
        for (int i = 0; i < WAY_SIEZ; i++)
        {
            if (!cache[Index][i].Age)
            {
                memcpy(cache[Index][i].data, &physical_memory[addr-Block_offset], BLOCK_SIZE);
                *num_ask += BLOCK_SIZE;
                cache[Index][i].Valid = true;
                cache[Index][i].Tag = Tag;
                goto end;
            }
            
        }
        
    }
    end:
    return hit;
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
    for (int i = 0; i < WAY_SIEZ; i++)
    {
        if(cache[Index][i].Tag == Tag){
            cache[Index][i].data[Block_offset] = data;
            hit = 1;
            goto end;
        }
    }
    end:
    physical_memory[addr] = data;
    num_ask ++;    /* code */
    return hit;
}

int cache_read_back(int addr, long *num_ask)
{
    uint32_t Index = (addr / BLOCK_SIZE) % BLOCK_NUM;
    uint32_t Tag = addr / CACHE_SIZE;
    uint32_t Block_offset = addr % BLOCK_SIZE;
    int hit = 0;
    for(int i = 0; i < WAY_SIEZ; i++)
    {
        if (cache[Index][i].Valid && (cache[Index][i].Tag == Tag))
        {
            hit = 1;
            cache[Index][i].Age = 1;
            cache[Index][WAY_SIEZ - i].Age = 0; // 这里只适用于两路组相连
            goto label;
        }
        
    }
    label:
    if (!hit)
    {
        for (int i = 0; i < WAY_SIEZ; i++)
        {
            if (!cache[Index][i].Age)
            {
                if(cache[Index][i].Dirty){
                    int addr_pre = cache[Index][i].Tag * CACHE_SIZE + Index * BLOCK_SIZE;
                    memcpy(&physical_memory[addr_pre], cache[Index][i].data, BLOCK_SIZE);
                    *num_ask += BLOCK_SIZE;
                }
                memcpy(cache[Index][i].data, &physical_memory[addr-Block_offset], BLOCK_SIZE);
                *num_ask += BLOCK_SIZE;
                cache[Index][i].Dirty = false;
                cache[Index][i].Valid = true;
                cache[Index][i].Tag = Tag;
                goto end;
            }
            
        }
        
    }
    end:
    return hit;
}

int cache_write_back(int addr, uint8_t data, long *num_ask)
{
    uint32_t Index = (addr / BLOCK_SIZE) % BLOCK_NUM;
    uint32_t Tag = addr / CACHE_SIZE;
    uint32_t Block_offset = addr % BLOCK_SIZE;
    int hit = 0;
    for(int i = 0; i < WAY_SIEZ; i++)
    {
        if (cache[Index][i].Valid && (cache[Index][i].Tag == Tag))
        {
            hit = 1;
            cache[Index][i].data[Block_offset] = data;
            cache[Index][i].Dirty = true;
            goto label;
        }
        
    }
    label:
    if (!hit)
    {
        for (int i = 0; i < WAY_SIEZ; i++)
        {
            if (!cache[Index][i].Age)
            {
                if(cache[Index][i].Dirty){
                    int addr_pre = cache[Index][i].Tag * CACHE_SIZE + Index * BLOCK_SIZE;
                    memcpy(&physical_memory[addr_pre], cache[Index][i].data, BLOCK_SIZE);
                    *num_ask += BLOCK_SIZE;
                }
                memcpy(cache[Index][i].data, &physical_memory[addr-Block_offset], BLOCK_SIZE);
                *num_ask += BLOCK_SIZE;
                cache[Index][i].data[Block_offset] = data;
                cache[Index][i].Dirty = true;
                cache[Index][i].Valid = true;
                cache[Index][i].Tag = Tag;
                goto end;
            }
            
        }
        
    }
    end:
    return hit;
}