#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to a integer
 * @i: integer to be used in this function
 * Return: void
 */

int _atoi(char *s)
{
int pw = 10, len, num;
int val = 0;

for (int i = 0; i < len; i++)
{
val *= pw;
num = (int)(*(str + i) - 48);
val += num;
return (val);
}
return (val);
}
