// 第十七个程序：这个程序创建了一个小型数据库，用于演示堆和栈的内存分配
/*
    * 输入参数使用指针传递，加入const修饰符将使参数只读
*/
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

struct Address {
    int id;
    int set;
    char *name;
    char *email;
};

struct Database {
    int max_rows;
    int max_data;
    struct Address *rows;
};

struct Connection {
    FILE *file;
    struct Database *db;
};

void Database_close(struct Connection *conn);

void die(const char *message,struct Connection *conn)
{
    Database_close(conn);
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

// 打印结构体ADDress的内容
void Address_print(struct Address *addr)
{
    printf("%d %s %s\n",
            addr->id, addr->name, addr->email);
}

// 这里是把file文件的指针传递给Database指针
void Database_load(struct Connection *conn)
{
    int rc1 = fread(&conn->db->max_rows, sizeof(int), 1, conn->file);
    int rc2 = fread(&conn->db->max_data, sizeof(int), 1, conn->file);
    if(rc1 != 1 || rc2 != 1) die("Failed to load database.", conn);
    
    for (int i = 0; i < conn->db->max_rows; i++)
    {
        int rc3 = fread(&conn->db->rows[i].id, sizeof(int), 1, conn->file);
        int rc4 = fread(&conn->db->rows[i].set, sizeof(int), 1, conn->file);
        int rc5 = fread(conn->db->rows[i].name, conn->db->max_data, 1, conn->file);
        int rc6 = fread(conn->db->rows[i].email, conn->db->max_data, 1, conn->file);
        if(rc3 != 1 || rc4 != 1 || rc5 != 1 || rc6 != 1) {
            die("Failed to load database.", conn);
        }
    }
    
}

/**
 * @brief 打开一个数据库
 * 
 * @param filename 数据库文件名
 * @param mode 打开模式，
 *             'c'表示创建，清空或者创建一个新的text文件用于写
 *             'r+'表示读取和写入，打开已有文件用于读写
 * fopen()返回该text文件的指针
 */
struct Connection *Database_open(const char *filename, char mode, int max_data, int max_rows)
{

    struct Connection *conn = malloc(sizeof(struct Connection));
    if(!conn) die("Memory error",conn);

    conn->db = malloc(sizeof(struct Database));
    if(!conn->db) die("Memory error",conn);
    conn->db->max_data = max_data;
    conn->db->max_rows = max_rows;
    
    conn->db->rows = malloc(sizeof(struct Address) * max_rows);
    if(!conn->db->rows) die("Memory error",conn);

    for(int i = 0; i < max_rows; i++){
        struct Address *cur = &conn->db->rows[i];
        cur->email = malloc(max_data);
        if(!cur->email) die("Memory error",conn);
        cur->name = malloc(max_data);
        if(!cur->name) die("Memory error",conn);
    }

    if(mode == 'c') {
        conn->file = fopen(filename, "w");
    } else {
        conn->file = fopen(filename, "r+");

        if(conn->file) {
            Database_load(conn);
        }
    }

    if(!conn->file) die("Failed to open the file",conn);

    return conn;
}

// 关闭数据库，释放内存，关闭文件
void Database_close(struct Connection *conn)
{
    if (conn) {
        if (conn->file) fclose(conn->file);

        if (conn->db) {
            if (conn->db->rows) {
                for (int i = 0; i < conn->db->max_rows; i++) {
                    free(conn->db->rows[i].name);  // 释放 name
                    free(conn->db->rows[i].email); // 释放 email
                }
                free(conn->db->rows); // 释放 rows 数组
            }
            free(conn->db); // 释放 Database
        }
        free(conn); // 释放 Connection
    }
}

void Database_write(struct Connection *conn)
{
    rewind(conn->file);// 将文件内部位置指针重新定位到文件开头

    int rc1 = fwrite(&conn->db->max_rows, sizeof(int), 1, conn->file);
    int rc2 = fwrite(&conn->db->max_data, sizeof(int), 1, conn->file);
    if(rc1 != 1 || rc2 != 1) die("Failed to load database.", conn);
    
    for (int i = 0; i < conn->db->max_rows; i++)
    {
        int rc3 = fwrite(&conn->db->rows[i].id, sizeof(int), 1, conn->file);
        int rc4 = fwrite(&conn->db->rows[i].set, sizeof(int), 1, conn->file);
        int rc5 = fwrite(conn->db->rows[i].name, conn->db->max_data, 1, conn->file);
        int rc6 = fwrite(conn->db->rows[i].email, conn->db->max_data, 1, conn->file);
        if(rc3 != 1 || rc4 != 1 || rc5 != 1 || rc6 != 1) {
            die("Failed to load database.", conn);
        }
    }
    // 冲刷缓存区，确保写入了文件
    int rc = fflush(conn->file);
    if(rc == -1) die("Cannot flush database.",conn);
}

// 这个函数创建了一个数据库，并初始化了每一行的地址
void Database_create(struct Connection *conn)
{
    int max_rows = conn->db->max_rows;
    if(!conn->db->rows) die("Memory error",conn);

    for(int i = 0; i < max_rows; i++) {
        conn->db->rows[i].id = i;
        conn->db->rows[i].set = 0;
    }
}

// 这里是把数据写入到ADDress结构体中
// Bug: 这里是一个bug，strncpy函数没有检查长度
// 解决方法是，在strncpy函数后面加上一个'\0'字符
void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
    struct Address *addr = &conn->db->rows[id];
    int max_data = conn->db->max_data;
    if(addr->set) die("Already set, delete it first",conn);

    addr->set = 1;
    // WARNING: bug, read the "How To Break It" and fix this
    char *res = strncpy(addr->name, name, max_data-1);
    *(addr->name + max_data-1) = '\0'; 
    // demonstrate the strncpy bug
    if(!res) die("Name copy failed",conn);

    res = strncpy(addr->email, email, max_data-1);
    *(addr->email + max_data-1) = '\0';
    if(!res) die("Email copy failed",conn);
}

