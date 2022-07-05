#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet in lowercase
 * followed by a new line
 * 
 * Return: Always void
 */

void print_alphabet(void)
{
int n;

for (n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar('\n');

}
