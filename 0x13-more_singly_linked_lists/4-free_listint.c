#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the head element
 */
void free_listint(listint_t *head)
{
	listint_t *lnode;

	while (head != NULL)
	{
		lnode = head;
		head = head->next;
		free(lnode);
	}
}
