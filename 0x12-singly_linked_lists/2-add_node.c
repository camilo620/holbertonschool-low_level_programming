#include "lists.h"
/**
 * add_node - add a node at head
 * @head: previous head address
 * @str: string to be copied into node
 * Return: new head address
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	i = strlen(str);
	temp->len = i;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
