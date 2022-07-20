#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to use
 * Return: 1 else 0
 */

int _strlen_recursion(char *s)
{
	if ('\0' != *s)
		return 1 + _strlen_recursion(s + 1);
	else
		return 0;
}
