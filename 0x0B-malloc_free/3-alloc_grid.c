#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * alloc_grid - Check description 
 * @width: width of the grid
 * @height: height of the grid
 * Description: Creates a 2-D array and returns pointer
 * Return: pointer.
 **/
int **alloc_grid(int width, int height)
{
int w;
int h;
int **grid;
h = 0;
grid = malloc(INT_MAX);
if ((grid == NULL) || (width <= 0) || (height <= 0))
{
return (NULL);
}
grid = (int*)malloc(width * height);
while (h < height)
{
w = 0;
while (w < width)
{
grid[h][w] = h + w;
w++;
}
h++;
}
return (grid);
}
