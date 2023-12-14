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

	if (!(*head))
		return (NULL);

	temp = *head;


	/* create the node with data as n*/
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	while (i < (idx - 1) && (temp))
	{
		i++;
		temp = temp->next;
	}

	previous = temp;
	newNode->next = previous->next;
	previous->next = newNode;

	return (newNode);
}
