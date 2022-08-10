#include "main.h"

/**
* _printf -  produces output according to a format
* @format: character string with conversion specifiers
* Return: string length
*/
int _printf(const char *format, ...)
{
int i;
int len = 0;
va_list arg_list;

va_start(arg_list, format);
if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == 'c' || format[i + 1] == 's' || format[i + 1] == '%'
|| format[i + 1] == 'r')
len = char_convert(arg_list, format[i + 1], len);
else if (format[i + 1] != '\0')
len = num_convert(arg_list, format[i + 1], len);
i++;
}
else
{
_putchar(format[i]);
len++;
}
}
va_end(arg_list);
return (len);
}
