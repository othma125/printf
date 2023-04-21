#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
void _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int _printf(const char *, ...);
/**
 *struct _printer - Struct op
 *@type: type specifier
 *@print: print function
 */
typedef struct _printer
{
	char *type;
	int (*print)(va_list);
} printer;

#endif
