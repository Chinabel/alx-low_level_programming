#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: the pointer to int
 * @size: the size of the array
 * @action: the pointer to the function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size > 0)
	{
		(*array)(*action);
			array++;
			size--;
	}
}
