#include "main.h"
#include <string.h>

/**
 * create_array - create an array of chars
 * @size: the size of the char
 * @c: the char value
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		i = malloc(c * sizeof(char));
	}
	return (i);
}
