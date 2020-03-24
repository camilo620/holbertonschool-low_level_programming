#include "lists.h"
/**
 * free_listint2 - free allocated memory of the nodes
 * @head: head of the list
 * Return (void)
 */

void free_listint2(listint_t **head)
{
	int i;
	listint_t *temp, *temp2;

	if (head == NULL)
	{
		return;
	}

	temp = *head;
	for (i = 0; temp != 0; i++)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	*head == 0;
}
