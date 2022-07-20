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
if (y == 0)
return (1);
if (y <= 0)
return (_pow_recursion(x, y + 1) / x);

return (x * _pow_recursion(x, y - 1));
}
