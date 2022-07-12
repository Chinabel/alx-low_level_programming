#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string for this function
 * Return: void
 */

void print_rev(char *s)
{
int c = 0;

while (s[c] != '\0')
{
c++;
}
c--;
while (c >= 0)
{
putchar(s[c]);
c--;
}

putchar('\n');
}
