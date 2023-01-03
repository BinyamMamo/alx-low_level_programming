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
while (s[i] != 0)
{
if (s[i] == c)
{
state = 1;
break;
}
i++;
}
if (state)
return (&s[i]);
return (0);
}
