#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifiers: holds specifiers and their functions
 * @f: Input function pointer
 * @specifer: Input specifier conversion
 */
typedef struct specifiers
{
 char *specifier;
 int (*f)(va_list args);
} spc_dt;

int _printf(const char *format, ...);

#endif
