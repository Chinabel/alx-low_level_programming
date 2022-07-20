#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to use
 * Return: _sqrt_recursion()
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @i: squared number
 *
 * Return: _sqrt()
 */

int _sqrt(int n, int i)
{
if (n > i / 2)
return (-1);
else if (n * n == i)
return (n);
return (_sqrt(n + 1, i));
}
