#include "main.h"

/**
* _printf - This function print output according to a certain format
*
* @format: The format in which the output will be printed
*
* Return: Return 0 on success
*/

int _printf(const char *format, ...)
{
	char *go_2ru;
	unsigned int i;
	char *str;
	va_list arg;	/*Initialize _printf passed argument*/
	
	va_start(arg, format);
	
	for (go_2ru = format; *go_2ru != '\0'; go_2ru++)
	{
		while (*go_2ru != '%')
		{
			putchar(*go_2ru);
			go_2ru++;
		}

		go_2ru++;
		
		/*Fetching and executing passed arguments*/
		switch (*go_2ru)
		{
			case 'c' : i = va_arg(arg, int);
					putchar(i);
					break;

			case 's' : s = va_arg(arg, int);
					puts(s);
					break;
			case '%' : s = va_arg(arg, int);
					puts(s);
					break;
		}
	}
}
