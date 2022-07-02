#include <stdlib.h>
#include <stdio.h>

/**
 * main - print an alphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');

return (0);

}
