#include "main.h"

/**
 * _stringPrint - Prints a string to the console
 * @str: List of variadic arguments
 *
 * Return: Return (count) ALWAYS
 */
int _stringPrint(va_list str)
{
	char *buffer;
	int i;

	buffer = va_arg(str, char *);
	if (buffer == NULL)
	{
		buffer = "(null)";
	}
	i = 0;
	while (buffer[i])
	{
		_putchar(buffer[i]);
		i++;
	}
	return (i);
}
