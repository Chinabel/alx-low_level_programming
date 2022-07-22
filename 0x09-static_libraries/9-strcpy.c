#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * include terminating null byte \0
 * @dest: pointer destination
 * @src: pointer source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
int str;

for (str = 0; *(src + str) != '\0'; str++)
{
dest[str] = *(src + str);
}
dest[str] = '\0';

return (dest);
}
