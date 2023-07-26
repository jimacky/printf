#include "main.h"

/**
 * print_Str - Prints a string of no 
 * printable character in specific way
 * @Str: variadic arguments
 *
 * Return: Return count
 */
int _STRINGPrint(va_list Str)
{
	char *tmp, buffer[20];
	int i, n, y;
	unsigned int count;

	tmp = va_arg(Str, char *);
	if (tmp == NULL)
		tmp = "(null)";
    i = 0;
    n = 0;
    count = 0;
	while (tmp[i])
	{
		y = 0;
		if ((tmp[i] < 32 && tmp[i] > 0) || (tmp[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			n = tmp[i];
			if (n <= 15)
				_putchar('0');
			while (n > 0)
			{
				if (n % 16 >= 10 && n % 16 <= 15)
					buffer[y] = 55 + (n % 16);
				else
					buffer[y] = 48 + (n % 16);
				n = n / 16;
				y++;
			}
			while (--y >= 0)
				_putchar(buffer[y]);
			count += 4;
		}
		else
		{
			_putchar(tmp[i]);
			count++;
		}
        i++;
	}
	return (count);
}
