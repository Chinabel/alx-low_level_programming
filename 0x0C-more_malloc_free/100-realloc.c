#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory
 * @old_size: memory size of ptr
 * @new_size: the size it will increase to
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	str = malloc(new_size);
		if (str == NULL)
			return (NULL);

	for (n = 0; n < old_size; n++)
	{
		str[n] = ((char *)ptr)[n];
	}

	free(ptr);

	return (str);
}
