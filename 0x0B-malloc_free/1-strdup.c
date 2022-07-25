#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to an allocated space in memory
 * @str: a copy of the string
 * Return: a pointer to memory space
 */

char *_strdup(char *str)
{
	*str = malloc(sizeof(char));
}

/**
 * main - return a pointer to a pointer
 * Return: 0
 */

int main(void)
{
	char *str = NULL;

	_strdup(&str);
	return (0);
}
