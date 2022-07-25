#include "main.h"
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a pointer to a pointer
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
	{
		free(data[w]);
	free(data);
	}
}
