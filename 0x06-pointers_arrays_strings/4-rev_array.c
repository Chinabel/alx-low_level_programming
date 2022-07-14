#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: 0 if success
 */

void reverse_array(int *a, int n)
{
int i;
int temp;

for (i = 0; i < n; i++)
{
n--;
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
