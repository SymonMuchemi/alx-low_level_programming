#include "lists.h"

void delete_last_node(listint_t **head)
{

    listint_t *current = *head;
    listint_t *previous = NULL;

    if (*head == NULL) {
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }


    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;

    free(current);
}
/**
 * 1-2-3-4-5
 * 1-2-3-4-null
 * free(5)
 * 
 * 
 * 
 */
