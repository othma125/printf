#include <stdarg.h>
#include "main.h"
int _printf(const char * const format, ...)
{
	int i = 0, j, len = 0, condition = 0;
	va_list va;
	printer printers[] = {
	  {"c", print_char},
	  {"i", print_int},
	  {"f", print_float},
	  {"s", print_string},
	  {NULL, NULL}
	};

	va_start(va, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			condition = 1;
			i++;
			continue;
		}
		if (condition)
		{
			j = 0;
			while (printers[j].print != NULL && format[i] != *(printers[j].type))
				j++;
			if (printers[j].print != NULL)
				len += printers[j].print(va);
			else
			{
			  	_putchar('%');
				len++;
			}
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
