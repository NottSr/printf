#include "main.h"
#include <stdarg.h>
#include <stdio.h>
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
		st = "(null)";
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
	int i, num2, num3, zero = 0, ten = 10, count = 0;
	int num = va_arg(inprif, int);
	char nums;
	num2 = num;
	while (num2 != 0)
	{
		num2 /= 10;
		count++;
	}
	for (i = 0; i <= count; i++)
	{
		num3 = num / ten;
		num = num % ten;
		if (num != 0)
		{
			zero = 1;
		}
		if (zero == 1)
		{
			nums = num3 + '0';
			write(1, &nums, 1);
		}
	}
	if (count < 0)
		count++;
	return (count);
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
