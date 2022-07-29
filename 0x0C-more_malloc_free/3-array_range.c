#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer in the array
 * @max: maximum integer in the array
 * Return: pointer to the newly created array
 * else NULL
 */

int *array_range(int min, int max)
{
	char *arr;
	int size, i, j;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = malloc(size * sizeof(char);
	if (arr == NULL)
		return (NULL);

	for (i = 0; j = min; j <= max; i++, j++)
		arr[i] = j;

	return (arr);
}
