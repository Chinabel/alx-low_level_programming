#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 * @i: the integer for this function
 * Return: 0 if success
 */

void print_numbers(void)
{
char i = 0;

while (i < 10)
{
_putchar(i + '0');
i++;
}

_putchar('\n');
}
