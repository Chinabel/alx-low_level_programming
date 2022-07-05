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
print_alphabet();
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}

return (0);
}
