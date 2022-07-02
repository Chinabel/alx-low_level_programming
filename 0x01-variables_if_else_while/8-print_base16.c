#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all base 16 numbers in lowercase
 * followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
char ch;

for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}

putchar('\n');

return (0);
}
