#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
* struct checker - A struct type that defines a a struct func_id
* @id: The function identifier, this identifies the type of
* function to call
* id_func: the identified function pointer
*/
typedef struct checker
{
	char *id;
	int (*id_func)(va_list);
} func_id;

int _putchar(char c);
int _printf(const char *format, ...);
int _charPrint(va_list chars);
int _stringPrint(va_list str);
int _intPrint(va_list ints);
int _percentPrint(__attribute__((unused)) va_list arg);









#endif
