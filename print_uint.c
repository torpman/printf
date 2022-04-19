#include "main.h"
/**
* print_uint - this function print unsigned integer
*
* @p_int: the integer to be printed
*
* Return: return the lenght of the integer printed
*/

int print_uint(va_list *p_int)
{
	int len;
	char tmp[20];

	unsigned int num = va_arg(*p_int, unsigned int);
	char *str = _itoa(num, tmp, 10);

	len = _strlen(str);
	write(1, str, len);

	return (len);
}
