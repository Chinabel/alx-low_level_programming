#include "main.h"
#include <string.h>

/**
 * wildcmp - compares two strings, returns 1 if the strings are identical
 * @s1: the first string value
 * @s2: the second string value
 * Return: 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
int i, b = 0;

if (strlen(s1) == strlen(s2))
{
i++;
if (s1[i] == s2[i])
b++;
if (b == i)
return (1);
}
return (0);
}
