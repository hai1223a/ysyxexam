#!/bin/bash

polo() {
    if [ -z "$DIR" ]; then
        echo "DIR 环境变量未设置！"
    else
        cd "$DIR" || echo "无法切换到目录 $DIR"
    fi
}
polo
