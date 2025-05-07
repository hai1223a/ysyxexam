#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  char *det = dst;
  while(*src) {
    *dst = *src;
    src++;
    dst++;
  }
  *dst = '\0';
  return det;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *det = dst;
  while(*dst) {
    dst++;
  }
  while(*src) {
    *dst = *src;
    dst++;
    src++;
  }
  *dst = '\0';
  return det;
}

int strcmp(const char *s1, const char *s2) {
  while (*s1 && *s2 && (*s1 == *s2))
  {
    s1++;
    s2++;
  }
  return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  unsigned char a = (unsigned char)c;
  unsigned char *st = (unsigned char *)s;
  while(n--) {
    *st = a;
    st++;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  const char *inm = (char *)in;
  char *outm = (char *)out;
  while(n--) {
    *outm = *inm;
    inm++;
    outm++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
