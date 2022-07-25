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
	int i, len_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s3 = malloc((len * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[len_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		s3[len_i++] = s2[i];

	return (s3);
}
