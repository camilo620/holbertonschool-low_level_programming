#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list and count it's nodes.
 *
 * @h: head of the linked list to be print.
 *
 * Return: number of nodes of the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
