#include "main.h"

/**
 * _reversed_puts_recursion - check code
 * @s: string to display
 * Return: string length
 */
int _reversed_puts_recursion(char *s)
{
	int n;

	if (*s == '\0')
		return (0);
	n = _reversed_puts_recursion(s + 1);
	_putchar(*s);
	return (1 + n);
}
/**
 * print_reversed_string - check code
 * @va: variadic list
 * Return: string length
 */
int print_reversed_string(va_list va)
{
	return (_reversed_puts_recursion(va_arg(va, char *)));
}
