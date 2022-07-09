#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer for this function
 * Return: 0
 */

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
num = -num;
_putchar(45);
}
if (num / 10)
{
_putchar(num / 10);
}

_putchar((num % 10) + '0'):
}
