#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be used
 */

void _print_rev_recursion(char *s)
{
	int c;

		if (*(s + c) == '\0')
		{
			_puts_recursion(s, c + 1);
			_putchar(s[c]);
		}
}
