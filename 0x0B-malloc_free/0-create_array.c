#include "main.h"
#include <string.h>

/**
 * create_array - create an array of chars
 * @size: the size of the char
 * @c: the char value
 * Return: a pointer to the areay or NULL
 */

char *create_array(unsigned int size, char c)
{
	int n = 0;

	for (size = 0; size > n; size++)
	{
		c[n] = '\0';
	}

	return (c);
}
