#include "search_algos.h"

/**
 * binary_search - uses binary search algorithm to search for a value
 * @array: an array containing a list of sorted integers
 * @size: the array's size
 * @value: the value to be searched
 * Return: the value's index or -1 if the value is not found
 */
int binary_search(int *array, size_t size, int value)
{

	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
