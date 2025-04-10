// 这个程序演示了单向链表的基本操作
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int id;
    struct Node *next;
} L;

// 报错退出
void die(const char* message)
{
    printf("%s",message);
    exit(1);
}

// 释放所有链表节点
void close(L *header)
{
    L *cur = header;
    L *next = NULL;
    while (cur->next != NULL)
    {
        next = cur->next;
        free(cur);
        cur = next;
    }
    free(cur);
}

// 创建链表节点
L *CreateNode(int id)
{
    L *node = malloc(sizeof(L));
    if(node == NULL) die("Memory error!\n");
    memset(node, 0, sizeof(L));
    node->id = id;
    node->next = NULL;
    return node;
}

// 单链表尾插
void tail_insert(L *header, L *new)
{
    L *cur = header;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = new;
}

// 单链表头插
void top_insert(L *header, L *new)
{
    L *cur = header;
    new->next = cur->next;
    cur->next = new;
}

// 单链表的遍历
void Print_node(L *header)
{
    L *cur = header;
    while (cur->next != NULL)
    {
        cur = cur->next;
        printf("%d-->",cur->id);
    }
    printf("NULL\n");
    
}

// 删除单链表节点
int delete_node(L *header, int id)
{
    L *cur = header;
    L *prev = NULL;
    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
        if(cur->id == id)
        {
            if(cur->next != NULL)
            {
                prev->next = cur->next;
            }
            else
            {
                prev->next = NULL;
            }
            free(cur);
            return 0;
        }
    }
    printf("without such node\n");
    return -1;
}

// 逆序整个链表
void trave_list(L *header)
{
    L *p = header->next;
    L *pback;

    if(p == NULL || p->next == NULL) return;

    while (p->next != NULL)
    {
        pback = p->next;
        if(p == header->next) p->next = NULL;
    else
        {
            p->next = header->next;
            header->next = p;
        }
        p = pback;
    }
    top_insert(header, p);    
}

int main()
{
    L *header = CreateNode(0);
    for(int i = 1; i < 10; i++)
    {
        tail_insert(header,CreateNode(i));
    }
    Print_node(header);
    trave_list(header);
    Print_node(header);
    for (int i = 0; i < 10; i++)
    {
        delete_node(header,i);
        Print_node(header);
    }
    close(header);
    return 0;
}