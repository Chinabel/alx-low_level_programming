#include "main.h"

/**
 * string_nconcat - concartenates two strings
 * @s1: the first string pointer
 * @s2: the second string pointer
 * @n: the int value
 * Return: a pointer to the allocated memory else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len = n, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b]; b++)
		len++;

	s3 = malloc((len + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL)

	len = 0;

	for (b = 0; s1[b]; b++)
		s3[len++] = s1[b];

	for (b = 0; s2[b] && b <= n; b++)
		s3[len++] = s2[b];

	s3[len] = '\0';

	return (s3);
}
