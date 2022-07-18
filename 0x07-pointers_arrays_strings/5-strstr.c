#include "main.h"
#include <iostream>
using namespace std;

/**
 * _strstr - locates a substring.
 * @haystack: a string
 * @needle: a substring
 * Return: a pointer to the beginning of the located substring
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
char *bgn = haystack;
char *ptn = needle;

while (*haystack)
{
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
