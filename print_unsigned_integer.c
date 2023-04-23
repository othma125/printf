#include "main.h"

/**
 * print_unsigned - print numbers in decimal
 * @n: input number
 * Return: string length
 */
int print_unsigned(unsigned int n)
{
	if (n >= 10)
		return (print_number(n / 10) + print_number(n % 10));
	_putchar('0' + n);
	return (1);
}
/**
 * print_unsigned_interger - print numbers
 * @va: variadic list
 * Return: string length
 */
int print_unsigned_integer(va_list va)
{
	return (print_unsigned(va_arg(va, unsigned int)));
}
