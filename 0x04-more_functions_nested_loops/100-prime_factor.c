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

for (i = (int) sqrt(n); i > 2; i++)
{
if (n % i == 0)
{
printf("%d\n", i);
break;
}
}

return (0);
}
