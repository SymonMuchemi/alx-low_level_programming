#include "lists.h"
/**
 * print_list - prints the elements of a list
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;
    const list_t *ptr;

    if (h == NULL)
        return (-1);
    
    ptr = h;

    while (ptr)
    {
        if (ptr->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", ptr->len, ptr->str);
        
        node_count++;
        ptr = ptr->next;
    }

    return (node_count);
}
