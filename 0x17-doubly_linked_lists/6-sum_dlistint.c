#include "lists.h"
/**
 * sum_dlistint - sums de integer inside every node.
 *
 * @head: head of the linked list.
 *
 * Return: the result of the sum of integers in the linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int n = 0;

	if (head == NULL)
		return (0);

	for (n = 0; temp; temp = temp->next)
	{
		n = n + temp->n;
	}

	return (n);
}
