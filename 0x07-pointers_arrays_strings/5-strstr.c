#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @haystack: a string
 * @needle: a substring
 * Return: a pointer to the beginning of the located substring
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int b;

b = 0;

while (needle[b] != '\0')
b++;

while (*haystack != '\0')
{
if (_strncmp(haystack, needle, b) == 0)
return (haystack);
haystack++;
}

return (NULL);
}
