#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates an array
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

if (width <= 0 || height <= 0)
return (NULL);

values = malloc(sizeof(*values) * width * height);
if (values == NULL)
return (NULL);
grid = malloc(sizeof(*grid) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < width * height; i++)
{
values[i] = 0;
}

for (i = 0; i < height; i++)
{
grid[i] = &values[i * width];
}

return (grid);
}

