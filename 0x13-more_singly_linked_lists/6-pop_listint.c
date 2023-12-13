#include "lists.h"

/**
 * pop_listint - delete the head of a listint-t list
 * @head: pointer to the head of the list
 * Return: head node data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int headData;

	if (!head || !(*head))
		return (0);

	temp = *head;
	headData = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (headData);
}
