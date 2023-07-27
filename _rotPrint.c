#include "main.h"

/**
 * _rotPrint - prints the rot13'ed string
 * @str: variadic arguments
 *
 * Return: returns count
 */
int _rotPrint(va_list str)
{
	char *buffer, *letters, *rot;
	int i, j, count;

	buffer = va_arg(str, char *);
	letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (buffer[i])
	{
		j = 0;
		while ((letters[j] != '\0') && (buffer[i] != letters[j]))
		{
			j++;
		}
		if (buffer[i] == letters[j])
		{
			_putchar(rot[j]);
			count++;
		}
		else if (letters[j] == '\0')
		{
			_putchar(buffer[i]);
			count++;
		}
		i++;
	}
	return (count);
}
