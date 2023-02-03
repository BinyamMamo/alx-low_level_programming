#include "main.h"

typedef unsigned long int ulint;

/**
 * flip_bits - calculates number of bits needed to
 * 							flip from the first argument to get to
 * 							the second parameter.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	uint i, b = 0;

	for (i = 0; i < 32; i++)
		if (get_bit(n, i) ^ get_bit(m, i))
			b++;

	return (b);
}

/**
 * get_bit - get bit at any specified index
 * @n: first input
 * @index: second input
 *
 * Return: the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index >= 32 ? -1 : n && (n & (1 << index)));
}
