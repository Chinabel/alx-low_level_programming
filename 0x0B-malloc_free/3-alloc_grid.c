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
	int **data;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	data = malloc(height * sizeof(int *));

	if (data == NULL)
	{
		free(data);
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		data[w] = malloc(width * sizeof(int));
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
