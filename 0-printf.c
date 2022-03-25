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
	int i = 0, m = 0, len = 0, num = 0;

	va_list prif;
	idp tsec[] = {
		{"c", id_char},
		{"s", id_str},
		{"d", id_int},
		{"i", id_int},
		{"%", id_per},
		{NULL, NULL}
	};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(prif, format);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '%')
		{
			for (m = 0; tsec[m].id != NULL; m++)
				if (tsec[m].id[0] == format[i + 1])
				{
					num += tsec[m].f(prif);
					i += 1;
					break;
				}
			if (format[i + 1] != '\0' && m == 5)
			{
				write(1, &format[i], 1);
				num++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}
	va_end(prif);
	return (len + num);
}
