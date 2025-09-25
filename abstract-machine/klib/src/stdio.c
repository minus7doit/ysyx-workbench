#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
//#include<stdio.h>
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
#define MAX_PRINT_NUM 1024

int vsprintf(char *out, const char *fmt, va_list ap) {
  int d;
  char *s;
  int c;
 const char *ptr=fmt;
  while(*ptr){
    bool placeholder = false;
    if(*ptr=='%'){
        ptr++;
        char place_char = ' ';
        if(*ptr == '0') {
          placeholder = true;
          place_char = '0';
          ptr++;
        }
        int width = 0;
        while((*ptr)>='0' && (*ptr)<='9'){
            placeholder = true;
            width = width*10 + (*ptr - '0');
            ptr++;
        }

        switch(*ptr){
        case 'c': c=va_arg(ap,int);
                  *out++=(char)c;
                  ptr++;
                  break;
        case 'd': d=va_arg(ap,int);
                  if(d<0){
                   *out++='-';
                    d=-d;
                  }
                 char buf[12];
                 uint32_t arg_len =0;
                 int i=0;
                 if(d==0) {
                  *out++='0';
                  if(placeholder){
                      for(int j=0;j<(width-1);j++) {
                      *out++=place_char;
                      }
                    }
                 }
                 else {
                    while(d>0){
                    arg_len ++;
                    buf[i++]='0'+d%10;
                    d=d/10;
                    }
                    if(placeholder){
                      for(int j=0;j<(width-arg_len);j++) {
                      *out++=place_char;
                      }
                    }
                    while(i>0){
                    *out++=buf[--i];
                    }
                 }
                  ptr++;
                  break;
        case 's': s=va_arg(ap,char *);
                    if(placeholder){
                      for(int j=0;j<width;j++) {
                      *out++=' ';
                     }
                    }

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

int printf(const char *fmt, ...) {
  va_list ap;
  int n=0;
  char out[MAX_PRINT_NUM];
  va_start(ap,fmt);
  n=vsprintf(out,fmt,ap);
  for(int i=0;i<n;++i){
    putch(out[i]);
  }
  va_end(ap);
  return n;
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
