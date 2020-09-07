#include "lists.h"
/**
 * delete_dnodeint_at_index - erase the node at the index position.
 *
 * @head: head of the linked list.
 * @index: position of the node to be erased.
 *
 * Return: 1 if succed, -1 if not.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp = *head;
	dlistint_t *prev_holder = 0;
	dlistint_t *next_holder = 0;

	for (count = 0; temp; temp = temp->next, count++)
	{
		if (index == 0)
		{
			if (temp->next)
			{
				next_holder = temp->next;
				next_holder->prev = 0;
			}
			*head = next_holder;
			free(temp);
			return (1);
		}
		else if (count == index)
		{
			prev_holder = temp->prev;
			if (temp->next)
			{
				next_holder = temp->next;
				next_holder->prev = prev_holder;
				prev_holder->next = next_holder;
			}
			else
				prev_holder->next = 0;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
