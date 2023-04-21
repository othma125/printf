#ifndef MAIN_H
#define MAIN_H

void _putchar(char);
int _printf(const char *, ...);
#include <stdarg.h>
typedef struct {
	char *type;
	void (*print)(va_list arg);
} printer;

#endif
