#include "main.h"

/**
 * number_caster - cast an integer to binary, octal, hexadecimal
 * @n: input number
 * @base: integer
 * @cap: condition
 * Return: string length
 */
int number_caster(unsigned int n, unsigned int base, int cap)
{
	char c;

	if (n >= base)
		return (number_caster(n / base, base, cap)
			+ number_caster(n % base, base, cap));
	c = cap ? 'A' : 'a';
	_putchar(n <= 9 ? '0' + n : c + n - 10);
	return (1);
}
