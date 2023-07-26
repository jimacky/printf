#include "main.h"


char *converter(unsigned long int num);
/**
 * _addressPrint - prints address of input in hexa format
 * @addr: va_list arguments from _print
 *
 * Return: number of char printed
 */
int _addressPrint(va_list addr)
{
	char *str;
	unsigned long int p;
    int count;

    p = va_arg(addr, unsigned long int);
	count = 0;
	if (!p)
		str = "(nil)";
    else
    {
        str = converter(p);
    }
    while (str[count] != '\0')
    {
        _putchar(str[count]);
        count++;
    }
	
	return (count);
}

/**
 * converter - converts number into base 16
 * @num: input number
 *
 * Return: returns converted num
 */
char *converter(unsigned long int num)
{
	char *hex, *ptr;
	char buffer[50];
	int x;

	hex = "0123456789abcdef";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		x = num % 16;
		*--ptr = hex[x];
		num /= 16;
	} while (num != 0);
	return (ptr);
}
