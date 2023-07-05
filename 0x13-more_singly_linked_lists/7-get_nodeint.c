#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node of a 
 * listint_t list
 * @head: the head of the list
 * @index: index of node
 * Return: NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0;

    if (head == NULL)
        return (NULL);
    
    while (1)
    {
        if (count == index)
            return (head);

        head = head->next;
        count++;
    }

    return (NULL);
}
