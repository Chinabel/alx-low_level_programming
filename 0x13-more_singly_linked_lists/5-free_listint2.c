#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: the head element
 */
void free_listint2(listint_t **head)
{
	listint_t *fnode;
	listint_t *lnode;

	lnode = *head;
	while (lnode)
	{
		fnode = lnode->next;
		free(lnode);
		lnode = fnode;
	}

	*head = NULL;
}
