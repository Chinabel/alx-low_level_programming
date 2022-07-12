#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,starting with the first character
 * followed by a new line
 * @str: indicates string
 */

void puts2(char *str)
{
int n = 0;

while (str[n] != '\0')
{
if (n % 2 == 0)
putchar(str[n]);
n++;
}
putchar('\n');
}
