#include <stdio.h>
#include "main.h"

/**
 * _islower - the function to check if an integer is lowercase
 * @c: the integer to be used for this function
 * Return: 0 if otherwise
 **/

int _islower(int c)
{
if (c > 97 && c < 122)
{
return (1);
}
else

return (0);
}
