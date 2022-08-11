#include "lists.h"

/**
 * print_list - prints out all the elements of a list
 * @h: list value to be printed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numel;

	numel = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
	}
	return (numel);
}
