#include "lists.h"
/**
 * listint_len - computes the number of nodes in a
 * list
 * @h: the head of the list
 * Return: nnumer of elements
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    if (h == NULL)
        return (0);
    
    while (h)
    {
        h = h->next;
        count++;
    }

    return (count);
}
