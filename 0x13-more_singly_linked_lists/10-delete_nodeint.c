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
	prevnod = *head;
	for (p = 0; p < index; p++)
	{
		if (p == 0 && index == 1)
		{
			*head = *head->next;
			free(temp);
		}
		else
		{
			if (p == index - 1 && temp)
			{
				prevnod->next = temp->next;
				free(temp);
			}
			else
			{
				prevenod = temp;
				if (prevnode == NULL)
					break;
				temp = temp->next;
			}
		}
		return (1);
	}
}
