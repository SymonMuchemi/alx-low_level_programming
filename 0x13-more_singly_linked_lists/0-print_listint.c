#include "lists.h"
/**
 * print_listint - prints all elements in a list
 * @h: the head of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;

    if (h == NULL)
        return (-1);
    
    while(h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return (count);
}
