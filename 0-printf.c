#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *restrict format, ...)
{
    unsigned int i = 0, m = 0;

    va_list prif;
    idp typ[] = {
        {"c", id_char},
        {"s", id_str}
    };

    va_start(prif, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            while (typ[m].id != 0)
            {
                if (format[i + 1] == typ[m].id[0])
                {
                    typ[m].f(prif);
                }
                m++;
            }
        }
        else
        {
            write(1, &format[i], 1);
        }
        i++;
    }
    va_end(prif);
}

void id_char(va_list prif)
{
    char c = va_arg(prif, char);
    write(1, &c, 1);
}

void id_str(va_list prif)
{
    unsigned int i = 0;
    char *c = va_arg(prif, char *);
    while (c[i])
    {
        write(1, &c[i], 1);
        i++;
    }
}