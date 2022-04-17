#ifndef MAIN_H
#define MAIN_H

#include <stdagr.h>
#include <stdlib.h>

/**
 * struct specifiers: holds specifiers and their functions
 * @f: Input function pointer
 * @specifer: Input specifier conversion
 */
typedef struct specifiers
{
 char *specifier;
 int (*f)(va_list args);
} spc_dt

int _write(char c);
int _printf(const char *format, ...)

#endif
