#include "main.h"
#include <string.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 **/

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: the string value
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **ch;
	int i, height, a, b, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = height = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;

	ch = malloc((height + 1) * sizeof(char *));
	if (ch == NULL || height == 0)
	{
		free(ch);
		return (NULL);
	}
	for (a = k = 0; a < height; a++)
	{
		for (i = k; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				k++;
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				ch[a] = malloc((i - k + 2) * sizeof(char));
				if (ch[a] == NULL)
				{
					ch_free_grid(ch, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; k <= i; k++, b++)
			ch[a][b] = str[k];
		ch[a][b] = '\0';
	}
	ch[a] = NULL;
	return (ch);
}
