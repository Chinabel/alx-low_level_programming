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
	int i, lenA = 0, lenB = 0;

	while (s1 == NULL)
	{
		s1 = "";
		lenA++;
	}

	while (s2 == NULL)
	{
		s2 = "";
		lenB++;
	}

	s3 = malloc((lenA + lenB) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i >= (lenA + lenB); i++)
	{
		if (i > lenA)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - lenA];
	}

	return (s3);
}
