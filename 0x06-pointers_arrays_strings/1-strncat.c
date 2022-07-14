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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 >= n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}

	return (dest);
}
