#include "main.h"


char *converter(unsigned long int num);
/**
 * _addressPrint - prints address of input in hexa format
 * @addr: va_list arguments from _print
 *
 * Return: number of char printed
 */
int _addressPrint(va_list addr)
{
	char *str;
	unsigned long int p;
	int count;

	p = va_arg(addr, unsigned long int);
	count = 0;
	if (!p)
		str = "(nil)";
	else
	{
		str = converter(p);
		_putchar('0');
		_putchar('x');
	}
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	if (p)
		free(str);
	return (count);
}

/**
 * converter - converts number into base 16
 * @num: input number
 *
 * Return: returns converted num
 */
char *converter(unsigned long int num)
{
	char *hex, *ptr;
	char *buffer;
	int x, i;
	unsigned long int tmp;

	hex = "0123456789abcdef";
	x = 0;
	tmp = num;
	while (tmp > 0)
	{
		x++;
		tmp /= 16;
	}
	ptr = malloc((sizeof(ptr)) * x);
	buffer = malloc((sizeof(buffer)) * x);
	i = 0;
	while (num > 0)
	{
		ptr[i] = hex[(num % 16)];
		num /= 16;
		i++;
	}
	x = 0;
	while (--i >= 0)
	{
		buffer[x] = ptr[i];
		x++;
	}
	free(ptr);
	return (buffer);
}
