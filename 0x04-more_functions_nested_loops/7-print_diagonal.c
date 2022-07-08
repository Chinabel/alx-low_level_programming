#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the integer to be used for the count in this function
 * @x: the integer for the ending point
 * @y: the integer for the starting point
 * Return: 0
 */

void print_diagonal(int n)
{
int x;
int y;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}

_putchar(92);
_putchar('\n');
}
}
}
