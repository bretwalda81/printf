#include "main.h"

int char_convert(va_list arg, char symbol, int len);

/**
* num_convert - converts number specifiers when seen
* @arg: argument list from _printf function
* @symbol: the specifier letter
* @len: length to be printed
* Return: number of chars
*/
int num_convert(va_list arg, char symbol, int len)
{
switch (symbol)
{
case 'd':
case 'i':
print_num(arg, &len, symbol);
break;
case 'b':
print_num(arg, &len, symbol);
break;
case 'u':
print_num(arg, &len, symbol);
break;
case 'o':
print_num(arg, &len, symbol);
break;
case 'x':
print_num(arg, &len, symbol);
break;
case 'X':
print_num(arg, &len, symbol);
break;
default:
_putchar('%');
_putchar(symbol);
len += 2;
}
return (len);
}

/**
* char_convert - converts character specifiers when seen
* @arg: argument list from _printf function
* @symbol: the specifier letter
* @len: length to be printed
* Return: number of chars
*/
int char_convert(va_list arg, char symbol, int len)
{
switch (symbol)
{
case 'c':
print_char(arg, &len);
break;
case 's':
print_string(arg, &len, symbol);
break;
case 'r':
print_string(arg, &len, symbol);
break;
case '%':
_putchar('%');
len++;
break;
default:
_putchar('%');
_putchar(symbol);
len += 2;
}
return (len);
}

