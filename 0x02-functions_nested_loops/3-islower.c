#include <stdio.h>
#include "main.h"

/**
 * int_islower - check for lowercase character
 * Return: 1 if c is lowercase
 * Return: 0 if otherwise
 */

int _islower(int c)
{
char c;

if (c > 97 && c < 122)
{
return (1);
}

return (0);
}
