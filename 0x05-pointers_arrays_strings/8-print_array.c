#include <stdio.h>

int len(char *str);

/**
 * print_array - prints the first n elements of an array
 * @a: array to print
 * @n: number of elements to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; ++i)
	{
		putchar('0' + a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
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
