#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 * @n: the integer for this function
 * Return: 0 if success
 */

void print_numbers(void)
{
char i;

for (i = 0; i < 10; i++)
{
_putchar(i);
i++;
}

_putchar('\n');

return (0);
}
