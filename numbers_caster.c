#include "main.h"

/**
 * numbers_caster - cast an integer to binary, octal, hexadecimal
 * @n: input number
 * @base: integer
 * Return: string length
 */
int number_caster(const unsigned int n, const unsigned int base, const int capitalized)
{
	char c;

	if (n >= base)
		return (number_caster(n / base, base, capitalized) + number_caster(n % base, base, capitalized));
	c = capitalized ? 'A' : 'a';
	_putchar(n <= 9 ? '0' + n : c + n - 10);
	return (1);
}
