#include "lists.h"
/**
 * print_list - prints a list of strings
 * @h: node struct
 * Return: size of node struct
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
