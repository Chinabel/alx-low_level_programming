#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: the node head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t numlen = 0;

	while (h != NULL)
	{
		numlen++;
		h = h->next;
	}
	return (numlen);
}
