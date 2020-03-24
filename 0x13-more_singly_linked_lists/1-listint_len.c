#include "lists.h"
/**
 * listint_len -  Check the number of elements in a list
 * @h: head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != 0; i++)
	{
		h = h->next;
	}

	return (i);
}
