#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *head = out;
  while (*fmt)
  {
    if(*fmt == '%') {
      fmt++;
      switch (*fmt)
      {
        case 'd':
          int num = va_arg(ap, int);
          char num_str[10];
          int n = 0;
          if(num < 0) {
            *(out++) = '-';
            num = -num;
          }
          do {
            num_str[n] = (num % 10) + '0';
            n++;
            num = num / 10;
          } while(num > 0);
          while(n) {
            n--;
            *(out++) = num_str[n];
          }
          break;
        case 's':
          const char *s = va_arg(ap, const char *);
          while(*s) {
            *(out++) = *(s++);
          }
          break;
        default:
          *(out++) = '%';
          *(out++) = *fmt;
          break;
      }
    }
    else 
    {
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
