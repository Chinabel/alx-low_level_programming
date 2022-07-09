#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the shape of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
int x;
int y;

if (size > 0)
{
then
for (x = 1; x < size; x++)
{
for (y = 1; y < x; y++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
else
_putchar('\n');
}
}
