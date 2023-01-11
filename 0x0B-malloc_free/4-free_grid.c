#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - creates an array
 * @height: the value to initialise the array with
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int i, j, width;

if (grid == NULL)
return (NULL);

width = sizeof(grid) / (sizeof(int) * height);
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
free(&grid[i][j]);
}
}

}