#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the integer to use
 * Return: 0
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	return (n * factorial(n - 1));
}
