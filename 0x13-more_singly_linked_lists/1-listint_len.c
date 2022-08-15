#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
