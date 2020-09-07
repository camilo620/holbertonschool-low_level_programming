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
	size_t n;

	for (n = 0; h; h = h->next, n++)
	{
		printf("%d\n", h->n);
	}

	return (n);
}
