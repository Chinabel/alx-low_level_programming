#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: the argument count
 * @argv: the array containing the arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	for (i = 1; i < argc; i++)
	{
		product = product * strtol( argv[i], NULL, 10);
	}

	printf("%d\n", product);
	return (0);
}
