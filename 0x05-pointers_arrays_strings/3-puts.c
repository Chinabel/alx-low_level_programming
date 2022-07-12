#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * Return: 0
 */

void _puts(char *str)
{
int name = 0;

while (str[name] != '\0')
{
_putchar(str[name]);
name++;
}

_putchar('\n');
}
