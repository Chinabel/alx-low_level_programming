#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting with the first character
 * followed by a new line
 * @str: indicates string
 */

void puts2(char *str)
{
char *str = "This is my school";
char s[20] = " ";

for (int i = 0; i < strlen(str); i+=2)
{
putchar(str[i]);
s[i/2] = str[i];
}
}
