#include <stdio.h>

/**
 * main - print the largest prime factor of 612857475143
 * followed by a new line
 * Return: 0
 */

int main(void)
{
long long int n;
n=612857475143;
long long int div=2, ans = 0, maxFact;

while(n!=0)
{
if(n % div !=0)
div = div + 1;
else
{
maxFact = n;
n = n / div;
if(n == 1)
{
printf("%d is the largest prime factor !",maxFact);
ans = 1;
break;
}
}
}
