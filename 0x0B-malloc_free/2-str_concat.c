#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string arrays
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
int i, c, j;
char *s;

c = 0;
while (s1[c] != 0)
c++;
while (s2[c] != 0)
c++;

if (c == 0)
return (s);

s = malloc(c + 1);

if (s == NULL)
return (NULL);
i = 0;
while (s1[i] != 0)
{
s[i] = s1[i];
i++;
}
j = i - 1;
i = 0;
while (s2[i] != 0)
{
s[j + i] = s2[i];
i++;
}
s[j + i] = 0;

return (s);
}

