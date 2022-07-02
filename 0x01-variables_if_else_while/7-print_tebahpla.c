#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
int i = 'z';

for (i = 'z'; i >= 'a'; i--)
if (i >= 'a')
{
putchar(i);
i--;
}

putchar('\n');

return (0);
}
