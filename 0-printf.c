#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Our print function
 * @format: input to be printed
 * Return: the number of characters printed or 0
 */
int _printf(const char *format, ...)
{
	int i, m, *len, num = 0;

	va_list prif;
	idp typ[] = {
		{"c", id_char},
		{"s", id_str},
	};

	len = &num;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(prif, format);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '%')
		{
			m = 0;
			while (typ[m].id != NULL)
			{
				if (typ[m].id[0] == format[i + 1])
				{
					typ[m].f(prif, len);
				}
				m++;
				i =+ 1;
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	va_end(prif);
	return (*len);
}
