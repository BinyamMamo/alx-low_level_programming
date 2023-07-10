#include "search_algos.h"

/**
 * linear_search - uses linear search algorithm to search for a value
 * @array: an array containing a list of sorted integers
 * @size: the array's size
 * @value: the value to be searched
 * Return: the value's index or -1 if the value is not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL)
        return (-1);
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
