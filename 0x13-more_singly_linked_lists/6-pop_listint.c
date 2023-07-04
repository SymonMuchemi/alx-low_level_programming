#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint list
 * @head: pointer to head node 
 * Return: 0 if list is empty or data (n) 
 */
int pop_listint(listint_t **head)
{
    int data;
    listint_t *temp;

    temp = *head;

    data = temp->n;

    if (temp == NULL)
        return (0);
    
    *head = (*head)->next;
    free(temp);

    return (data);
}
