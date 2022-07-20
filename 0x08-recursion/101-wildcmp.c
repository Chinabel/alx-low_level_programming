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
int i = 0; 
n1 = strlen(s1);
n2 = strlen(s2);
b = 0;

if (n1 != n2)
{
return (0);
}
else if (i < n1)
{
b++;
i++;
wildcmp(s1, s2);
}
if (b == i)
return (1);

return (0);
}
