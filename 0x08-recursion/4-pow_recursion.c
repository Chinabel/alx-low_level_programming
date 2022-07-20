#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y
 * @x: the value
 * @y: the value to raise to the power of
 * Return: _pow_recursion()
 */

int _pow_recursion(int x, int y)
{
int result;

if (y < 0)
return (-1);

else

result = _pow_recursion(x, y -1) * x;
}
