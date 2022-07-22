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
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}
return (s + 1);
}
