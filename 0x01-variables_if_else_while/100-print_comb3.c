#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all possible combinations of two digit numbers
 * Return: 0 if success
 **/

int main(void)
{
int n1, n2;

for (n1 = 0; n1 <= 9; n1++)

for (n2 = 0; n2 <= 9; n2++)
{
putchar(n1,n2)
if (n1 == 9 && n2 == 9)
continue;
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}


