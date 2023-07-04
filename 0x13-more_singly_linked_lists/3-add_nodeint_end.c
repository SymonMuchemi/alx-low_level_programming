#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the head node
 * @n: data to add to new node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *temp, *h;

    temp = (listint_t *)malloc(sizeof(listint_t));

    if (temp == NULL)
        return (NULL);
    
    temp->n = n;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
        return (temp); 
    }

    h = *head;

    while(h->next)
    {
        h = h->next;
    }

    h->next = temp;

    return (temp);
}
