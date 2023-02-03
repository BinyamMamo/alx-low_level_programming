#include "main.h"
#include <stdio.h>

/**
 * set_bit - set bit
 * @n: first input
 * @index: second input
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = (index >= sizeof(ulint) * 8 ? *n : *n | (1 << index));
	return (index >= sizeof(ulint) * 8 ? -1 : 1);
}
