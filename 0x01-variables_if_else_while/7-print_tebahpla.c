#include <stdlib.h>
#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
char d = 'z';

for (n = 'z'; n >= 'a'; n--)
{
putchar(n);
n--;
}

putchar(10);

return (0);
}
