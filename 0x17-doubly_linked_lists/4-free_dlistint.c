#include "lists.h"
/**
 * free_dlistint - free memory of a doubly linked list.
 *
 * @head: head of the linked list.
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int n;

	for (n = 0; temp != NULL; n++)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
