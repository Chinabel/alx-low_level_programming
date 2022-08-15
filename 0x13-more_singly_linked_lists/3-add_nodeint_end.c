#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head element
 * @n: an element identifier
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newel = malloc(sizeof(listint_t));
	listint_t *lnode = (*head);

	if (newel == NULL)
		return (NULL);
	newel->n = n;
	newel->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = newel;
		return;
	}
	while (lnode->next != NULL)
		lnode = lnode->next;

	lnode->next = newel;
	return (*head);
}
