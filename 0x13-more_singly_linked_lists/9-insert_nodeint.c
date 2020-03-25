#include "lists.h"
/**
 * insert_nodeint_at_index - insert node in the specific position (index)
 * @head: head of the list
 * @idx: index
 * @n: integer to be inserted in the new node
 * Return: new node address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *temp2 = malloc(sizeof(listint_t));

	if (temp2 == 0)
	{
		return (0);
	}

	if (idx == 0)
	{
		temp2->next = *head;
		temp2->n = n;
		*head = temp2;
		return (temp2);
	}
	temp = *head;
	for (; temp != 0; i++)
	{
		if (i == idx - 1)
		{
			temp2->n = n;
			temp2->next = temp->next;
			temp->next = temp2;
			return (temp2);
		}
	}
	
	return (0);
}
