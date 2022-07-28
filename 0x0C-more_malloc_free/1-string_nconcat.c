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
	int i, j = 0;

	s3 = malloc(strlen(s1) + strlen(s2) + 1);
	for (i = 0; (s3[j] = s1[i]) != '\0'; i++, j++)
	{}
	for (i = 0; (s3[j] = s2[i]) != '\0'; i++, j++)
	{}

	return (s3);
}
