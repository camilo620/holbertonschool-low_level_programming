#include "lists.h"
/**
 * add_dnodeint - Add new node to the doubly list.
 *
 * @head: head of the linked list for the node to be added.
 * @n: integer inside the new node.
 *
 * Return: new node pointer.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;

	return (node);
}
