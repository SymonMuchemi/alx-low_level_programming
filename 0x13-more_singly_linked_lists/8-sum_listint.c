#include "lists.h"
/**
 * sum_listint - finds the sum of all the data (n) of a
 * listint_t linked list
 * @head: the head of the list
 * Return: 0 if list is empty or sum
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    if (head == NULL)
        return (0);
    
    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}
