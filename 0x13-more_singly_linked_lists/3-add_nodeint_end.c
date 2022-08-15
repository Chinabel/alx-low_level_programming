#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head element
 * @n: an element identifier
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newel;
	listint_t *lnode;
	(void)lnode;

	newel = malloc(sizeof(listint_t));
	if (newel == NULL)
		return (NULL);
	newel->n = n;
	newel->next = NULL;
	lnode = (*head);
	if ((*head) == NULL)
	{
		(*head) = newel;
	}
	else
	{
		while (lnode->next != NULL)
		{
			lnode = lnode->next;
		}
		lnode->next = newel;
	}
	return (*head);
}
