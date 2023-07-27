#include "main.h"

/**
 * _revStringPrint - Prints a string in reverse
 * @Str: variadic arguments
 *
 * Return: returns the count
 */
int _revStringPrint(va_list str)
{
	char *temp, *buffer;
	int i, count;

	temp = va_arg(str, char *);
	i = 0;
	if (!str)
	{
		buffer = "(null)";
		i = 6;
	}
	else
	{
		while (temp[i])
			i++;
	}
	count = 0;
	if (!temp)
	{
		while (--i > count)
		{
			_putchar(buffer[count]);
			count++;
		}
	}
	else
	{
		while (--i > 0)
		{
			_putchar(temp[i]);
			count++;
		}
	}
	return (count);
}
