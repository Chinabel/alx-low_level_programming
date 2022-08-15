#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num, i;
	listint_t *temp;

	for (i = 0; i < num; i++)
	{
		temp = malloc(sizeof(listint_t));
		temp->n = i;
		if (h == NULL)
		{
			h = temp;
			h->next = NULL;
		}
		else
		{
			temp->next = h;
			h = temp;
		}
	}
}
