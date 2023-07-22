#include "main.h"

/**
 * _percentPrint - Prints the character '%'
 * @args: List of variadic arguments
 *
 * Return: Return (1) ALWAYS
 */
int _percentPrint(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
