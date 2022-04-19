#include "main.h"

/**
 * print_char - write to stdout
 * @c: Input character to be written
 *
 * Return: number of chars written
 */
int print_char(va_list *c)
{
	char ch = va_arg(*c, int);
	int j = sizeof(ch)
		write(1, &ch, j);
	return (j);
}
