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
	list_t *lnode, *temp;
	int lenst;

	for (lenst = 0; str[lenst] != '\0'; lenst++)
		;
	lnode = malloc(sizeof(list_t));
	temp = *head;
	if (lnode == NULL)
	{
		return (NULL);
		free(lnode);
	}

	lnode->len = lenst;
	lnode->str = strdup(str);
	lnode->next = NULL;

	if (*head == NULL)
	{
		*head = lnode;
		return (*head);
	}
	else
	{
		while (*temp->next != 0)
		{
			temp = temp->next;
		}
	}
	temp->next = lnode;
	return (*head);
	free(lnode);
}
