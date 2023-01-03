/**
 * _memset - memset
 * @s: s
 * @b: b
 * @n: n
 * Return: r
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

i = 0;
while (i < n && s[i] != 0)
{
s[i] = b;
i++;
}
return (s);
}