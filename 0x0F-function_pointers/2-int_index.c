#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * returns the index of the first element
 * @array: pointer parameter of type int
 * @size: the number of elements in the array
 * @cmp: a pointer to the function used to compare values
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (!array || !cmp)
		return (-1);
	if (size < 0)
		return (-1);
	while (size-- > 0)
	{
		n++;
		if (cmp(*array) != 0)
		{
			return (n - 1);
		}
		array++;
	}
	return (-1);
}
