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
	size_t a, b, c, n = 0;

	a = strlen(s1);
	b = strlen(s2);
	c = a + b + 1;

	s3 = malloc(c);

	if (s3 == NULL)
		return (NULL)

	if (n >= b)
		return (b)

	s3[n] = '\0';

	return (s3);
}
