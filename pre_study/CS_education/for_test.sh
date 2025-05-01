#!/bin/bash

# 定义日志文件
LOG_FILE="command_output.log"
ERROR_FILE="command_error.log"

# 初始化计数器
count=0

# 清空日志文件
> "$LOG_FILE"
> "$ERROR_FILE"

# 定义要运行的命令
COMMAND="bash test.sh"

# 循环运行命令直到出错
while true; do
    ((count++)) # 增加计数器
    echo "运行第 $count 次..." >> "$LOG_FILE"
    
    # 运行命令并捕获输出和错误
    $COMMAND >> "$LOG_FILE" 2>> "$ERROR_FILE"
    
    # 检查命令退出状态
    if [[ $? -ne 0 ]]; then
        echo "命令出错，退出循环。" >> "$LOG_FILE"
        break
    fi
done

# 输出日志文件内容
echo "=== 标准输出 ==="
cat "$LOG_FILE"

echo "=== 标准错误 ==="
cat "$ERROR_FILE"

# 报告运行次数
echo "命令在失败前共运行了 $count 次。"
