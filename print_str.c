#include "main.h"
/**
 * print_str - prints the string
 * @s: Input string
 *
 *
 * Return: print length of character
 */
int print_str(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_print(str[count]);
	}
	return (count);
}
