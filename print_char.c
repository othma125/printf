#include "main.h"

/**
 * print_char - check code
 * @va: variadic list
 * Return: returns 1
 */
int print_char(va_list va)
{
	char c = va_arg(va, int);

	_putchar(c);
	return (1);
}
