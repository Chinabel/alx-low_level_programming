#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d ", h->n);
		h = h->next;
	}
	printf("\n");
}
