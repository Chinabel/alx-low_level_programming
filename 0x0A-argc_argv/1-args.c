#include "main.h"
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the argument count
 * @argv: the arrau the argument is pointing to
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", i, argv[i]);

	return (0);
}
