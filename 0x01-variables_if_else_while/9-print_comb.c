#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 * Return: 0 if success
 **/

int main(void)
{
int n;

for (n = 0; n <= 9; n++)
if (n == 9)
{
putchar((n % 10) + '0');
}

putchar(',');
putchar(' ');
putchar('\n');

return (0);
}
