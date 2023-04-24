#include "main.h"

/**
 * print_string - check code
 * @va: variadic list
 * Return: string length
 */
int print_string(va_list va)
{
	char *str = va_arg(va, char*);

	return (_puts_recursion(str == NULL ? "(null)" : str));
}
