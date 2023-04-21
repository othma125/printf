#include "main.h"

/**
 * _puts_recursion - check code
 * @s: string to display
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
/**
 * print_string - check code
 * @ap: variadic list
 */
void print_string(va_list ap)
{
	_puts_recursion(va_arg(ap, char *));
}
