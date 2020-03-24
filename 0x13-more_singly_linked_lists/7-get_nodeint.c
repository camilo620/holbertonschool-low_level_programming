#include "lists.h"
/**
 * get_nodeint_at_index - search for a specific position node
 * @head: head of the list
 * @index: position of the node
 * Return: node looked for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}

	return (temp);
}
