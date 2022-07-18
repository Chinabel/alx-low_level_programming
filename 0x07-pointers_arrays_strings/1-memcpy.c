#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes in src
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
