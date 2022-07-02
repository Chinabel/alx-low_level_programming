#include <stdlib.h>
#include <stdio.h>

/**
 * main - print alphabet in lowercase and then a new line
 * Return: Always 0 (success)
 **/

int main(void)
{
char ch = 'a'

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}

putchar(10);

return (0);
}


