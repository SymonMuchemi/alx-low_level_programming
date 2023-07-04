#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of the 
 * list
 * @head: pointer to the head node
 * @n: data
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
    temp->next = h;
    *head = temp;

    return (temp);
}
