#include "lists.h"
/**
 * add_nodeint - add a node at the beginig of the list
 * @head: address of the head of the list
 * @n: integer to be add to the list
 * Return: new head address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
