#include "main.h"

/**
 * specifier_selector - check code
 * @format: character specifier
 * @va: variadic list
 * Return: string length
 */
int specifier_selector(const char *format, va_list va)
{
	printer printers[] = {
	  {"c", print_char},
	  {"i", print_integer},
	  {"d", print_integer},
	  {"R", print_rot13},
	  {"r", print_reversed_string},
	  {"b", print_to_binary},
	  {"o", print_octal},
	  {"x", print_hexadecimal},
	  {"X", print_hexadecimal_capitalized},
	  {"u", print_unsigned_integer},
	  {"s", print_string},
	  {"S", print_unprintable},
	  {NULL, NULL}
	};
	int j;

	j = 0;
	while (printers[j].print != NULL && *format != *(printers[j].type))
		j++;
	if (printers[j].print != NULL)
		return (printers[j].print(va));
	_putchar('%');
	if (*format != '%')
	{
		_putchar(*format);
		return (2);
	}
	return (1);
}
/**
 * _printf - check code
 * @text: text to display
 * Return: string length
 */
int _printf(const char * text, ...)
{
	int i = 0, len = 0, condition = 0;
	va_list va;

	va_start(va, text);
	while (text != NULL && text[i] != '\0')
	{
		if (text[i] == '%' && condition == 0)
			condition = 1;
		else if (condition == 1)
		{
			len += specifier_selector(text + i, va);
			condition = 0;
		}
		else
		{
			_putchar(text[i]);
			len++;
		}
		i++;
	}
	va_end(va);
	return (text == NULL ? -1 : len);
}
