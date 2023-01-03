#include <stdio.h>

/**
 * _strchr - strchr
 * @s: string
 * @c: char
 *
 * Return: occurence
 */

char *_strchr(char *s, char c)
{
int i, state;

i = 0;
state = 0;

for (; !s[i]; i++)
{
if (s[i] == c)
{
state = 1;
break;
}
}
if (state)
return (&s[i]);
return (NULL);
}
