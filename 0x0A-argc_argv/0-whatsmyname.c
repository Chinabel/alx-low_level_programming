#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: the argument count
 * @argv: the array argument index
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("Program name is: %s\n", argv[argc - 1]);
	return (0);
}
