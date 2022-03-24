#ifndef _HEADER_
#define _HEADER_

typedef struct typ{
    char *id;
    void (*f)(va_list prif);
} idp;

int printf(const char *restrict format, ...);
void id_char(va_list prif);
void id_str(va_list prif);
#endif