#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @needle: a substring
 * @haystack: a string
 * Return: 
 *	returns a pointer to the beginning of the located substring 
 *	returns NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *b = haystack;
char *p = needle;

while(*haystack && *p && *haystack == *p)
{
haystack++;
p++;
}

if (!*p)
return (b);

haystack = b + 1;
}
return NULL;
} 
