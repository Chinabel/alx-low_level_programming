#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - 10 times in lowercase
 * followed by a new line
 *
 * Return: Void if success
 */

void print_alphabet_x10(void)
{
int n;

for (n = 97; n <= 122; n++)
{
_putchar(n * 10);
}

putchar('\n');

getchar();
}
