#include "main.h"

/**
 * malloc_checked - allocates dynamic memory
 * @b: the size of memory
 * Return: pointer to address of the memory
 * or normal process termination with a status value of 98
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
		exit(98);
	return (ptr);

}
