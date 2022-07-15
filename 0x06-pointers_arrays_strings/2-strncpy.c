#include "main.h"
<<<<<<< HEAD
#include <string.h>

/**
 * _strncpy - copy n bytes from a string to another
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes in src
 * Return: a pointer to dest
=======

/**
 * _strncpy - copies a string,
 * @dest: to copy into
 * @source: to copy from
 * @n: the number of bytes to copy
 * Return: 0 if success
>>>>>>> 12a64c9be9cb2be2a4d1ac4e3072863ca716b1b8
 */

char *_strncpy(char *dest, char *src, int n)
{
<<<<<<< HEAD
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

=======
int i;

for (i = 0; src[i] != '\0'; i++)
if (i < n)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';

return (dest);
}
>>>>>>> 12a64c9be9cb2be2a4d1ac4e3072863ca716b1b8
