#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: the head element
 * @idx: the index of the list where the node will be added
 * @n: the integer
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size;
	listint_t *temp;
	listint_t *nnode;

	temp = *head;
	if (idx != 0)
	{
		for (size = 0; size < idx - 1 && temp != NULL; size++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL && idx != 0)
		return (NULL);
	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = *head;
		*head = new;
	}
	else
	{
		nnode->next = temp->next;
		temp->next = nnode;
	}
	return (nnode);
}
