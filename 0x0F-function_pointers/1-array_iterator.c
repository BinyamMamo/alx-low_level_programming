#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: first input
 * @size: second input
 * @action: third input
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	if (array == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
