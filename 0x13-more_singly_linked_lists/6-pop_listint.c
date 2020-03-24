#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: head node
 * Return: integer value inside the node
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);

	return (i);
}
