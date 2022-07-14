#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalises all words of a string
 * @s: input string
 * Return: first letter capitalize after separator
 */
char *cap_string(char *s)
{
int i, j;
int cap = 32;
int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - cap;
}

cap = 0;

for (j = 0; j <= 12; j++)
{
if (s[i] == separators[j])
{
j = 12;
cap = 32;
}
}
}

return (s);
}
