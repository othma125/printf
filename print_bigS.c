#include "main.h"

/**
 * print_bigS - handle the non printable characters
 * 0 < (ASCII value) < 32 or >= 127) are printed this way :\x,
 * folowwed by the ASCII ode value in hexa(upper case - always 2 char)
 * @va: va_list arguments
 * Return: number of characters printed
 */
int print_bigS(va_list va)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(va, char *);

	if (!s)
		return (0);

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts_recursion("\\x");
			count += 2;
			res = number_caster(s[i], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts_recursion(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
