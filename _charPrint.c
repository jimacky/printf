#include "main.h"

/**
 * _charPrint - Prints a character to the console
 * @chars: List of variadic arguments
 *
 * Return: Return (1) ALWAYS
 */
int _charPrint(va_list chars)
{
	char c = (char)va_arg(chars, int);

	if (_putchar(c) == -1)
		return (-1);
	return (1);
}
