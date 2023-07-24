#include "main.h"

/**
 * _charPrint - Prints a character to the console
 * @chars: List of variadic arguments
 *
 * Return: Return (1) ALWAYS
 */
int _charPrint(va_list chars)
{
	char c;

	c = (char)va_arg(chars, int);

	_putchar(c);
	return (1);
}
