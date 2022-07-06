#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the integer we will use in this function
 * Return: 0
 */

int print_last_digit(int n)
{
for (n = 0; n <= 98; n++)
{
_putchar((n % 10) + '0')
}

return (0);
}
