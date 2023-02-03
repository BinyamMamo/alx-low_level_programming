#include <stdio.h>
#include "main.h"

/**
 * get_endianness - gets the endianness of your machine
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c ? 1 : 0);
}
