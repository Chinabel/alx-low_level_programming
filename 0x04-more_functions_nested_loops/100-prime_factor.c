#include <stdio.h>

/**
 * main - find print the largest prime factor of a number
 * 612857475143
 * followed by a new line
 * Return: 0
 */

int main(void)
{
int i;
long int n=612857475143;

for (i = 2; i <= sqrt(n); i > 2; i++)
{
if (n % i == 0)
{
n = n / i;
i = 1;
}
}
printf("%d\n", i);
return (0);
}
