#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to use
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(*s);
	}
	else
		return (*s)
}
