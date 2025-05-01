#!/bin/bash
set -e  # 在任何命令失败时退出脚本

DB_FILE="test.db"

# 清理旧的数据库文件
if [ -f "$DB_FILE" ]; then
    rm "$DB_FILE"
fi

echo "=== 创建数据库 ==="
./ex17.o $DB_FILE c 512 100

echo "=== 添加记录 ==="
./ex17.o $DB_FILE s 0 "Alice" "alice@example.com" "1234567890" "New York"
./ex17.o $DB_FILE s 1 "Bob" "bob@example.com" "0987654321" "Los Angeles"
./ex17.o $DB_FILE s 2 "Charlie" "charlie@example.com" "1112223333" "Chicago"

echo "=== 获取记录 ==="
./ex17.o $DB_FILE g 0
./ex17.o $DB_FILE g 1
./ex17.o $DB_FILE g 2

echo "=== 查找记录 ==="
./ex17.o $DB_FILE f "Alice"
./ex17.o $DB_FILE f "Bob"
./ex17.o $DB_FILE f "Charlie"

echo "=== 列出所有记录 ==="
./ex17.o $DB_FILE l

echo "=== 删除记录 ==="
./ex17.o $DB_FILE d 1

echo "=== 列出所有记录（删除后） ==="
./ex17.o $DB_FILE l

echo "=== 测试完成 ==="