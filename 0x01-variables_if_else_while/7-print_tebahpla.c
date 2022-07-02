#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
int i;

for (i = 'z'; i >= 'a'; i--)
{
putchar("%c",i);
i--;
}

putchar(10);

return (0);
}
