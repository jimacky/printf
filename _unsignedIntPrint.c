#include"main.h"

/**
 * unsignedIntPrint - Prints an unsigned int
 * @num: variadic arguments
 *
 * Return: Return count
 */
int _unsignedIntPrint(va_list num)
{
	unsigned count, value;
	unsigned int divisor, buffer, result;
	
	count = 0;
	value = va_arg(num, unsigned int);
	if (value == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		divisor = 1;
		buffer = value;
		result = 0;
		while (buffer >= 10)
		{
			buffer /= 10;
			divisor *= 10;
		}
		while (divisor > 0)
		{
			result = value / divisor;
			_putchar(result + '0');
			value %= divisor;
			divisor /= 10;
			count++;
		}
	}
	return (count);
}
