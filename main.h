#ifndef _MAIN_H_
#define _MAIN_H_

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
int print_int(va_list *p_int);
char *_itoa(int arg_int, char *strout, int base);
char *_revstr(char *str);
char *_itoa(unsigned int arg_int, char *strout, int base);

#endif
