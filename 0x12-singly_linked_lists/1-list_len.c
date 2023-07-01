#include "lists.h"
/**
 * list_len - returns the number of elements 
 * in a linked list
 * @h: head
 * return: int
 */
size_t list_len(const list_t *h)
{
    size_t node_count = 0;

    if (h == NULL)
        return (-1);

    while (h)
    {
        node_count++;
        h = h->next;
    }
    return (node_count);
}
