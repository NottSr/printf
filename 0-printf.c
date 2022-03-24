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
	int i = 0, m = 0, *len = NULL, num = 0;

	va_list prif;
	idp tsec[] = {
		{"c", id_char},
		{"s", id_str},
		{NULL, NULL}
	};

	len = &num;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(prif, format);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '%')
		{
			/*printf("el valor de fromat[i] es: %c\n", format[i]);
			printf("Entro al primer if\n");*/
			for (m = 0; tsec[m].id != NULL; m++)
			{
				if (tsec[m].id[0] == format[i + 1])
				{
					/*printf("Entro al segundo if\n");*/
					tsec[m].f(prif, len);
					i++;
				}
			}
			i++;
		}
		write(1, &format[i], 1);
	}
	va_end(prif);
	return (*len);
}
