#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @ch: the integer to be used for char
 * @isupper: the argument to be used for int
 * Return: 1 if c is upercase
 * Return: 0 if otherwise
 */

int _isupper(int c)
{
char ch = 'A';
int c = 0;

for (; ch <= 'Z'; ch++)
{
if (c == ch)
{
c = 1;
break;
}

return (c);
}
