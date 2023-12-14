#include "lists.h"

/**
 * reverse_listint -reverse a listint_t list
 * @head: a pointer to the head node
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next, *previous = NULL;

	if (head == NULL || (*head) == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;

	return (*head);
}
