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

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc((nmemb + size) * sizeof(char);

	if (str == NULL)
		return (NULL);

	for (nmemb = 0; nmemb < size; nmemb++)
		str[nmemb] = nmemb + 1;

	return (0);
}
