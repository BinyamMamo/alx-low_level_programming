#include <Stdio.h>

typedef unsigned int uint;
typedef unsigned long int ulint;

unsigned int flip_bits(unsigned long int n, unsigned long int m);
uint get_bit(ulint n, uint i);

int main(void)
{
	printf("%u\n", sizeof(unsigned long int));
	printf("Hello world\n");
}

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

uint get_bit(ulint n, uint i)
{
	return (n && (n & (1 << i)));
}