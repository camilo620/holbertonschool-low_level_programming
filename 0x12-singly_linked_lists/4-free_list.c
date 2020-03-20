#include "lists.h"
/**
 * free_list - free allocated memory of node structure
 * @head: Addres of head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	int i;

	for (; head != 0; i++)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
