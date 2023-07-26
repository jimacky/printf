#include "main.h"

int _printf(const char *format, ...);
/**
 * _printf - prints output according to the requested format
 * @format: A point to characters to be accessed
 *
 * Return: returns the count if successful and -1 if failed
*/
int _printf(const char *format, ...)
{
	unsigned int count, i, x;
	va_list list;
	int isSeen;
	int (*bufferpt)(va_list);

	func_id func_array[] = {
		{"c", _charPrint},
		{"b", _binaryPrint},
		{"s", _stringPrint},
		{"%", _percentPrint},
		{"d", _intPrint},
		{"x", _hexBasePrint},
		{"X", _HEXBasePrint},
		{"u", _unsignedIntPrint},
		{"o", _octBasePrint},
		{"i", _intPrint},
		{"S", _STRINGPrint},
		{"p", _addressPrint},
		{NULL, NULL}
	};
	if (!format)
		return (-1);
	va_start(list, format);
	i = 0;
	count = 0;
	isSeen = 0;
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '\0')
			return (count);
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '%')
		{
			x = 0;
			while (func_array[x].id)
			{
				if (func_array[x].id[0] == format[i + 1])
				{
					bufferpt = func_array[x].id_func;
					isSeen = 1;
				}
				x++;
			}
			if (isSeen != 1)
				bufferpt = NULL;
			if (!bufferpt)
			{
				if (format[i + 1] != '%')
				{
					_putchar(format[i]);
					count++;
				}
				_putchar(format[i + 1]);
				count++;
			}
			i += 1;
			if (bufferpt)
			{
				count = count + bufferpt(list);
				if (format[i] == '+' || format[i] == ' ' || format[i] == '#')
					i++;
			}
		}
		i++;
	}
	va_end(list);
	return (count);
}
