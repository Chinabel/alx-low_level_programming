#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - assign random number to a variable
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if n >= 0;
           n is positive
        else if n == 0;
           n is zero
        else if n <= 0;
           n is negative
        else;
           n = rand()
	return (0);
}
