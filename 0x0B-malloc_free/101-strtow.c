#include "main.h"
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: a string
 * Return: a pointer to an areay of strings
 */

char **strtow(char *str)
{
	int n;

	if (str == NULL || str == "")
		return (NULL);
