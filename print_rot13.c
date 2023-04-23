#include "main.h"

/**
 * rot13 - check the code
 * @s: input string
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char *inputs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *outputs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; inputs[j] != '\0'; j++)
		{
			if (s[i] == inputs[j])
			{
				s[i] = outputs[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
#include "main.h"

/**
 * rot13_recursion - check code
 * @s: string to display
 * Return: string length
 */
int rot13_recursion(char *s)
{
	int j;
	char *inputs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *outputs = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (*s == '\0')
		return (0);
	for (j = 0; inputs[j] != '\0'; j++)
	{
		if (*s == inputs[j])
		{
			_putchar(outputs[j]);
			return (1 + _puts_recursion(s + 1));
		}
	}
	_putchar(*s);
	return (1 + _puts_recursion(s + 1));
}
/**
 * print_rot13 - check code
 * @va: variadic list
 * Return: string length
 */
int print_rot13(va_list va)
{
	return (rot13_recursion(va_arg(va, char *)));
}
