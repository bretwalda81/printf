#include "main.h"

/**
* count_digits - counts digits in integer passed
* @i: the integer
* @j: integer base or subscript
* Return: number of digits
*/
int count_digits(unsigned int i, unsigned int *j)
{
if (i < *j)
return (1);

return (1 + count_digits(i / *j, j));
}

/**
* int_passer - makes sure integer ends up as string
* @i: integer passed to be converted
* @j: integer base or subscript
* Return: pointer to intger string
*/
char *int_passer(unsigned int i, unsigned int *j)
{
int value;
char *ptr = NULL;
value = count_digits(i, j);

ptr = malloc(value * sizeof(char));

if (ptr == NULL)
return (NULL);

ptr[value] = '\0';

for (value -= 1; value >= 0; value--)
{
ptr[value] = i % *j;
i /= *j;
}
return (ptr);
}
