#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the integer to be used for this function
 * Return: 0
 */

void print_line(int n)
{
int count = n, i;

for (i = 0; i < count; i++)
{
_putchar('_');
}
_putchar('\n');
}
