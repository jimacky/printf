#include "main.h"

/**
 * _intPrint - Prints an integer
 * @nums: List of variadic arguments
 *
 * Return: Returns (count) ALWAYS
 */
int _intPrint(va_list ints)
{
	int n, num, digit, mod, buffer;
	int count;

	buffer = va_arg(ints, int);
	mod = buffer % 10;
	buffer = buffer / 10;
	count = 0;
	if (mod < 0)
	{
		buffer = -buffer;
		mod = -mod;
		_putchar('-');
		count++;
	}
	num = buffer;
	digit = 1;
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			num = num / 10;
			digit = digit * 10;
		}
		while (digit >= 1)
		{
			n = buffer / digit;
			_putchar(n + '0');
			count++;
			buffer = buffer % digit;
			digit = digit / 10;
		}
	}
	_putchar(mod + '0');
	count++;
	return (count);
}
