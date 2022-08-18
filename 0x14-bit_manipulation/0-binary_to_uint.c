#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1;
	unsigned int n = 0;
	int c;
	unsigned int len;

	len = strlen(b);
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			n += i;
		}
		i *= 2;
	}
	return (n);
}
