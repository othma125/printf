#include "main.h"

/**
 * print_char - check code
 * @va: variadic list
 * Return: returns 1
 */
int print_char(va_list va)
{
	_putchar(va_arg(va, int));
	return (1);
}
