#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string array
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
int i, c;
char *s;

if (str == NULL)
return (NULL);

c = 0;
while (str[c] != 0)
c++;

if (c == 0)
return (NULL);

s = malloc(c + 1);

i = 0;
while (str[i] != 0)
{
s[i] = str[i];
i++;
}

s[i] = 0;

return (s);
}

