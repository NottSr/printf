#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int i = 0, m = 0;

	va_list prif;
	idp typ[] = {
		{"c", id_char},
		{"s", id_str}};

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
	return (1);
}
