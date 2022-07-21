#include "main.h"
#include <string.h>

/**
 * str_idn - check if two strings are identical
 * @s1: string_1 base address
 * @s2: string_2 base address
 * @a: the first index
 * @b: the second index
 * Return: 1 if s is palindrome, 0 otherwise
 */

int str_idn(char *s1, char *s2, int a, int b)
{
if (s1[a] == '\0' && s2[b] == '\0')
return (1);
if (s1[a] == s2[b])
return (str_idn(s1, s2, a + 1, b + 1));
if (s1[a] == '\0' && s2[b] == '*')
return (str_idn(s1, s2, a, b + 1));
if (s2[b] == '*')
return (str_idn(s1, s2, a + b, b) || str_idn(s1, s2, a, b + 1));
return (0);
}

/**
 * wildcmp - compares two strings, returns 1 if the strings are identical
 * @s1: the first string value
 * @s2: the second string value
 * Return: 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

else if (*s2 == '*')
return (str_idn(s1, (s2 + 1), (s2 + 1)));

else
return (0);
}
