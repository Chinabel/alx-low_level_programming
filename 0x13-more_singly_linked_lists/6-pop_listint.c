#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: the head element
 * Return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if ((*head) == NULL)
	{
		return (0);
	}

	temp = (*head);
	res = temp->n;
	(*head) = (*head)->next;
	free(temp);
	return (rest);
}
