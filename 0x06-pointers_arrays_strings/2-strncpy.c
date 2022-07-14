#include "main.h"

/**
 * _strncpy - copies a string,
 * @dest: to copy into
 * @source: to copy from
 * @n: the number of bytes to copy
 * Return: 0 if success
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0'; i++)
if (i < n)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';

return (dest);
}
