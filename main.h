#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _print(char c);
int print_int(va_list i);
int print_char(va_list c);
int print_str(va_list s);
int print_bin(va_list b);
#endif
