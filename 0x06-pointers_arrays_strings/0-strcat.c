#include "main.h"

/**
 * *_strcat - concantenates two strings
 * appends the src string to the dest string
 * overwrites the terminating null byte (\0) at the end of dest, 
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
++i;
}
for (j = 0; src[j] != '\0'; ++j; ++i)
{
dest[i] = src[j];
}
dest[i] = '\0';

_putchar("\n");

return (*dest);
}
