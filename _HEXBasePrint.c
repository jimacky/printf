#include "main.h"


int _HEXBasePrint(va_list num);
/**
 * _HEXBasePrint - Prints the hexadecimal lower cas
 * equivalent of an integer
 * @num: variadic arguments
 *
 * Return: returns count
 */
int _HEXBasePrint(va_list num)
{
	char *result;
	int x, y, count, w;
	unsigned int n, size, tmp;

	char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7',
			 '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	n = va_arg(num, unsigned int);
	count = 0;
	if (n == 0)
	{
		_putchar(0 + '0');
		count++;
	}
	else
	{
		size = 0;
		tmp = n;
		while (tmp > 0)
		{
			tmp /= 16;
			size++;
		}
		result = malloc(sizeof(*result) * size);
		if (!result)
			return (-1);
		x = 0;
		y = 0;
		while (n > 0)
		{
			w = n % 16;
			result[x] = hexChars[w];
			n /= 16;
			x++;
			y++;
		}
		while (y >= 0)
		{
			_putchar(result[y]);
			count++;
			y--;
		}
	}
	free(result);
	return (count);
}
