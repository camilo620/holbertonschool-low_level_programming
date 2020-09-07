#include "lists.h"
/**
 * get_dnodeint_at_index - finds the node at the index position.
 *
 * @head: head of the linked list.
 * @index: position of the node to be find.
 *
 * Return: node found or NULL if it does not exists.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	for (n = 0; temp && n <= index; n++)
	{
		if (n == index)
		{
			return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
