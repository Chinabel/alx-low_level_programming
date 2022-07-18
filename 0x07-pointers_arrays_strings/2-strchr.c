#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: a pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
int i;

while (s[i] != '\0')
{
if (s[i] == c)
return (s[i]);
else if ((s[i] + 1) == c)
return (s[i] + 1);
s[i]++;
}
return (s[i] + 1);
}
