#!/bin/bash

# 定义函数 marco，用于保存当前目录到环境变量 DIR
marco() {
    export DIR=$(pwd) # 将当前目录保存到环境变量 DIR
}

# 调用函数 marco
marco

# 输出保存的目录
echo "当前目录已保存到环境变量 DIR: $DIR"
