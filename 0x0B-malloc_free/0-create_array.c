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
	char c[5];

	for (n = 0; n < size; n++)
	{
		c[n] = n;
	}
	return (0);
}

