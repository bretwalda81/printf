#include "main.h"

/**
* print_char - prints a character
* @args: arguments
* @len: character length
* Return: the length
*/
int print_char(va_list args, int *len)
{
char c;

c = va_arg(args, int);
_putchar(c);
*len += 1;
return (*len);
}
