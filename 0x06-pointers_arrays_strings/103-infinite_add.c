#include <stdio.h>

int len(char *str);
void rev_string(char *str);
char *_strcpy(char *dest, char *src);

/**
 * infinite_add - adds two numbers with infinite digit
 * @n1: first number in string format
 * @n2: second number in string format
 * @r: the buffer to store the result or the sum
 * @size_r: the size of the buffer
 * Return: pointer to the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, k = 0, j = 0;
	int a, b, rem, sum;
	a = b = rem = sum = 0;

	i = len(n1) - 1;
	j = len(n2) - 1;
	while (!(i < 0 && j < 0))
	{
		if (k >= size_r-2)
			return (0);
		if (i > len(n1) - 1 || i < 0)
			a = 0;
		else
			a = n1[i] - 48;

		if (j > len(n2) - 1 || j < 0)
			b = 0;
		else
			b = n2[j] - 48;

		sum = (a + b + rem) % 10;
		rem = (a + b + rem) / 10;
		r[k] = sum + 48;
		i--;
		j--;
		k++;
	}
	if (rem > 0)
		r[k] = rem + 48;
	r[k + 1] = 0;
	rev_string(r);
	return (r);
}

/**
 * len - finds the length of string
 * @str: a character array to store the input
 * Return: the length of str
 */

int len(char *str)
{
	int c = 0;
	int i = 0;

	for (; str[i] != '\0'; ++i)
	{
		c++;
	}
	return (c);
}

/**
 * rev_string - access the string through the pointer and reverse it
 * @str: the address of the string to reverse
 * Return: nothing
 */
void rev_string(char *str)
{
	int i = 0;

	for (; i < len(str) / 2; i++)
	{
		char temp = str[i];

		str[i] = str[(len(str) - 1) - i];
		str[(len(str) - 1) - i] = temp;
	}
}

/**
 * *_strcpy - copies string
 * @dest: a string to store the copied string
 * @src: string to copy
 * Return: the copied string(dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; i < len(src); ++i)
	{
		dest[i] = src[i];
	}
	dest[len(src)] = '\0';
	return (dest);
}
