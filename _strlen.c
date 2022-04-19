#include "main.h"

/**
 *  _strlen - The function find the lenght of any string passed
 *  @str: The string to get its lenght
 *
 * Return: Return the string lenght
 */

int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
