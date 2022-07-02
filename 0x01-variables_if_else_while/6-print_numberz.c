#include <stdlib.h>
#include <stdio.h>

/**
 * main - print single digit base 10 numbers beginning from 0
 * followed by a new line
 * 
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

while (n <= '9')
{
putchar(n);
n++;
}

putchar(10);/* this is the ASCII code for new line*/

return (0);
}
