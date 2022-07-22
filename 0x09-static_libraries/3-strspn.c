#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the initial segment
 * @accept: accepted source
 * Return: number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

i = 0;

while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != accept[j])
j++;
if (accept[j] == '\0')
return (i);
i++;
}
return (i);
}