// 通过id，打印出ADDress中的内容
void Database_get(struct Connection *conn, int id)
{
    struct Address *addr = &conn->db->rows[id];

    if(addr->set) {
        Address_print(addr);
    } else {
        die("ID is not set",conn);
    }
}

// 只是把set设置为0，并没有删除数据
void Database_delete(struct Connection *conn, int id)
{
    conn->db->rows[id].set = 0;
}

// 打印所有已被设置的地址
void Database_list(struct Connection *conn)
{
    int i = 0;
    struct Database *db = conn->db;
    int max_rows = db->max_rows;

    for(i = 0; i < max_rows; i++) {
        struct Address *cur = db->rows + i;

        if(cur->set) {
            Address_print(cur);
        }
    }
}

void Database_find(struct Connection *conn, char* message){
    for (int i = 0; i < conn->db->max_rows; i++)
    {
        int rc1 = strcmp(conn->db->rows[i].name, message);
        int rc2 = strcmp(conn->db->rows[i].email, message);
        if(rc1 == 0 || rc2 == 0) {
            Address_print(&conn->db->rows[i]);
        }
}
    

}

int main(int argc, char *argv[])
{
    
    if(argc < 3) printf("USAGE: ex17 <dbfile> <action> [action params]");

    char *filename = argv[1];
    char action = argv[2][0];
    int max_rows,max_data;
    if(action == 'c'){
        max_rows = atoi(argv[3]);
        max_data = atoi(argv[4]);
    } else {
        int rows_data[2];
        FILE *file = fopen(filename,"r+");
        fread(rows_data, sizeof(int), 2, file);
        max_rows = rows_data[0];
        max_data = rows_data[1];
        fclose(file);
    }

    struct Connection *conn = Database_open(filename, action, max_data, max_rows);
    
    int id;
    if(action != 'c'){
        if(argc > 3) id = atoi(argv[3]);
        if(id >= max_rows) die("There's not that many records.",conn);
    }

    switch(action) {
        case 'c':
            Database_create(conn);
            Database_write(conn);
            break;

        case 'g':
            if(argc != 4) die("Need an id to get",conn);

            Database_get(conn, id);
            break;

        case 's':
            if(argc != 6) die("Need id, name, email to set",conn);

            Database_set(conn, id, argv[4], argv[5]);
            Database_write(conn);
            break;

        case 'd':
            if(argc != 4) die("Need id to delete",conn);

            Database_delete(conn, id);
            Database_write(conn);
            break;

        case 'l':
            Database_list(conn);
            break;

        case 'f':
            if(argc != 4) die("Need message to find",conn);
        Database_find(conn, argv[3]);
            break;
        default:
            die("Invalid action, only: c=create, g=get, s=set, d=del, l=list",conn);
    }

    Database_close(conn);

    return 0;
}