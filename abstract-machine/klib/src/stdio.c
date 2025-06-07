#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <limits.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int count = 0;
  while (*fmt) {
    if (*fmt == '%') {
      fmt++;
      // 处理零填充和宽度
      int zero_pad = 0, width = 0;
      if (*fmt == '0') {
        zero_pad = 1;
        fmt++;
      }
      while (*fmt >= '0' && *fmt <= '9') {
        width = width * 10 + (*fmt - '0');
        fmt++;
      }
      // 处理长整型格式符'l',(因为使用32位机器)这里采用忽略策略
      if(*fmt == 'l') fmt++;
      // 这里识别各种通配符
      switch (*fmt) {
        case 'd': {
          int num = va_arg(ap, int);
          char num_str[16];
          int n = 0, neg = 0;
          unsigned int unum;
          if (num < 0) {
            neg = 1;
            unum = (unsigned int)(-num);
          } else {
            unum = (unsigned int)num;
          }
          do {
            num_str[n++] = (unum % 10) + '0';
            unum /= 10;
          } while (unum > 0);
          if (neg) num_str[n++] = '-';
          int pad = width - n;
          if (zero_pad && pad > 0) {
            if (neg) {
              putch('-');
              count++;
              n--;
            }
            for (int i = 0; i < pad; i++) {
              putch('0');
              count++;
            }
            for (int i = n - 1; i >= (neg ? 1 : 0); i--) {
              putch(num_str[i]);
              count++;
            }
          } else {
            for (int i = 0; i < pad; i++) {
              putch(' ');
              count++;
            }
            for (int i = n - 1; i >= 0; i--) {
              putch(num_str[i]);
              count++;
            }
          }
          break;
        }
        case 'u': {
          unsigned int num = va_arg(ap, unsigned int);
          char num_str[16];
          int n = 0;
          do {
            num_str[n++] = (num % 10) + '0';
            num /= 10;
          } while (num > 0);
          int pad = width - n;
          for (int i = 0; i < pad; i++) {
            putch(zero_pad ? '0' : ' ');
            count++;
          }
          for (int i = n - 1; i >= 0; i--) {
            putch(num_str[i]);
            count++;
          }
          break;
        }
        case 'x':
        case 'X': {
          unsigned int num = va_arg(ap, unsigned int);
          char num_str[16];
          int n = 0;
          do {
            int digit = num % 16;
            if (digit < 10)
              num_str[n++] = '0' + digit;
            else
              num_str[n++] = (*fmt == 'x' ? 'a' : 'A') + (digit - 10);
            num /= 16;
          } while (num > 0);
          int pad = width - n;
          for (int i = 0; i < pad; i++) {
            putch(zero_pad ? '0' : ' ');
            count++;
          }
          for (int i = n - 1; i >= 0; i--) {
            putch(num_str[i]);
            count++;
          }
          break;
        }
        case 'o': {
          unsigned int num = va_arg(ap, unsigned int);
          char num_str[16];
          int n = 0;
          do {
            int digit = num % 8;
            num_str[n++] = '0' + digit;
            num /= 8;
          } while (num > 0);
          int pad = width - n;
          for (int i = 0; i < pad; i++) {
            putch(zero_pad ? '0' : ' ');
            count++;
          }
          for (int i = n - 1; i >= 0; i--) {
            putch(num_str[i]);
            count++;
          }
          break;
        }
        case 'p': {
          void *ptr = va_arg(ap, void *);
          uintptr_t addr = (uintptr_t)ptr;
          putch('0'); putch('x'); count += 2;
          char num_str[2 * sizeof(uintptr_t) + 1];
          int n = 0;
          if (addr == 0) {
            putch('0'); count++;
          } else {
            while (addr) {
              int digit = addr % 16;
              num_str[n++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
              addr /= 16;
            }
            for (int i = n - 1; i >= 0; i--) {
              putch(num_str[i]);
              count++;
            }
          }
          break;
        }
        case 's': {
          const char *s = va_arg(ap, const char *);
          int slen = 0;
          const char *sp = s;
          while (*sp++) slen++;
          int pad = width - slen;
          for (int i = 0; i < pad; i++) {
            putch(' ');
            count++;
          }
          while (*s) {
            putch(*(s++));
            count++;
          }
          break;
        }
        case 'c': {
          char ch = (char)va_arg(ap, int);
          putch(ch);
          count++;
          break;
        }
        case '%':
          putch('%');
          count++;
          break;
        default:
          putch('%');
          count++;
          putch(*fmt);
          count++;
          break;
      }
    } else {
      putch(*fmt);
      count++;
    }
    fmt++;
  }
  va_end(ap);
  return count;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *head = out;
  while (*fmt) {
    if (*fmt == '%') {
      fmt++;
      // 处理零填充和宽度
      int zero_pad = 0, width = 0;
      if (*fmt == '0') {
        zero_pad = 1;
        fmt++;
      }
      while (*fmt >= '0' && *fmt <= '9') {
        width = width * 10 + (*fmt - '0');
        fmt++;
      }
      switch (*fmt) {
        case 'd': {
          int num = va_arg(ap, int);
          char num_str[16];
          int n = 0, neg = 0;
          unsigned int unum;
          if (num < 0) {
            neg = 1;
            unum = (unsigned int)(-num);
          } else {
            unum = (unsigned int)num;
          }
          do {
            num_str[n++] = (unum % 10) + '0';
            unum /= 10;
          } while (unum > 0);
          if (neg) num_str[n++] = '-';
          int pad = width - n;
          if (zero_pad && pad > 0) {
            if (neg) {
              *(out++) = '-';
              n--;
            }
            for (int i = 0; i < pad; i++) {
              *(out++) = '0';
            }
            for (int i = n - 1; i >= (neg ? 1 : 0); i--) {
              *(out++) = num_str[i];
            }
          } else {
            for (int i = 0; i < pad; i++) {
              *(out++) = ' ';
            }
            for (int i = n - 1; i >= 0; i--) {
              *(out++) = num_str[i];
            }
          }
          break;
        }
        case 'u': {
          unsigned int num = va_arg(ap, unsigned int);
          char num_str[16];
          int n = 0;
          do {
            num_str[n++] = (num % 10) + '0';
            num /= 10;
          } while (num > 0);
          int pad = width - n;
          for (int i = 0; i < pad; i++) {
            *(out++) = zero_pad ? '0' : ' ';
          }
          for (int i = n - 1; i >= 0; i--) {
            *(out++) = num_str[i];
          }
          break;
        }
        case 'x':
        case 'X': {
          unsigned int num = va_arg(ap, unsigned int);
          char num_str[16];
          int n = 0;
          do {
            int digit = num % 16;
            if (digit < 10)
              num_str[n++] = '0' + digit;
            else
              num_str[n++] = (*fmt == 'x' ? 'a' : 'A') + (digit - 10);
            num /= 16;
          } while (num > 0);
          int pad = width - n;
          for (int i = 0; i < pad; i++) {
            *(out++) = zero_pad ? '0' : ' ';
          }
          for (int i = n - 1; i >= 0; i--) {
            *(out++) = num_str[i];
          }
          break;
        }
        case 's': {
          const char *s = va_arg(ap, const char *);
          int slen = 0;
          const char *sp = s;
          while (*sp++) slen++;
          int pad = width - slen;
          for (int i = 0; i < pad; i++) {
            *(out++) = ' ';
          }
          while (*s) {
            *(out++) = *(s++);
          }
          break;
        }
        case 'c': {
          char ch = (char)va_arg(ap, int);
          *(out++) = ch;
          break;
        }
        case '%':
          *(out++) = '%';
          break;
        default:
          *(out++) = '%';
          *(out++) = *fmt;
          break;
      }
    } else {
      *(out++) = *fmt;
    }
    fmt++;
  }
  *out = '\0';
  return out - head;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int written = vsprintf(out, fmt, ap);
  va_end(ap);
  return written;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
