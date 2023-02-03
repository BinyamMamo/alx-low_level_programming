#include "main.h"
#include <string.h>

typedef unsigned int uint;
uint pw(uint n, uint p);
unsigned int binary_to_uint(const char *b);

/**
 * int - int
 * @char: first input
 *
 * Return: unsigned
 */
unsigned int binary_to_uint(const char *b)
{
	uint num = 0, dig, j = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = (uint)(strlen(b) - 1); i >= 0; i--)
	{
		dig = pw(2, j);
		if (b[i] >= 48 && b[i] <= 57)
			num += ((uint)(b[i] - 48)) * dig;
		else
			return (0);
		j++;
	}
	return (num);
}

/**
 * pw - pw
 * @n: first input
 * @p: second input
 *
 * Return: uint
 */
uint pw(uint n, uint p)
{
	uint r = 1, i;

	for (i = 1; i <= p; i++)
		r *= n;

	return (r);
}
