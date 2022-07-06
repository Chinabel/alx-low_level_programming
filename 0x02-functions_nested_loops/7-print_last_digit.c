#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the integer we will use in this function
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
int d;

if (n < 0)
n = -n;

d = n % 10;

If (d < 0)
d = -d;

_putchar(d + '0');


return (d);
}
