#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
void _putchar(char);
void print_char(va_list)
void print_string(va_list);
void print_integer(va_list);
int _printf(const char *, ...);
typedef struct {
	char *type;
	void (*print)(va_list arg);
} printer;

#endif
