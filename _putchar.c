#include <unistd.h>

/**
* _putchar - prints character
* @c: charcecter to be printed
*
* Return: returns 1 if successful
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
