#include "lists.h"

/**
 * dlistint_len - count nodes in a doubly linked list.
 *
 * @h: head of the linked list to be print.
 *
 * Return: number of nodes of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}

	return (count);
}
