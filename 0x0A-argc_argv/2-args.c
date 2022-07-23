#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @args: the argument entry point
 * @argv: the array of arguments
 * Return: 0
 */

int main(int args, char *argv[])
{
	int i;

	for (i = 0; i < args; i++)
		printf("%s\n", argv[1]);
	return (0);
}
