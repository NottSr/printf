#include "main.h"

void id_char(va_list prif)
{
	char c = va_arg(prif, int);

	write (1, &c, 1);
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
