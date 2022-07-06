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
int f1 = 0, f2 = 1, f3, num, count = 0;

printf("%d, ", f1);
printf("%d, ", f2);
count = 2;

while (count < num)
{
f3 = f1 + f2;
count++;
printf("%d\n", f3);
f1 = f2;
f2 = f3;
}
}
