// 这个程序使用数组实现了一个环形缓冲区
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ring
{
    int *pHead;     // 头指针
    int *pTail;     // 尾指针 
    int *pRead;     // 读指针
    int *pWrite;    // 写指针
}r;

// 报错退出
void die(const char* message)
{
    printf("%s",message);
    exit(1);
}

// 释放内存
void close(r *pring)
{
    free(pring->pHead);
    free(pring);
}

// 初始化环形缓冲区
r *InitRingBuffer(int size)
{
    r *pring = malloc(sizeof(r));
    if(pring == NULL) die("Memory error!\n");
    pring->pHead = malloc(size * sizeof(int));
    if(pring->pHead == NULL) die("Memory error!\n");
    memset(pring->pHead, 0, size * sizeof(int));
    pring->pRead = pring->pHead;
    pring->pWrite = pring->pHead;
    pring->pTail = pring->pHead + size - 1;
    return pring;
}

// 向缓冲区写数据
void WriteRingBuffer(r *pring, int len, int *data)
{
    for(int i = 0; i < len; i++)
    {
        *(pring->pWrite) = data[i];
        if(pring->pWrite == pring->pTail)
            pring->pWrite = pring->pHead;
        else
            pring->pWrite = pring->pWrite + 1;
    }
}

// 从缓冲区读数据
void ReadRingBuffer(r *pring, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d\n",*(pring->pRead));
        if(pring->pRead == pring->pTail)
            pring->pRead = pring->pHead;
        else
            pring->pRead = pring->pRead + 1;
    }
}

int main(int argc, char *argv[])
{
    r *pring = InitRingBuffer(10);
    int data[12];
    for(int i = 0; i < 12; i++)
    {
        data[i] = i;
    }
    WriteRingBuffer(pring, 12, data);
    ReadRingBuffer(pring, 12);
    printf("pHead = %p, pRead = %p, pWrite = %p, pTail = %p", pring->pHead, pring->pRead, pring->pWrite, pring->pTail);
    close(pring);
    return 0;
}