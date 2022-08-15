#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: the head node
 * @n: the element
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = (*head);
	(*head) = temp;
}
