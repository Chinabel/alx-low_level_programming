#include "main.h"

/**
 * _strncpy - copies a string,
 * @dest: the destination
 * @source: the source
 * @n: the number of bytes in src
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; dest[i] != '\0'; i++)
{
src[i] = dest[i];
}

src[i] = '\0';

return (src);
}
