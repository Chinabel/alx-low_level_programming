#include "main.h"
#include <string.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
int c, d;

for (c = 0; c < 8; c++)
{
for (d = 0; d < 8; d++)
{
if (d == 7)
{
_putchar(a[c][d]);
_putchar('\n');
}
else
_putchar(a[c][d]);
}
}
}
