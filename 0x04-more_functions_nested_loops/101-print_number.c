#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer for this function
 * Return: 0
 */

void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
i = -i;
_putchar(45);
}
if (i / 10)
{
_putchar(i / 10);
}

_putchar((i % 10) + '0'):
}
