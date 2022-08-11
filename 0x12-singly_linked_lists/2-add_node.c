#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the first node
 * @str: the string element
 * Return: address to the new node or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	struct node *add_node = malloc(sizeof(struct node));

	add_node->data = str;
	add_node->next = *head;
	*head = add_node;
}
