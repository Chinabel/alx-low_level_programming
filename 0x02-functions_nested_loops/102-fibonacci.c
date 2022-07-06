#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 *
 * Return: 0 if succcess
 **/

int main(void)
{
int f1 = 0, f2 = 1, nextint = 0, num = 50;

printf("Enter a positive number: ");
scanf("%d", &num);

printf("Fibonacci series: %d, %d, ", f1, f2);
nextint = f1 + f2;

while (nextint <= num)
{
printf("%d, ", nextint);
f1 = f2;
f2 = nextint;
nextint = f1 + f2;
}

return (0);
}
