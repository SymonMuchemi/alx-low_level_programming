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
    const list_t *ptr;

    if (h == NULL)
        return (-1);
    
    ptr = h;

    while (ptr)
    {
        node_count++;
        ptr = ptr->next;
    }
    return (node_count);
}
