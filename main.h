#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
void _putchar(char);
int print_char(va_list)
int print_string(va_list);
int print_integer(va_list);
int _printf(const char *, ...);
typedef struct _printer_
{
	char type;
	void (*print)(va_list arg);
} printer;

#endif
