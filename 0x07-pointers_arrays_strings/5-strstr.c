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
int b;
int p = 0;

while (needle[p] != '\0')
p++;

while (*haystack)
{
for (b = 0; needle[b]; b++)
{
if (haystack[b] != needle[b])
break;
}
if (b != p)
haystack++;
else
return (hystack);
}

return (NULL);
} 
