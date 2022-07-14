#include "main.h"

/**
 * _strcmp - compares two strings,
 * @s1: the first string
 * @s2: the second string
 * Return: Anything
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, int j = 0;

while (s1[j] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
i = 0;
break;
}
j++;
}

if (i = 0)
return (0);
else
return (1);
}
