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
	list_t *node, *lnode;
	int lenst;

	for (lenst = 0; str[lenst] != '\0'; lenst++)
		;
	node = malloc(sizeof(list_t));
	lnode = *head;
	if (node == NULL)
	{
		return (NULL);
		free(node);
	}

	node->len = lenst;
	node->str = strdup(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	else
	{
		while (lnode->next != 0)
		{
			lnode = lnode->next;
		}
	}
	lnode->next = node;
	return (*head);
	free(node);
}
