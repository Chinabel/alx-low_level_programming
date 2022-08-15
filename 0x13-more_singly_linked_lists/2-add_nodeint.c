#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: the head node
 * @n: the element
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fnode = malloc(sizeof(listint_t));

	if (fnode == NULL)
		return (NULL);

	fnode->n = n;
	fnode->next = (*head);
	(*head) = fnode;

	return (*head);
}
