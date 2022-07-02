#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combinations of two digit numbers
 * Return: 0 if success
 **/

int main(void)
{
int n1, n2;

for (n1 = 0; n1 < 10; n1++)
{
for (n2 = 0; n2 < 10; n2++)
{
putchar((n1 % 10) + '0');
putchar((n2 % 10) + '0');
if (n1 == 8 && n2 == 9)
continue;

putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}


