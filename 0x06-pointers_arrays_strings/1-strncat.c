#include "main.h"

/**
 * _strncat - concartenate two strings
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j <= n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
