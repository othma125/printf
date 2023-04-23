#include "main.h"

/**
 * print_interger - print numbers
 * @va: variadic list
 * Return: string length
 */
int print_integer(va_list va)
{
	return (numbers_caster(va_arg(va, int), 10, 0));
}
