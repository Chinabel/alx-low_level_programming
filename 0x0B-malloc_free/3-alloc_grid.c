#include "main.h"
#include <string.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **data, w, h;

	if (w <= 0 || h <= 0)
		return (NULL);

	data = (int **)malloc(height * sizeof(int *));

	if (data == NULL)
	{
		free(data);
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		data[w] = (int *)malloc(width * sizeof(int));
		if (data[w] == NULL)
		{
			while (w)
			{
				free(data[w]);
				w--;
			}
			free(data);
			return (NULL);
		}
		for (h = 0; h < width; h++)
			data[w][h] = 0;
	}
	return (data);
}
