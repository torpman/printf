#include "main.h"

/**
* *check_for_specifiers - This is a pointer to a function
* that get the specifiers
*
* @format: The format specifier
* Return: Return the specifier index
*/

int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}
