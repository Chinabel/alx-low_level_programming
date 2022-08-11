#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the first node
 * @str: the string element
 * Return: address to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fnode;
	int lenst;

	for (lenst = 0; str[lenst] != '\0'; lenst++)
		;

	fnode = malloc(sizeof(list_t));
	if (fnode == NULL)
	{
		return (NULL);
		free(fnode);
	}

	fnode->len = lenst;
	fnode->str = strdup(str);
	fnode->next = *head;
	*head = fnode;

	return (fnode);
	free(fnode);
}
