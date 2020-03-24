#include "lists.h"
/**
 * sum_listint - sum integers inside of all the nodes
 * @head: head of the list
 * Return: result of the add operation
 */

int sum_listint(listint_t *head)
{
	int i;
	int sum = 0;
	listint_t *temp;

	if (head == 0)
	{
		return (0);
	}

	temp = head;

	for (i = 0; temp != 0; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
