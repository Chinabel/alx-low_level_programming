#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: the argument count
 * @argv: the array containing the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	for (i = 1; i < argc; i++)
	{
		if  (argc <= 2)
		{
			printf("%s\n", "Error");
			return (1);
		}
		result = result * strtol(argv[i], NULL, 10);
	}

	printf("%d\n", result);
	return (0);
}
