#include "main.h"

/**
* _octBasePrint - print the octal
* equivalent of  decimal number
* @num: the variadic argument
*
* Return: returns the count or -1 on faliure
*/
int _octBasePrint(va_list num)
{
	int i, z;
	unsigned int *buffer, x, y, count;

	count = 0;
	x = va_arg(num, unsigned int);
	if (x == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	else
	{
		i = 0;
		y = x;
		while (y > 0)
		{
			y = y / 8;
			i++;
		}
		buffer = malloc(sizeof(*buffer) * i);
		if (!buffer)
			return (-1);
	}
	z = 0;
	while (x > 0)
	{
		buffer[z] = x % 8;
		x /= 8;
		z++;
	}
	while (--z >= 0)
	{
		_putchar(buffer[z] + '0');
		count++;
	}
	return (count);
}
