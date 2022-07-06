#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * h = hour and m = minutes
 * Return: 24-hour clock
 */

void jack_bauer(void)
{
int h, m;

for (h = 00; h < 24; h++)
{
for (m = 00; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
}

}
