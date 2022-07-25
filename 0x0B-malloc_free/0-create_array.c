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
	char ch;

	if (size == 0)
		return ('\0');

	ch = malloc(size * sizeof(char);

	if (array == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
