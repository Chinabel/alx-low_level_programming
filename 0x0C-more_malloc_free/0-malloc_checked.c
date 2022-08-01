#include "main.h"

/**
 * malloc_checked - allocates dynamic memory
 * @b: the size of memory
 * Return: pointer to address of the memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(unsigned int));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
