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
    char *phone;  // 新增字段
    char *city;   // 新增字段
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
void die(const char *message, struct Connection *conn)
{
    if(errno) {
        perror(message);
    } else {
        printf("ERROR: %s\n", message);
    }
    if(conn) Database_close(conn);
    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("+----+--------------------+--------------------+--------------------+--------------------+\n");
    printf("| ID | Name               | Email              | Phone              | City               |\n");
    printf("+----+--------------------+--------------------+--------------------+--------------------+\n");
    printf("| %-2d | %-18s | %-18s | %-18s | %-18s |\n",
           addr->id,
           addr->name ? addr->name : "N/A",
           addr->email ? addr->email : "N/A",
           addr->phone ? addr->phone : "N/A",
           addr->city ? addr->city : "N/A");
    printf("+----+--------------------+--------------------+--------------------+--------------------+\n");
}

void Database_load(struct Connection *conn)
{
    int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
    if(rc != 1) die("Failed to load database.", conn);
    conn->db->rows = malloc(conn->db->max_rows * sizeof(struct Address));
    if(!conn->db->rows) die("Memory error", conn);
    rc = 0;
    for(int i = 0; i < conn->db->max_rows; i++) {
        (conn->db->rows+i)->name = malloc(conn->db->max_data);
        if(!(conn->db->rows+i)->name) die("Memory error", conn);
        (conn->db->rows+i)->email = malloc(conn->db->max_data);
        if(!(conn->db->rows+i)->email) die("Memory error", conn);
        (conn->db->rows+i)->phone = malloc(conn->db->max_data);
        if(!(conn->db->rows+i)->phone) die("Memory error", conn);
        (conn->db->rows+i)->city = malloc(conn->db->max_data);
        if(!(conn->db->rows+i)->city) die("Memory error", conn);
        rc += fread(conn->db->rows+i, sizeof(int), 2, conn->file);
        rc += fread((conn->db->rows+i)->name, conn->db->max_data, 1, conn->file);
        rc += fread((conn->db->rows+i)->email, conn->db->max_data, 1, conn->file);
        rc += fread((conn->db->rows+i)->phone, conn->db->max_data, 1, conn->file);
        rc += fread((conn->db->rows+i)->city, conn->db->max_data, 1, conn->file);
    }
    if (rc != 6*conn->db->max_rows) die("Failed to write rows.", conn);
}

struct Connection *Database_open(const char *filename, char mode)
{
    struct Connection *conn = malloc(sizeof(struct Connection));
    if(!conn) die("Memory error", conn);

    conn->db = malloc(sizeof(struct Database));
    if(!conn->db) die("Memory error", conn);

    if(mode == 'c') {
        conn->file = fopen(filename, "w");
    } else {
        conn->file = fopen(filename, "r+");

        if(conn->file) {
            Database_load(conn);
        }
    }

    if(!conn->file) die("Failed to open the file", conn);

    return conn;
}

void Database_close(struct Connection *conn)
{
    if(conn) {
        if(conn->file) fclose(conn->file);
        for(int i = 0; i < conn->db->max_rows; i++) {
            if((conn->db->rows+i)->name) free((conn->db->rows+i)->name);
            if((conn->db->rows+i)->email) free((conn->db->rows+i)->email);
            if((conn->db->rows+i)->phone) free((conn->db->rows+i)->phone);
            if((conn->db->rows+i)->city) free((conn->db->rows+i)->city);
        }
        if(conn->db->rows) free(conn->db->rows);
        if(conn->db) free(conn->db);
        free(conn);
    }
}

void Database_write(struct Connection *conn)
{
    rewind(conn->file);

    int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
    if(rc != 1) die("Failed to write database.", conn);

    rc = 0;
    for(int i = 0; i < conn->db->max_rows; i++)
    {
        rc += fwrite(conn->db->rows+i, sizeof(int), 2, conn->file);
        rc += fwrite((conn->db->rows+i)->name, conn->db->max_data, 1, conn->file);
        rc += fwrite((conn->db->rows+i)->email, conn->db->max_data, 1, conn->file);
        rc += fwrite((conn->db->rows+i)->phone, conn->db->max_data, 1, conn->file);
        rc += fwrite((conn->db->rows+i)->city, conn->db->max_data, 1, conn->file);
    }
    if (rc != 6*conn->db->max_rows) die("Failed to write rows.", conn);

    rc = fflush(conn->file);
    if(rc == -1) die("Cannot flush database.", conn);
}

