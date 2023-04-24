#include "main.h"

/**
 * print_char - check code
 * @va: variadic list
 * Return: returns 1
 */
int print_char(va_list va)
{
	char c = va_arg(va, int), buffer[2];
	int i = 0;

	buffer[i++] = c;
	buffer[i] = '\0';
	return (write(1, buffer, 1));
}
