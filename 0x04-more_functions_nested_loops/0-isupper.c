#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @ch: the integer to be used for char
 * @isupper: the argument to be used for int
 * Return: 0
 */

int _isupper(int c)
{
char ch = 'A';
int isupper = 0;

for (; ch <= 'Z'; ch++)
{
if (c == ch)
{
isupper = 1;
break;
}

return (isupper);
}
