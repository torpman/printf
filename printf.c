#include "main.h"

/**
* _printf - This function performs exactly like printf function in C
*
* @format: The charaters to print starts from here
*
* Return: Return the lenght of the string passed
*/

int _printf(const char *format, ...)
{
	va_list ap;
	char f;
	int i;
	int len;
	int (*prints)(va_list *);

	va_start(ap, format);
	len = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++; /* fastforward*/
			f = format[i];

			if (f == '%')
			{
				len += write(1, "%", 1);
				continue;
			}
			prints = get_func(f);
	
		/*	if (prints == NULL)*/
			len += prints(&ap);
		}
		else
			len += write(1, &format[i], 1);
	}

	va_end(ap);
	return (len);
}
