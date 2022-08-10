#include "main.h"

/**
* out_num - prints char array of number
* @ptr: array pointer
* @value: integer value
* @len: length of char array
* Return: the length
*/
int out_num(char *ptr, int value, int *len)
{
int j;

for (j = 0; j < value; j++)
{
_putchar(ptr[j] + '0');
*len += 1;
}
return (*len);
}
