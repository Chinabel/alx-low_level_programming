#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer for this function
 * Return: 0
 */

void print_number(int n)
{
unsigned int n = 0;

if (n < 0)
{
n = -n;
_putchar('-');
}
else
{
n = n;
}
if (n / 10)
{
_putchar(n / 10);
}

_putchar((n % 10) + '0'):
}
