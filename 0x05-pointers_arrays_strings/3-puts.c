#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: a string function
 * Return: 0
 */

void _puts(char *str)
{
char str[];
int n = 0;

while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
putchar('\n');
}
