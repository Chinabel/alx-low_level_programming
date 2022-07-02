#include <stdlib.h>
#include <stdio.h>

/**
 * main - print alphabet in lowercase and then uppercase
 * Return: Always 0 (success)
 */

int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{putchar(ch);
}
putchar(10);/*this is the ASCII code for the new line*/

return (0);
}
