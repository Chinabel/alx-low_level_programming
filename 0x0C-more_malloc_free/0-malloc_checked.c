#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: the integer
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b * sizeof(str));

	if (str == NULL)
		exit(98);

	return (str);
}
