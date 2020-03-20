#include "lists.h"
/**
 * print_list - prints a list of strings
 * @h: node struct
 * Return: size of node struct
 */
size_t print_list(const list_t *h)
{
    size_t i = 0;

    if (h->str == NULL)
    {
        printf("[0] (nil)\n");
        h = h->next;
        i++;
    }
    for (; h != NULL; i++)
    {
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
    }
    return (i);
}