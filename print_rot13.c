#include "main.h"

/**
 * print_rot13 - check code
 * @va: variadic list
 * Return: string length
 */
int print_rot13(va_list va)
{
	return (print_string(rot13(va_arg(va, char *))));
}