void Database_create(struct Connection *conn, int max_data, int max_rows)
{
    conn->db->max_data = max_data;
    conn->db->max_rows = max_rows;
    conn->db->rows = malloc(max_rows * sizeof(struct Address));
    if(!conn->db->rows) die("Memory error", conn);
    for(int i = 0; i < max_rows; i++) {
        (conn->db->rows+i)->name = malloc(max_data);
        if(!(conn->db->rows+i)->name) die("Memory error", conn);
        (conn->db->rows+i)->email = malloc(max_data);
        if(!(conn->db->rows+i)->email) die("Memory error", conn);
        (conn->db->rows+i)->phone = malloc(max_data);
        if(!(conn->db->rows+i)->phone) die("Memory error", conn);
        (conn->db->rows+i)->city = malloc(max_data);
        if(!(conn->db->rows+i)->city) die("Memory error", conn);
        (conn->db->rows+i)->id = i;
        (conn->db->rows+i)->set = 0;
    }
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email, const char *phone, const char *city)
{
    struct Address *addr = conn->db->rows+id;
    if(addr->set) die("Already set, delete it first", conn);

    addr->set = 1;
    strncpy(addr->name, name, conn->db->max_data - 1);
    addr->name[conn->db->max_data - 1] = '\0';

    strncpy(addr->email, email, conn->db->max_data - 1);
    addr->email[conn->db->max_data - 1] = '\0';

    strncpy(addr->phone, phone, conn->db->max_data - 1);
    addr->phone[conn->db->max_data - 1] = '\0';

    strncpy(addr->city, city, conn->db->max_data - 1);
    addr->city[conn->db->max_data - 1] = '\0';
}

void Database_get(struct Connection *conn, int id)
{
    struct Address *addr = conn->db->rows+id;
    if(addr->set) {
        Address_print(addr);
    } else {
        die("ID is not set", conn);
    }
}

void Database_delete(struct Connection *conn, int id)
{
    (conn->db->rows+id)->set = 0;
}

void Database_list(struct Connection *conn)
{
    int i = 0;
    struct Database *db = conn->db;

    for(i = 0; i < conn->db->max_rows; i++) {
        struct Address *cur = &db->rows[i];

        if(cur->set) {
            Address_print(cur);
        }
    }
}

void Database_find(struct Connection *conn, const char *name)
{
    for(int i = 0; i < conn->db->max_rows; i++) {
        struct Address *cur = &conn->db->rows[i];

        if(cur->set && !strcmp(name, cur->name)) {
            Address_print(cur);
        }
    }
}

int main(int argc, char *argv[])
{
    if(argc < 3) die("USAGE: ex17 <dbfile> <action> [action params]", NULL);

    char *filename = argv[1];
    char action = argv[2][0];
    struct Connection *conn = Database_open(filename, action);
    int id = 0;

    if(argc > 3) id = atoi(argv[3]);

    switch(action) {
        case 'c':
            if(argc != 5) die("Need max_data and max_rows to create.", conn);
            int max_data = atoi(argv[3]);
            int max_rows = atoi(argv[4]);
            Database_create(conn, max_data, max_rows);
            Database_write(conn);
            break;

        case 'g':
            if(argc != 4) die("Need an id to get", conn);

            Database_get(conn, id);
            break;

        case 'f':
            if(argc != 4) die("Need an name to get", conn);
            Database_find(conn, argv[3]);
            break;

        case 's':
            if(argc != 8) die("Need id, name, email, phone, city to set", conn);
            if(id >= conn->db->max_rows) die("There's not that many records.", conn);
            Database_set(conn, id, argv[4], argv[5], argv[6], argv[7]);
            Database_write(conn);
            break;

        case 'd':
            if(argc != 4) die("Need id to delete", conn);
            Database_delete(conn, id);
            Database_write(conn);
            break;

        case 'l':
            Database_list(conn);
            break;
        default:
            die("Invalid action, only: c=create, g=get, s=set, d=del, l=list", conn);
    }

    Database_close(conn);

    return 0;
}