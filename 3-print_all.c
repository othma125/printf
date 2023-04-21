#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - check code
 * @ap: variadic list
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - check code
 * @ap: variadic list
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - check code
 * @ap: variadic list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_string - check code
 * @ap: variadic list
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	printf("%s", str == NULL ? "(nil)" : str);
}
/**
 * print_all - check code
 * @format: string
 * Return: none
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list ap;
	char *separator = ", ", *s = "";
	printer printers[] = {
	  {"c", print_char},
	  {"i", print_int},
	  {"f", print_float},
	  {"s", print_string},
	  {NULL, NULL}
	};

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (printers[j].print != NULL && format[i] != *(printers[j].type))
			j++;
		if (printers[j].print != NULL)
		{
			printf("%s", s);
			printers[j].print(ap);
			s = separator;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
