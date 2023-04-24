#include "main.h"

/**
 * print_unprintable - handle the non printable characters
 * 0 < (ASCII value) < 32 or >= 127) are printed this way :\x,
 * folowwed by the ASCII ode value in hexa(upper case - always 2 char)
 * @va: va_list arguments
 * Return: number of characters printed
 */
int print_unprintable(va_list va)
{
	int i, len = 0;
	char *s = va_arg(va, char *);
	unsigned int x;

	if (!s)
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			len += write(1, "\\x", 2);
			x = (unsigned int)s[i];
			if (x < 16)
			{
				len++;
				_putchar('0');
			}
			len += number_caster(x, 16, 1);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
