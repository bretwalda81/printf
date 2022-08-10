#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
* @len: length of string
* Return: void
*/
void rev_string(char *s, int len)
{
char c;
int i;
len--;

for (i = 0; i <= len; i++, len--)
{
c = s[i];
s[i] = s[len];
s[len] = c;
}
}

/**
* print_string - prints string
* @arg: argument lisst from _printf
* @len: length of string
* @spec: convert specifier
* Return: length of characters in string
*/
int print_string(va_list arg, int *len, char spec)
{
int i;
int str_length = 0;
char *string = NULL;
char *ptr = NULL;

string = va_arg(arg, char *);

if (string == NULL)
{
write(1, "(null)", 6);
return (*len + 6);
}
for (i = 0; string[i]; i++)
str_length++;

ptr = malloc(str_length *sizeof(char));
if (ptr == NULL)
return (-1);
for (i = 0; i < str_length; i++)
ptr[i] = string[i];

for (i = 0; ptr[i]; i++)
_putchar(ptr[i]);

if (spec == 'r')
rev_string(ptr, str_length);

*len += 1;
free(ptr);
return (*len);
}
