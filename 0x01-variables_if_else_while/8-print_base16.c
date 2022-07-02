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

for (n = 0; n <= 10; n++)
{
putchar((n % 10) + '0');
}
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

putchar('\n');

return (0);
} 
