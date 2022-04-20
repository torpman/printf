#include "main.h"
/**
 * print_char - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_print(ch);
	return (1);
}

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
static int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_print('0' + diff + d[count]);
		else
			_print('0' + d[count]);
	}
	return (count);
}


/**
 * print_str - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
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
/**
 * print_S - prints a string and nonprintable character ascii values
 * @S: string to print
 *
 * Return: number of chars printed
 */
int print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_print('\\');
			_print('x');
			count += 2;
			count += hex_print(str[i]);
		}
		else
		{
			_print(str[i]);
			count++;
		}
	}
	return (count);
}
