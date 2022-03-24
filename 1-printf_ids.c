#include "main.h"
#include <stdarg.h>
#include <unistd.h>

void id_char(va_list inprif, int *len)
{
	char c = va_arg(inprif, int);

	write(1, &c, 1);
    (*len)++;
}

void id_str(va_list inprif, int *len)
{
	int i = 0;
	char *c = va_arg(inprif, char *);

	while (c[i])
	{
		write(1, &c[i], 1);
		len++;
		i++;
	}
}