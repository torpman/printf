#include "main.h"

/**
 * print_rev - prints astring in reverse
 * @r: string to print
 *
 * Return: number of chars printed
 */
int print_rev(va_list r)
{
	char *str;
	int i, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_print(str[i]);
		count++;
	}
	return (count);
}
