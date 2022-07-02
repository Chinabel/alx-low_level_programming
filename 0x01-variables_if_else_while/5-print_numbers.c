#include <stdlib.h>
#include <stdio.h>

/**
 * main - print single numbers in base 10 beginning from 0
 * Return: Always 0 (success)
 */

int main(void)
{
char n = '0';

while (n <= '9')
{
putchar(n);
n++;
}

putchar('\n');

return (0);
}
