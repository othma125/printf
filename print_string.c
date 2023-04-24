#include "main.h"

/**
 * print_string - check code
 * @va: variadic list
 * Return: string length
 */
int print_string(va_list va)
{
	char *str = va_arg(va, char*);
	int len = 0;

	str = str == NULL ? "(null)" : str;
	while (*(str + len) != '\0')
		len++;
	return (write(1, str, len));
}
