#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - 10 times in lowercase
 * followed by a new line
 *
 * Return: Void if success
 */

void print_alphabet_x10(void)
{
char ch;
int n = 0;

while (n <= 9)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}

putchar('\n');
}

getchar();
}
