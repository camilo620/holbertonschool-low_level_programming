#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at the specified position
 * @head: address of the head node
 * @index: position to be deleted
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *temp2;

	temp = *head;

	for (i = 0; temp != 0; i++)
	{
		if (index == 0)
		{
			temp2 = *head;
			*head = temp2->next;
			free(temp2);
			return (1);
		}
		else if (i == index - 1)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
