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
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(width * sizeof(int));

		if (grid[w] == NULL)
		{
			while (w)
			{
				free(grid[w]);
				w--;
			}
			free(grid);
			return (NULL);
		}
		for (h = 0; h < width; h++)
			grid[w][h] = 0;
	}
	return (grid);
}
