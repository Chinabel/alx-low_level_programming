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
	char *str;
	unsigned int len = n, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b]; b++)
		len++;

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (b = 0; s1[b]; b++)
		str[len++] = s1[b];

	for (b = 0; s2[b] && b < n; b++)
		str[len++] = s2[b];

	str[len] = '\0';

	return (str);
}
