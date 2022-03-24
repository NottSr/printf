#ifndef _HEADER_
#define _HEADER_
#include <unistd.h>
#include <stdarg.h>

typedef struct typ{
    char *id;
    void (*f)(va_list prif);
} idp;

int _printf(const char *format, ...);
void id_char(va_list prif);
void id_str(va_list prif);
#endif