#include "main.h"
#include <string.h>

/**
 * _strncpy - copy n bytes from a string to another
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes in src
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
