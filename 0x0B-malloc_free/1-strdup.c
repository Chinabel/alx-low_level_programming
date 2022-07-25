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
		return (NULL);

	for (i = 0; *(str + i); i++)
	{
		j++;
	duplicate = malloc((j + 1) * sizeof(char));
	}

	if (duplicate == NULL)
	{
		return (NULL);
	for (i = 0; *(str + i); i++)
	{
		*(duplicate + i) = *(str + i);
	}
	*(duplicate + j) = '\0';
	}

	return (duplicate);
}
