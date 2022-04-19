#include "main.h"

/**
 * print_char - write to stdout
 * @c: Input character to be written
 *
 * Return: number of chars written
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_print(ch);
	return (1);
}
