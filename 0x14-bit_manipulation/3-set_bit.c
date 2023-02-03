#include "main.h"

/**
 * set_bit - set bit
 * @n: first input
 * @index: second input
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (index >= 32 ? *n : (1 << index));
	return (index >= 32 ? -1 : 1);
}
