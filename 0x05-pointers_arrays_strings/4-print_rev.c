#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string for this function
 * Return: 0
 */

void print_rev(char *s)
{
int c, len, temp;
len = strlen(s);

for (c = 0; c <= len/2; c++)
{
temp = s[c];
s[c] = s[len - c - 1];
s[len - c - 1] = temp;
}

return (s);
}
