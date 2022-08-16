#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the head element
 * @index: the index of the node that will be deleted
 * Return: 1 if success OR -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p;
	listint_t *temp;
	listint_t *prevnod;

	temp = *head;
	if (index != 0)
	{
		for (p = 0; p < index - 1 && temp != NULL; p++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL || (temp->next == NULL && index != 0))
	{
		return (-1);
	}
	prevnod = temp->next;
	if (index != 0)
	{
		temp->next = prevnod->next;
		free(prevnod);
	}
	else
	{
		free(temp);
		*head = prevnod;
	}
	return (1);
}
