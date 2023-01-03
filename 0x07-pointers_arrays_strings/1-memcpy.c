#include <stdio.h>

/**
 * _memcpy - memcpy
 * @dest: s
 * @src: b
 * @n: n
 * Return: r
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n && src[i] != 0)
{
dest[i] = src[i];
i++;
}
return (dest);
}
