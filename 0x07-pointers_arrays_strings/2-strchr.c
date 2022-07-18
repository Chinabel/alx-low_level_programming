#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 * Return: a pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
int i, f;
f = 0;

for (i = 0; i <= strlen(s); i++)
{
if (s[i] == c)
{
f++;
break;
}
return (c);
else
return (0);
}
}
