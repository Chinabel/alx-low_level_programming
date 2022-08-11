#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: the node head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
