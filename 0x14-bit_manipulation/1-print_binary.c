#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	char varChr_binary;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	varChr_binary = (n & 1) ? '1' : '0';
	_putchar(varChr_binary);
}
