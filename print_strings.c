#include "main.h"
/**
 * print_str - prints the string
 * @str: Input string
 *
 *
 * Return: print length of character
 */
int print_str(va_list *str)
{
	char *newstr;
	int i, len;
	char *s;

	s = va_arg(*str, char *);

	len = _strlen(s); /* Getting the lenght of the string*/
	newstr = malloc(sizeof(char) * (len + 1)); /* Dyna,ically allocating memory*/
	for (i = 0; s[i] != '\0'; i++)
		newstr[i] = s[i];
	newstr[i] = '\0';

	write(1, s, len);
	free(newstr);
	return (len);
}
