#include <string.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the integer to indicate a string
 * @l: the integer to be used
 * Return: 0
 */

int _strlen(char *s)
{
int l = 0;

while (s[l] != '\0')
{
l++;
}
return (l);
}
