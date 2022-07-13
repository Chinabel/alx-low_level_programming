#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints n elements of an array of integers,
 * separated by comma followed by space
 * followed by a new line
 * @a: inputs array
 * @b: inputs n elements
 * Return: 0
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
