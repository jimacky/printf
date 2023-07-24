#include "main.h"

int checkbinary(unsigned int x);

/**
 * _binaryPrint - converts an integer to a binary number
 * @num: The variadic argument
 *
 * Return: Count
 */
int _binaryPrint(va_list num)
{
	unsigned int x;
	int count;


	x = va_arg(num, unsigned int);
	count = 0;
	if (x <= 1)
	{
		_putchar(x + '0');
		count++;
	}
	count = checkbinary(x);
	return (count);
}

int checkbinary(unsigned int x)
{
	if (x > 1)
		return (checkbinary(x >> 1));
	_putchar((x & 1) + '0');
	return (1);
}







