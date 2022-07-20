#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the value
 * @y: the value to raise to the power of
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);

else if (y == 1)
return (x);

else if (y % 2 == 0)
_pow_recursion(x * x, y / 2);

return (x * _pow_recursion(x * x, (y - 1)/2);
}
