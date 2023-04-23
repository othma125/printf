#include "main.h"

/**
 * numbers_caster - cast an integer to binary, octal, hexadecimal
 * @n: input number
 * @base: integer
 * Return: string length
 */
int number_caster(const int n, const int base, const int capitalized)
{
	char c;
	if (n < 0)
	{
		if (n == INT_MIN)
			return (print_number(n / base) + print_number(-(n % base)));
		_putchar('-');
		return (1 + print_number(-n));
	}
	if (n >= base)
		return (print_number(n / base) + print_number(n % base));
	c = capitalized ? 'A' : 'a';
	_putchar(n < 9 ? '0' + n : c + n - 10);
	return (1);
}
