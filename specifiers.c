#include "main.h"

/**
* *get_func - This is a pointer to a function that get the specifiers
*
* @s: The format specifier
* Return: Return the specifier index
*/

int (*get_func(char s))(va_list *)
{
	int i = 0;

	spec_type fmt[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_uint}
	};

	for (i = 0; i < 4; i++)
	{
		if (s == fmt[i].str)
			return (fmt[i].func);
	}
	return (NULL);
}
