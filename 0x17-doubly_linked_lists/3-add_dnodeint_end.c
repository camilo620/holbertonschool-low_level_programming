#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a linked list.
 *
 * @head: head of the linked list.
 * @n: number inside the new node.
 *
 * Return: pointer to the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;
	dlistint_t *temp = *head;

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;

	if (*head != NULL)
	{
		for (count = 0; temp->next != NULL; temp = temp->next, count++)
		{
		}
		node->next = NULL;
		node->prev = temp;
		temp->next = node;
		return (node);
	}
	node->next = NULL;
	node->prev = *head;
	*head = node;

	return (node);
}
