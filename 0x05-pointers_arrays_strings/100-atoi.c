#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to a integer
 * @i: integer to be used in this function
 * Return: void
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {

if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');

else if (num > 0)
break;
} while (*s++);

return (num * sign);
}
