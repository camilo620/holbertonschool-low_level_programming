#include "lists.h"
/**
 * free_listint - free allocated memory of the nodes
 * @head: head of the list
 * Return (void)
 */

void free_listint(listint_t *head)
{
	int i;
	listint_t *temp;

	for (i = 0; head != 0; i++)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
