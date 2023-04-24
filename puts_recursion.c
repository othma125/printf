#include "main.h"

/**
 * _puts_recursion - check code
 * @s: string to display
 * Return: string length
 */
int _puts_recursion(char *s)
{
	if (*s == '\0' || s == NULL)
		return (0);
	_putchar(*s);
	return (1 + _puts_recursion(s + 1));
}
