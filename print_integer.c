#include "main.h"

/**
 * print_number - print numbers
 * @n: input number
 * Return: string length
 */
int print_number(int n)
{
	if (n < 0)
	{
		if (n == INT_MIN)
			return (print_number(n / 10) + print_number(-(n % 10)));
		else
		{
			_putchar('-');
			return (1 + print_number(-n));
		}
	}
	else if (n >= 10)
		return (print_number(n / 10) + print_number(n % 10));
	else
	{
		_putchar('0' + n);
		return (1);
	}
}
/**
 * print_interger - print numbers
 * @va: variadic list
 * Return: string length
 */
int print_integer(va_list va)
{
	return (print_number(va_arg(va, int)));
}
