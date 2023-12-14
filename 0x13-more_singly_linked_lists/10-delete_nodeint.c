#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the head node
 * @index: position of node to be deleted
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i = 0;

	/* if list is empty*/
	if (!(*head) || !(head))
		return (-1);

	temp = (*head);

	/* if list has only one node*/
	if (!(temp->next))
	{
		if (index == 0)
		{
			free(temp);
			return (1);
		}
		return (-1);
	}

	/* deletion at index 0*/
	if ((index == 0) && ((*head) || head))
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (temp->next)
	{
		if (i == (index - 1))
		{
			current = temp->next;
			temp->next = temp->next->next;
			free(current);
			return (1);
		}
		temp = temp->next;
		i++;
	}

	return (-1);
}
