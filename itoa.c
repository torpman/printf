#include "main.h"

/**
 * _itoa - Converting unsigned interger to string
 * @strout: Output string
 * @base: Input base
 * @arg_int: integer to convert
 *
 * Return: length of string
 */

char *_itoa(unsigned int arg_int, char *strout, int base)
{
	char *str = strout;
	int digit, sign;

	sign = 0;
	if (!arg_int)
	{
	sign = 1;
	arg_int *= -1;
	}

	while (arg_int)
	{
		digit = arg_int % base;
		*str = (digit > 9) ? ('A' + digit - 10) : ('0' + digit);
		arg_int /= base;
		str++;
	}

	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	_revstr(strout);
	return (strout);
}
