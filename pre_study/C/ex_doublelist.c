// 这个程序演示了双向链表的基本操作
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int id;
    struct Node *prev;
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
    node->prev = NULL;
    return node;
}

// 双向链表尾插
void tail_insert(L *header, L *new)
{
    L *cur = header;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = new;
    new->prev = cur;
}

// 双向链表头插
void top_insert(L *header, L *new)
{
    L *cur = header;
    new->next = cur->next;
    new->prev = cur;
    cur->next->prev = new;
    cur->next = new;
}

// 双向链表的正向遍历
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

// 双向链表的反向遍历
void Print_node_nx(L *header)
{
    L *cur = header;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    while (cur->prev != header)
    {
        printf("%d-->",cur->id);
        cur = cur->prev;
    }
    printf("%d\n",cur->id);
    
}

// 删除单链表节点
int delete_node(L *header, int id)
{
    L *cur = header;
    L *p_prev = NULL;
    while (cur->next != NULL)
    {
        p_prev = cur;
        cur = cur->next;
        if(cur->id == id)
        {
            if(cur->next != NULL)
            {
                cur->next->prev = cur->prev;
                p_prev->next = cur->next;
            }
            else
            {
                p_prev->next = NULL;
            }
            free(cur);
            return 0;
        }
    }
    printf("without such node\n");
    return -1;
}



int main()
{
    L *header = CreateNode(0);
    for(int i = 1; i < 10; i++)
    {
        tail_insert(header,CreateNode(i));
    }
    Print_node(header);
    Print_node_nx(header);
    for (int i = 0; i < 10; i++)
    {
        delete_node(header,i);
        Print_node(header);
    }
    close(header);
    return 0;
}