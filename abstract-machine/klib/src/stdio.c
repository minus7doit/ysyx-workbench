#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
//#include<stdio.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int d;
  char *s;
 const char *ptr=fmt;
  while(*ptr){
    if(*ptr=='%'){
        ptr++;
        switch(*ptr){
        case 'd': d=va_arg(ap,int);
                  if(d<0){
                   *out++='-';
                    d=-d;
                  }
                 char buf[12];
                 int i=0;
                 if(d==0) *out++='0';
                 else {
                    while(d>0){
                    buf[i++]='0'+d%10;
                    d=d/10;
                    }
                    while(i>0){
                    *out++=buf[--i];
                    }
                 }
                  ptr++;
                  break;
        case 's': s=va_arg(ap,char *);
                  while(*s){
                  *out++=*s++;
                  }
                  ptr++;
                  break;
        default:*out++='%';
                *out++=*ptr++;
                break;
     }
    }
    else{
    *out++=*ptr++;
    }
  }
  *out='\0';
return ptr-fmt;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  int n=0;
//  char *p;
  va_start(ap,fmt);
  n=vsprintf(out,fmt,ap);
  va_end(ap);
  return n;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
