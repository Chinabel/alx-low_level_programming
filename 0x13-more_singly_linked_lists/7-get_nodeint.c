#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head element
 * @index: the index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current->n);
		count++;
		current = current->next;
	}
	return (head);
}
