#include "main.h"

/**
 * printer_selector - check code
 * @c: character
 * Return: string length
 */
int printer_selector(const char c, va_list va)
{
	printer printers[] = {
	  {'c', print_char},
	  {'i', print_int},
	  {'f', print_float},
	  {'s', print_string},
	  {NULL, NULL}
	};

	j = 0;
	while (printers[j].print != NULL && c != printers[j].type)
		j++;
	if (printers[j].print != NULL)
		return (printers[j].print(va));
        _putchar('%');
        return (1);
}
/**
 * _printf - check code
 * @format: string
 * Return: string length
 */
int _printf(const char * const format, ...)
{
	int i = 0, j, len = 0, condition = 0;
	va_list va;

	va_start(va, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
			condition = 1;
		else if (condition)
		{
			len += printer_selector(format[i], va);
			condition = 0;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(va);
	return (len);
}
