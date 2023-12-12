#include "search_algos.h"

/**
* linear_search - Searches an array for a value and
*					returns the index of the first occurence
* @array: The array to search.
* @size: The size of the array
* @value: The value to search for
*
* Return: The index of the first occurence of the value or - 1 if not
*/
int linear_search(int *array, size_t size, int value)
{
	size_t inc;

	if (array == NULL)
		return (-1);
	for (inc = 0; inc < size; inc++)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
	}
	return (-1);
}
