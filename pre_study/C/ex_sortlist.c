// 这个程序使用单向链表实现了冒泡排序和归并排序
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

int bubble_list(L *header)
{
    int temp = 0;
    int count = 0;
    L *cur = header;
    while(cur->next != NULL && cur->next->next != NULL)
    {
        cur = cur->next;
        if(cur->next->id < cur->id)
        {
            count++;
            temp = cur->id;
            cur->id = cur->next->id;
            cur->next->id = temp;
        }
    }
    return(count ? 1 : 0);
}

void bubble_sort(L *header)
{
    int value;
    do
    {
        value = bubble_list(header);
        /* code */
    } while (value);
}

L *split_list(L *head)
{
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    L *slow = head;
    L *fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    L *mid = slow->next;
    slow->next = NULL;
    return mid;
}

L *merge_sorted_lists(L *list1, L *list2)
{
    L dummy;
    L *tail = &dummy;
    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->id <= list2->id) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}

L *merge_sort(L *head)
{
    if (head == NULL || head->next == NULL) {
        return head;
    }

    L *mid = split_list(head);
    L *left = merge_sort(head);
    L *right = merge_sort(mid);

    return merge_sorted_lists(left, right);
}

int main(int argc, char *argv[])
{
    if(argc < 2) die("USAGE: ./ex_sortlist 4 3 1 5 6");
    int count = argc - 1;
    L *header = CreateNode(0);
    for(int i = 0; i < count; i++)
    {
        tail_insert(header,CreateNode(atoi(argv[i+1])));
    }
    Print_node(header);
    header->next = merge_sort(header->next);
    Print_node(header);
    close(header);
    return 0;
}