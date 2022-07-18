#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints the chessboard.
 * @a: the array
 * Return: 0 if success
 */

void print_chessboard(char (*a)[8])
{
int x, y, num;

for (x = 0; x < num; x++)
{
for (y = 0; y <= num; y++)
{
_putchar("\xDB");
_putchar(" ");
}
if (x % 2 == 0)
{
_putchar(" ");
}
}
return (0);
} 
