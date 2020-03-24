#include "lists.h"
/**
 * print_listint - print a linked list
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (i = 0; h != 0; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
