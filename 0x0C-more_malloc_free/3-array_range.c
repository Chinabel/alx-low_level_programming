#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer in the array
 * @max: maximum integer in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, n, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0, n = min; n <= max; i++, n++)
		arr[i] = n;

	return (arr);
}
