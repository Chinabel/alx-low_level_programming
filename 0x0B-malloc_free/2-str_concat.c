#include "main.h"
#include <string.h>

/**
 * str_concat - concartenate two strings
 * @s1: the first string value
 * @s2: the second string value
 * Return: NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, len = 0;

	while (s1 == NULL)
	{
		s1 = "";
		len++;
	}

	while (s2 == NULL)
	{
		s2 = "";
		len++;
	}

	s3 = malloc(len * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] || s2[i]; i++)
	{
		if (i > len)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - len];
	}

	return (s3);
}
