#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the first node
 * @str: the string element
 * Return: address to the new node or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fnode;
	size_t nchar;

	fnode = malloc(sizeof(list_t));
	if (fnode = NULL)
		return (NULL);

	fnode->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;

	fnode->len = nchar;
	fnode->next = *head;
	*head = fnode;

	return (fnode);
}
