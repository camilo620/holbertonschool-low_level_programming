#include "lists.h"
/**
 * add_nodeint_end - add node at the end of the list
 * @head: head of the list
 * @n: integer to be add at the end
 * Return: new tail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	size_t i;
	listint_t *list = malloc(sizeof(listint_t));
	listint_t *temp;

	if (list == NULL)
	{
		return (NULL);
	}

	list->n = n;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
	}

	else
	{
		temp = *head;
		for (i = 0; temp->next != 0; i++)
		{
			temp = temp->next;
		}
		temp->next = list;
	}

	return (list);

}
