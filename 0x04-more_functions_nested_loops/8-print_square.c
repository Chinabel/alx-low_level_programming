#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: integer to return size of square
 * @i: the first integer
 * @j: the second integer
 * Return: 0
 */

void print_square(int size)
{
int i;
int j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
}

_putchar('\n');
}
