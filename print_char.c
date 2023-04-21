#include "main.h"

/**
 * print_char - check code
 * @va: variadic list
 * Return: returns 1
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
