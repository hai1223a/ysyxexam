.global bootloader
bootloader:
    # 加载 data_start 的地址（SRAM中的目标地址）
    la      a0, data_start
    
    # 加载 data_load_start 的地址（MROM中的源地址）
    la      a1, data_load_start
    
    # 比较地址是否相同，如果相同则直接返回
    beq     a0, a1, copy_done
    
    # 加载 data_size 的值到 a2
    la      a2, data_size
    
    # 如果 data_size == 0，直接返回
    beqz    a2, copy_done
    
    # 计算需要拷贝的4字节字数
    srli    a3, a2, 2      # a3 = data_size / 4 (字数量)
    andi    a4, a2, 0x3    # a4 = data_size % 4 (剩余字节数)
    
    # 如果字数量为0，跳转到字节拷贝
    beqz    a3, copy_bytes
    
copy_words:
    # 以4字节为单位拷贝
    lw      a5, 0(a1)      # 从源地址加载一个字(4字节)
    sw      a5, 0(a0)      # 存储到目标地址
    
    # 更新指针和计数器
    addi    a0, a0, 4      # 目标地址 += 4
    addi    a1, a1, 4      # 源地址 += 4
    addi    a3, a3, -1     # 字计数器--
    
    # 如果字计数器 != 0，继续循环
    bnez    a3, copy_words
    
    # 如果还有剩余字节需要拷贝
    beqz    a4, copy_done
    
copy_bytes:
    # 拷贝剩余字节（0-3个字节）
    lb      a5, 0(a1)      # 从源地址加载一个字节
    sb      a5, 0(a0)      # 存储到目标地址
    
    # 更新指针和计数器
    addi    a0, a0, 1      # 目标地址++
    addi    a1, a1, 1      # 源地址++
    addi    a4, a4, -1     # 字节计数器--
    
    # 如果还有剩余字节，继续循环
    bnez    a4, copy_bytes
    
copy_done:
    ret