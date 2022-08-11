#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the node identifier
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		free(node->str);
		head = head->next;
		free(node);
	}
}
