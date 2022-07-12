#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string for this function
 * Return: void
 */

void print_rev(char *s)
{
int c, len;
char *begin, *end, temp;

len = strlen(s);
begin = s;
end = s;

for (c = 0; c <= len - 1; c++)
end++;

for (c = 0; c <= len/2; c++)
{
temp = *end;
*end = *begin;
*begin = *temp;

begin++;
end--;
}
}

int strlen(char *p)
{
int c = 0;

while (*(p + c) != '\0')
c++;

return (c);
}
