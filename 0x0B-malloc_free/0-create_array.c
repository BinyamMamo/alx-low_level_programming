#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of size size
 * @size: the size of the array
 * @c: the value to initialise the array with
 *
 * Return: a pointer to the string of characters
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;

str = malloc(size);
if (str == NULL || size == 0)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;

return (str);
}

