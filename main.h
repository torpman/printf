#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct specifiers
{
	char str;
	int (*func)(va_list *);
} spec_type;

int _printf(const char *format, ...);
int (*get_func(char s))(va_list *);
int print_char(va_list *c);
int print_str(va_list *str);
int _strlen(char *str);

#endif
