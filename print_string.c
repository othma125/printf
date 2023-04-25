#include "main.h"
#include <stdio.h>
/**
 * print_string - check code
 * @va: variadic list
 * Return: string length
 */
int print_string(va_list va)
{
	char *str;
	int len = 0;

	str = va_arg(va, char*);
	str = str == NULL ? "(null)" : str;
	while (*(str + len) != '\0')
	{
		if (str[len] > 0 && (str[len] < 32 || str[len] >= 127 || str[len] == '\n'))
			len++;
		return (-1);
	}
	return (write(1, str, len));
}
