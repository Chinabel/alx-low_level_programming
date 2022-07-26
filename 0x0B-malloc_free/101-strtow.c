#include "main.h"
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: a string
 * Return: a pointer to an areay of strings
 */

char **strtow(char *str)
{
	int n1 = 0, n2 = 0, size = word_count(str);
	char **ch;

	ch = malloc(size * sizeof(char *));

	if (str == NULL || str == "")
		return (NULL);
	while (str[n1])
	{
		if (str[n1] == ' ')
		{
			n1++;
			n2++;
		}
		else
			ch[0] = malloc(0 * sizeof(char));
			ch[0] = &str[0];
		n++;
	}
	**ch = ' ';

	return (ch);
}
