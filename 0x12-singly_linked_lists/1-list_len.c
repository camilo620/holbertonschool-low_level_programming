#include "lists.h"
/**
 * list_len - checks the lenght of a node structure
 * @h: pointer to node structure
 * return: size of structure
 */

size_t list_len(const list_t *h)
{
    size_t i;

    for (i = 0; h != 0; i++)
    {
        h = h->next;
    }

    return (i);
}