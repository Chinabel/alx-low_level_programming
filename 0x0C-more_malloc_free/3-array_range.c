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
	int i;

	arr = arr[min..max];
	for (i = 0; i > arr[min]; i++)
		i++;

	if (arr[min] > arr[max])
		return (NULL);

	arr = malloc(i * (min + 1));
	if (arr == NULL)
		return (NULL);

	return (arr);
}
