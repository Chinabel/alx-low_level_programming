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
printf("The natural numbers between n and 98 are:\n");

for (n = 1; n <= 98; n++)
{
printf("%d", n);
}
printf('\n');

return (0);
}
