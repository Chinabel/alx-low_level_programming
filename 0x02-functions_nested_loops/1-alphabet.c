#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet in lowercase
 * followed by a new line
 * 
 * Return: Always 0 (success)
 */

int main(void)
{
char d = 'a';

for (d = 'a'; d < 'z'; d++)
{
putchar(d);
d++;
}

putchar('\n');

return (0);
}
