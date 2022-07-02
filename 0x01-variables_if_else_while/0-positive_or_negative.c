#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assign a number to a variable for each time it executes
 * and prints out if it positive or negative
 *
 * Return: Always 0 (success)
 */

int main(void)
{
 int n;

 srand(time(0));
 n = rand() - RAND_MAX / 2;
 if (n > 0)
 {
 printf("%d is %s\n", n, "positive");
 }
 else if (n < 0)
 {
 printf("%d is %s\n", n, "negative");
 }
 else
 {
 printf("%d is %s\n", n, "zero");
 }

 return (0);
}   
