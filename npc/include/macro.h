#ifndef __MACRO_H__
#define __MACRO_H__
//=====================================================
// 通用宏定义
//=====================================================
#define ANSI_FG_RED     "\33[1;31m"           // 终端红色输出
#define ANSI_FG_GREEN   "\33[1;32m"           // 终端绿色输出
#define ANSI_NONE       "\33[0m"              
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE  // 用于输出有颜色的终端信息

#if !defined(likely)
#define likely(cond)   __builtin_expect(cond, 1)
#define unlikely(cond) __builtin_expect(cond, 0)
#endif

// calculate the length of an array
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

// Assert
#define Assert(cond, format, ...) \
do { \
    if (!(cond)) { \
      printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__); \
      assert(cond); \
    } \
  } while (0)

  
#endif