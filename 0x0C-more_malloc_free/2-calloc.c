#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: the memory containing the array
 * @size: the number of bytes in the memory
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (n = 0; n < (nmemb + size); n++)
		str[n] = 0;

	return (str);
}
