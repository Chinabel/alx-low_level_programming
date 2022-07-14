#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0, int destlen = 0;

while (dest[i++])
destlen++;

for (i = 0; src[i]; i++)
dest[destlen++] = = src[i];

return (dest);
}
