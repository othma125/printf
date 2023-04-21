#include "main.h"

/**
 * _puts_recursion - check code
 * @s: string to display
 * Return: string length
 */
int _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	return (1 + _puts_recursion(s + 1));
}
/**
 * print_string - check code
 * @av: variadic list
 * Return: string length
 */
int print_string(va_list av)
{
	return (_puts_recursion(va_arg(ap, char *)));
}
