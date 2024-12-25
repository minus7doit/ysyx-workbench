#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
    const char *p=s;
    while(*p){
    p++;
    }
    return p-s;
}

char *strcpy(char *dst, const char *src) {
     char *p=dst; 
    while (*src){
      *p=*src;
      src++;
      p++;
     }
     *p='\0';
     return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
     char *p=dst; 
     while (n>0){
      *p=*src;
      src++;
      p++;
      n--;
     }
     *p='\0';
     return dst;
}


char *strcat(char *dst, const char *src) {
char *p=dst;
while(*p){
p++;}
while(*src){
   *p=*src;
   p++;
   src++;
}
*p='\0';
return dst;
}

int strcmp(const char *s1, const char *s2) {
while(*s1){
if(*s1!=*s2) return *s1-*s2;
s1++;
s2++;
}
return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
while(n>0){
    if(*s1++!=*s2++) return (*s1)-(*s2);
    n--;
} 
return 0;
}

void *memset(void *s, int c, size_t n) {
unsigned char *p =s;
while(n){
*p++=(unsigned char)c;
n--;
}
return s;
}

void *memmove(void *dst, const void *src, size_t n) {
unsigned char *d = dst;
    const unsigned char *s = src;
    if (d == s || n == 0) {
        // 源和目标相同，或 n 为 0，不需要移动
        return dst;
    }

    if (d < s || d >= s + n) {
        // 内存区域没有重叠，可以从头到尾正常复制
        while (n--) {
            *d++ = *s++;
        }
    } else {
        // 内存区域有重叠，从尾到头复制
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }

    return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
   const  unsigned char*ptr_in=in;
    unsigned char*ptr_out=out;
    while(n--){
    *ptr_out++=*ptr_in++;
    }
    return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
const unsigned char*ptr1=s1;
const unsigned char*ptr2=s2;
while(n--){
if(*ptr1++!=*ptr2++) return *ptr1-*ptr2;
}
return 0;
}


#endif
