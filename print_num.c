#include "main.h"

/**
* print_num - prints integer
* @arg: argument
* @len: length of integer string
* @spec: integer specifier
* Return: length of string
*/
int print_num(va_list arg, int *len, char spec)
{
int i, value;
char *ptr = NULL;
unsigned int base = 10;

if (spec == 'd' || spec == 'i')
{
i = va_arg(arg, int);
if (i < 0)
{
i *= -1;
_putchar('-');
*len += 1;
}
ptr = int_passer(i, &base);
}
value = count_digits(i, &base);
out_num(ptr, value, len);
return (*len);
}
