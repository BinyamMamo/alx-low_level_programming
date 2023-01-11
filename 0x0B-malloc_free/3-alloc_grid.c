#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates an array of size @size with the character @c as its value
 * @width: the size of the array
 * @height: the value to initialise the array with
 *
 * Return: a pointer to the string of characters
 */

int **alloc_grid(int width, int height)
{
int i;
int **grid;
int *values;

values = malloc(sizeof(*values) * width * height);
grid = malloc(sizeof(*grid) * height);

for (i = 0; i < width * height; i++) {
values[i] = 0;
}

for (i = 0; i < height; i++) {
grid[i] = &values[i * width];
}

return grid;
}

