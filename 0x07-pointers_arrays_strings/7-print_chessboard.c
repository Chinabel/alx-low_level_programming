#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: the row of the  array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int x, y;

x = y = 0;

while (x < 8)
{
y = 0;
while (y < 8)
{
_putchar(a[x][y]);
y++;
}
_putchar('\n');
x++;
}
} 
