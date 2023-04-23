#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
void _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int print_to_binary(va_list);
int print_octal(va_list);
int print_hexadecimal(va_list);
int print_hexadecimal_capitalized(va_list);
int print_unsigned_integer(va_list);
int numbers_caster(unsigned int, unsigned int, int);
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
