#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * id_char - Our print function
 * @inprif: input to be printed
 * Return: the number of characters printed or 1
 */
int id_char(va_list inprif)
{
	char c = va_arg(inprif, int);

	write(1, &c, 1);
	return (1);
}
/**
 * id_str - Our print function
 * @inprif: input to be printed
 * Return: the number of characters printed or 1
 */
int id_str(va_list inprif)
{
	int i = 0;
	char *st = va_arg(inprif, char *);

	if (st == NULL)
		st = "error";
	while (st[i] != '\0')
		i++;
	write(1, st, i);
	return (i - 1);
}
/**
 * id_int - Our print function
 * @inprif: input to be printed
 * Return: the number of characters printed or 1
 */
int id_int(va_list inprif)
{
	int din = va_arg(inprif, int);
	int i = 0;

	write(1, &din, 1);
	while (din - 10 >= 0)
	{
		i++;
	}
	return (i - 1);
}
/**
 * id_per - Our print function
 * @inprif: input to be printed
 * Return: the number of characters printed or 1
 */
int id_per(va_list inprif)
{
	char per = '%';

	(void)inprif;
	write(1, &per, 1);
	return (1);
}
