#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: a substring
 * Return:
 * 	returns a pointer to the beginning of the located substring
 * 	returns NULL if not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *bgn = haystack;
char *ptn = needle;

while (*haystack && *ptn && *haystack == *ptn)
{
haystack++;
ptn++;
}

if (!*ptn)
return (bgn);

haystack = bgn + 1;
}

return (NULL);
}
