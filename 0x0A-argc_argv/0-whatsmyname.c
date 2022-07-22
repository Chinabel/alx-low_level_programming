#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: the argument count
 * @argv: the array argument index
 */

void main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}

	printf('\n');
}
