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

	temp = (*head)->next;
	headData = (*head)->n;

	/* if list has only one node*/
	if (!temp)
		return (headData);

	free(*head);

	/* set new head to be temp*/
	*head = temp;

	return (headData);

}
