#include "function_pointers.h"
/**
 * print_name - print name
 * @name: first input
 * @f: second input
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
