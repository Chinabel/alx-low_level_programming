#include "main.h"
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: a string
 * Return: a pointer to an areay of strings
 */

char **strtow(char *str)
{
	int n1 = 0, n2 = 0, size, count;
	char **ch;

	size = count(str);

	ch = malloc(size * sizeof(char *));

	if (str == NULL || str == " ")
		return (NULL);

	while (str[n1])
	{
		if (str[n1] == ' ')
		{
			n1++;
			n2++;
		}
		else
		{
			ch[n2] = malloc(n1 * sizeof(char));
			ch[n2] = &str[n1];
		}
		n1++;
	}
	**ch = ' ';

	return (ch);
}
