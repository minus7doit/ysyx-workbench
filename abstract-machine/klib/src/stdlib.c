#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

char *itoa(int value, char *str, int base) {
  char *p = str;
  int sign = value < 0 && base == 10 ? -1 : 1;

  if (sign < 0) {
    value = -value;
  }

  do {
    *p++ = "0123456789abcdef"[value % base];
    value /= base;
  } while (value);

  if (sign < 0) {
    *p++ = '-';
  }

  *p-- = '\0';

  // Reverse the string
  char *start = str;
  while (start < p) {
    char temp = *start;
    *start++ = *p;
    *p-- = temp;
  }

  return str;
}

void string_generate (char * string ,uint32_t len){
  char strtab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  for ( uint32_t i = 0; i < len; i++) {
    uint32_t idx = rand() % 62;
    *string = strtab[idx];
    string++;
  }
  *string = '\0';
}
static void* top_ptr;
void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
//#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
if (size == 0) return NULL;
if(top_ptr == NULL)  top_ptr = heap.start;

if ((uintptr_t)top_ptr + size <= (uintptr_t)heap.end) {
  void *ret = top_ptr;
  top_ptr = (void *)((uintptr_t)top_ptr + size);
  return ret;
}
//#endif
  return NULL;
}

void free(void *ptr) {
  (void) ptr;
}
#endif
