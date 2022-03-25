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
	return (i);
}
/**
 * expo - Our print function
 * @num: ten
 * @expo: contador
 * Return: result
 */
int expo(int num, int expo)
{
	int result = num;

	if (expo == 1)
		return (1);

	for (; expo > 2; expo--)
		result = result * num;

	return (result);
}

/**
 * id_int - Our print function
 * @inprif: input to be printed
 * Return: the number of characters printed or 1
 */
int id_int(va_list inprif)
{
	int i, num3, ten = 10, count = 0, count2, negative = 0;
	long int num = va_arg(inprif, int);
	unsigned int num2;
	char nums;

	if (num < 0)
	{
		num *= -1;
		negative = 1;
	}
	num2 = num;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num2 != 0)
	{
		num2 /= 10;
		count++;
	}
	count2 = count;
	if (negative == 1)
		write(1, "-", 1);
	for (i = 0; i < count;)
	{
		num3 = num / expo(ten, count2);
		num = num % expo(ten, count2);
		if (num >= 0)
		{
			nums = num3 + '0';
			write(1, &nums, 1);
		}
		i++;
		count2--;
	}
	if (count < 0)
		count++;
	return (count + negative);
}
/**
 * id_per - Our print function
 * @inprif: input to be printed
 * Return: the number of characters printed or 1
 */
int id_per(va_list inprif)
{
	char per = '%';

	(void) inprif;
	write(1, &per, 1);
	return (1);
}
