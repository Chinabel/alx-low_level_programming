#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the integer to be used in this function
 * Return: 1 if uppercase
 * Return: 0 if otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

else

return (0);
}
