#include "main.h"

/**
 * print_number - print numbers
 * @n: input number
 * Return: None
 */
void print_number(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			print_number(n / 10);
			print_number(-(n % 10));
		}
		else
		{
			_putchar('-');
			print_number(-n);
		}
	}
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
		_putchar('0' + n);
}
