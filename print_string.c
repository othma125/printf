#include "main.h"

/**
 * print_string - check code
 * @va: variadic list
 * Return: string length
 */
int print_string(va_list va)
{
	return (_puts_recursion(va_arg(va, char *)));
}
