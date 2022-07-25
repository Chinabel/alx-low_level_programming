#include "main.h"
#include <string.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to tbe array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(width * sizeof(int));

		if (grid[x] == NULL)
		{
			while (x)
			{
				free(grid[x]);
				x--;
			}
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
