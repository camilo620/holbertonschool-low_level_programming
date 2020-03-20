#include "lists.h"
/**
 * add_node_end - add a node at the end of struct
 * @head: head of the node structure
 * @str: string to be copied into node
 * Return: new node address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;
	int i;

	node = malloc(sizeof(list_t));

	if (node == 0)
	{
		return (0);
	}

	for (i = 0; str[i] != 0; i++)
	{

	}
	node->len = i;
	node->str = strdup(str);
	node->next = NULL;

	if (*head == 0)
	{
		*head = node;
	}

	else
	{
		temp = *head;
		for (i = 0; temp->next != 0; i++)
		{
			temp = temp->next;
		}

		temp->next = node;
	}

	return (node);
}
