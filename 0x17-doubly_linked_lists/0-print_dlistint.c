#include "lists.h"
/**
 * print_dlistint - Prints all the elements
 * @h: The head of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
