#include "search_algos.h"

/**
* advanced_binary_recursive - Find the index of the value in the array
* @array: The array to search in
* @left: The left boundary of the array
* @right: The right boundary of the array
* @value: The value to search for
*
* Return: The index of the value or - 1 if
*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}


/**
* advanced_binary - This function is a wrapper for binary_recursive.
* @array: The array to search.
* @size: The size of the array.
* @value: The value to use.
*
* Return: 0 if successful - 1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
