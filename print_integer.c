#include "main.h"

/**
 * to_string - cast an integer to decimal
 * @n: input number
 * Return: string length
 */
int to_string(const int n)
{
	char sign = '-', digit;

	if (n < 0)
	{
		if (n == INT_MIN)
			return (to_string(n / 10) + to_string(-(n % 10)));
		return (write(1, &sign, 1) + to_string(-n));
	}
	if (n >= 10)
		return (to_string(n / 10) + to_string(n % 10));
	digit = '0' + n;
	return (write(1, &digit, 1));
}
/**
 * print_integer - print numbers
 * @va: variadic list
 * Return: string length
 */
int print_integer(va_list va)
{
	return (to_string(va_arg(va, int)));
}
