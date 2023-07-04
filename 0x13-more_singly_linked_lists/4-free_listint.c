#include "lists.h"
/**
 * free_listint - frees a listint list
 * @head: pointer to the head of the list
 * Return: nothing
 */
 void free_listint(listint_t *head)
 {
    listint_t *temp;

    while (head)
    {
        temp = head->next;

        free(head);

        head = temp;
    }
 }
