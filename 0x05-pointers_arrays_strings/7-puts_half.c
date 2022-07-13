#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: indicates a string
 * Return: 0
 */

void puts_half(char *str)
{
int n = 5;
char str;
int str_size = strlen(str);
int s;
int part_size;

if (str_size % n != 0)
{
return;
}

part_size = str_size / n;

for (s = 0; s < str_size; s++)
{
if (s % part_size == 0)
putchar(str[n]);
}

putchar('\n');
}
