#include <stdio.h>
#include <string.h>

struct Person {
    char name[50]; // 使用固定大小的数组代替动态分配的字符串
    int age;
    int height;
    int weight;
};

// 创建结构体的函数
struct Person Person_create(char *name, int age, int height, int weight)
{
    struct Person who;

    // 初始化结构体成员
    strncpy(who.name, name, sizeof(who.name) - 1);
    who.name[sizeof(who.name) - 1] = '\0'; // 确保字符串以 '\0' 结尾
    who.age = age;
    who.height = height;
    who.weight = weight;

    return who; // 返回结构体
}

// 打印结构体的函数
void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[])
{
    // 在栈上创建两个结构体
    struct Person joe = Person_create("Joe Alex", 32, 64, 140);
    struct Person frank = Person_create("Frank Blank", 20, 72, 180);

    // 打印结构体信息
    printf("Joe is at memory location %p:\n", (void *)&joe);
    Person_print(joe);

    printf("Frank is at memory location %p:\n", (void *)&frank);
    Person_print(frank);

    // 修改结构体成员
    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;
    Person_print(joe);

    frank.age += 20;
    frank.weight += 20;
    Person_print(frank);

    return 0;
}