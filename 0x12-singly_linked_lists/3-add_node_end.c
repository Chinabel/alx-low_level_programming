#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: the first node
 * @str: the string element
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lnode;

	if (*head == NULL)
		return (NULL);

	lnode = malloc(sizeof(list_t));
	lnode->str = strdup(str);
	lnode->next = NULL;
	while (*head->next != NULL)
		*head = *head->next;

	*head->next = lnode;
	return (lnode);
}
