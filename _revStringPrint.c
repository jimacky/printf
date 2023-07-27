#include "main.h"

/**
 * _revStringPrint - Prints a string in reverse
 * @str: variadic arguments
 *
 * Return: returns the count
 */
int _revStringPrint(va_list str)
{
	char *temp;
	int i, count;

	temp = va_arg(str, char *);
	i = 0;
	count = 0;
	if (temp == NULL)
	{
		temp = ")llun(";
	}
	while (temp[i])
	{
		i++;
	}
	while (--i >= 0)
	{
		_putchar(temp[i]);
		count++;
	}
	return (count);
}
