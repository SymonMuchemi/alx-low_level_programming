#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - function with two arguments
 * @head: pointer to head pointer of first node in a linked list
 * @index: element index in a linked list
 *
 * Description: deletes the node at index of a linked list
 * Return: 1 if succeeded or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *nextNode;
	unsigned int count = 0;

	current = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	if (index == 1)
	{
		current = (*head)->next;
		(*head)->next = current->next;
		free(current);
		return (1);
	}
	while (count < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		count++;
		current = current->next;
		nextNode = current->next;
	}
	current->next = nextNode->next;
	free(nextNode);

	return (1);
}
