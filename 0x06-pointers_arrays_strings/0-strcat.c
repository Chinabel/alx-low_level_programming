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
j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (j >= 0)
{
*(dest + i) = *(src + j);
if (*(src + j) == '\0')
break;
i++;
j++;
}

return (dest);
}
