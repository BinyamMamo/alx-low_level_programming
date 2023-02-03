#include "main.h"

/**
 * clear_bit - clear bit
 * @n: first input
 * @index: second input
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (index >= 32 ? *n : ~(~(*n) | (1 << index)));
	return (index >= 32 ? -1 : 1);
}
