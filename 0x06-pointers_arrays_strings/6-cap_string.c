#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @s: input string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
