#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters in a string to uppercase
 * @s: the pointer
 * Return: the value of s
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
