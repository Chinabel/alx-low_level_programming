#include <stdio.h>
i#include "main.h"

/**
 * int_islower - check if int c is a lowercase character
 * Return: 1 if c is lowercase
 * Return: 0 if otherwise
 */

int _islower(int c)
{
if (c > 97 && c < 122)
{
return (1);
}
else

return (0);
}
