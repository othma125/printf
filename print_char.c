#include "main.h"

/**
 * print_char - check code
 * @va: variadic list
 * Return: returns 1
 */
int print_char(va_list va)
{
	char buffer[2];

	buffer[0] = va_arg(va, int);
	buffer[1] = '\0';
	return (write(1, buffer, 1));
}
