#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in the idx position.
 *
 * @h: head of the linked list.
 * @idx: position of the node to be inserted.
 * @n: number inside the new node.
 *
 * Return: new node pointer or NULL if it cannot be added.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (node == NULL)
		return (NULL);

	if (*h)
	{
		for (count = 0; temp; temp = temp->next, count++)
		{
		}
		if (idx > count)
		{
			return (NULL);
		}
		temp = *h;
		for (count = 0; count <= idx; temp = temp->next, count++)
		{
			if (count == idx && temp == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			else if (count + 1 == idx)
			{
				node->n = n;
				node->next = temp->next;
				node->prev = temp;
				temp->next = node;
				return (node);
			}
		}
	}
	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	return (NULL);
}
