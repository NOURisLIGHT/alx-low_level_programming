#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - makes a 2d array
 * @width: the width of array
 * @height: the height of array
 * Return: NULL or pointer to array
 */
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
return (NULL);

int **grid;
int i, j;

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
}
for (i = 0; j < width; j++)
{
grid[i][j] = 0;
}
return (grid);
}
