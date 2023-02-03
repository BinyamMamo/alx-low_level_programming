#include "main.h"

/**
 * flip_bits - calculates number of bits needed to
 *							flip from the first argument to get to
 *							the second parameter.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, b = 0;

	while (xor)
	{
		b += xor;
		xor = xor >> 1;
	}

	return (b);
}
