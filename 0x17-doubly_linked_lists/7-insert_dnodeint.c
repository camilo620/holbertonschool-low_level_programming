#include "lists.h"
/**
 * listlen - size of a list
 * @head: head of the list
 * Return: size of the list
 */
size_t listlen(const dlistint_t *head)
{
	size_t len;

	for (len = 0; head; head = head->next, len++)
		;
	return (len);
}
/**
 * insert_dnodeint_at_index - Inserts node at idx position.
 *
 * @h: head of the list
 * @idx: index to the new node position.
 * @n: integer inside the new node
 *
 * Return: new node pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len = listlen(*h);
	size_t count;
	dlistint_t *temp = *h;
	dlistint_t *node;

	if (len < idx)
		return (0);

	else if (idx == 0)
		return (add_dnodeint(h, n));

	else if (idx == len)
		return (add_dnodeint_end(h, n));

	else if (idx != 0 && idx != len)
	{
		node = malloc(sizeof(dlistint_t));
		node->n = n;

		if (node == NULL)
			return (NULL);
			for (count = 0; temp; temp = temp->next, count++)
			{
				if (count + 1 == idx)
				{
					node->next = temp->next;
					node->prev = temp;
					temp->next->prev = node;
					temp->next = node;
					return (node);
				}
			}
	}
	return (NULL);
}
