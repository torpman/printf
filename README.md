0x11. C - printf

The printf project is a collaboration between Gbenga Ogunmefun and Nike Oni. _printf() is a function that performs formatted output conversion.It is a function used to send formatted output to the screen. The format is defined by the conversion specifier passed. In this project, we'll create a program that closely simulates the printf function in c.

*Conversion specifiers

* A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:

* d, i: The int argument should be signed decimal notation, and the resulting number is written.

* c: The int argument is converted to a char, and the resulting character is written.
* s: The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to (but not including) a terminating null byte ('\0').
* %: A '%' is written. No argument is converted. The complete conversion specification is '%%'.

File Functions:

main.h                                   *Header File Were All Prototypes Are Saved

_printf.c
Contains the _printf function it Performs Formatted Output Conversion And Print Data.

get_print_func.c
A function that returns a pointer to a function based on the format specifier.

print_chars.c
It contains two functions handling format specifier %s and %c.

print_strings
It contains a function that handles the format specifier %S.

print_rot13.c
It contains a function that handles the format specifier %R

print_numbers.c
It contains four functions all handling format specifiers %d and %i.

print_binary.c
It contains two functions handling the custom format specifier %b

print_octal.c
It contains a function that handles the format specifier %o.

print_hex.c
It contains two functions handling the format specifiers %x and %X.

Return Value
Upon successful return, the _printf() function return the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.

Authors
Gbenga Ogunmefun and Nike Oni
