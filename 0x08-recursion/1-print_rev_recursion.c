#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be used
 */

void _print_rev_recursion(char *s)
{
	int i;
		if (*(s + i) == '\0')
		{
			_print_rev_recursion(*(s + i) + 1);
			_putchar(*(s + i));
		}
}
