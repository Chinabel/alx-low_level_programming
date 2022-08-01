#include "main.h"

/**
 * malloc_checked - allocates dynamic memory
 * @b: the integer to indicate the size of memory
 * Return: pointer to allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
