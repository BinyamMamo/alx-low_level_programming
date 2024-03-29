#include "main.h"
#include <stdio.h>

/**
 * clear_bit - clear bit
 * @n: first input
 * @index: second input
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (index >= (sizeof(ulint) * 8) ? *n : ~(~(*n) | (1 << index)));
	return (index >= (sizeof(ulint) * 8) ? -1 : 1);
}
