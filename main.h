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
int print_uint(va_list u);
int print_oct(va_list o);
int print_ex(va_list x);
int print_HEX(va_list X);
int print_S(va_list S);
int print_pnt(va_list p);
int print_buf(char *buf, unsigned int nbuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int pr_l_int(va_list arguments, char *buf, unsigned int ibuf);
int print_rot13(va_list args, int len);


#endif
