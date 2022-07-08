#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the integer to be used for the count in this function
 * Return: 0
 */

void print_diagonal(int n)
{
char diagonal = '\';
int n = 7;
int x;
int y;

for (int x = 0; int x < n; x++)
{
for (int y = 0; int y < n; y++)
{
if (y == x)
_putchar(diagonal);
}
_putchar('\n');
}

return (0);
}
