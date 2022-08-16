#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: the head element
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = o;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
