#include "main.h"

/**
 * numbers_caster - cast an integer to binary, octal, hexadecimal
 * @n: input number
 * @base: integer
 * Return: string length
 */
int number_caster(int n, int base)
{
	if (n < 0)
	{
		if (n == INT_MIN)
			return (print_number(n / base) + print_number(-(n % base)));
		_putchar('-');
		return (1 + print_number(-n));
	}
	if (n >= base)
		return (print_number(n / base) + print_number(n % base));
	_putchar(n < 9 ? '0' + n : 'a' + n - 10);
	return (1);
}
