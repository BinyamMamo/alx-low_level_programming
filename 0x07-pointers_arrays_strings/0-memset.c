
/**
 * _memset - memset function
 * @s: string
 * @b: byte char
 * @n: number
 *
 * Return: returned val
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
