#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * Numbers must be separated by a comma followed by a space
 *
 * Return: Always 0
 **/

void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(', ');
}
n++;
}
}

else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(', ');
}
n--;
}
}

else
{
printf(98);
}

printf('\n');
}