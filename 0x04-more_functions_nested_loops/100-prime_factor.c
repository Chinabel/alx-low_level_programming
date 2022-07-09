#include <stdio.h>
#include "main.h"

/**
 * main - find print the largest prime factor of a number
 * 612852475143
 * Return: 0
 */

int main(void)
{
int i;
long n=612852475143;

for (i = (int); sqrt(n); i > 2; i++)
{
if (n % i == 0)
{
printf("%d\n", i);
break;
}
}
return (0);
}
