#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to the head node
 * @idx: point of insertion
 * @n: new node integer data
 * Return: pointer to the new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *previous, *temp;

	if (!(*head) || !head)
		return (NULL);

	temp = *head;

	/* create the node with data as n*/
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	/* If inserting at the beginning*/
	if (idx == 0)
	{
		newNode->next = temp;
		*head = newNode;

		return (newNode);
	}

	while (i < (idx - 1) && (temp->next))
	{
		i++;
		temp = temp->next;
	}

	/* Index out of range*/
	if (i < (idx - 1))
		return (NULL);

	if (temp->next)
	{
		previous = temp;
		newNode->next = previous->next;
		previous->next = newNode;

		return (newNode);
	}

	temp->next = newNode;

	return (newNode);
}
