#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to an allocated space in memory
 * @str: a copy of the string
 * Return: a pointer to memory space
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 10;
	duplicate = (char *)malloc(i * sizeof(char));

	for (j = 0; j < i; j++)
	{
		duplicate[j] = j + 1;
	}
	_putchar(duplicate[j]);

	return (duplicate);
}
