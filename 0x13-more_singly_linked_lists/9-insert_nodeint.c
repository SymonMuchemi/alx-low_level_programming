#include "lists.h"

/**
 * insert_nodeint_at_index - function with 3 arguments
 * @head: pointer to head pointer of first node in linked list
 * @idx: index of list
 * @n: value integer
 *
 * Description: inserts a new node at a given position
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	currentNode = *head;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	while (currentNode != NULL)
	{
		if (count == idx - 1)
		{
			newNode->next = currentNode->next;
			currentNode->next = newNode;
		}
		count++;
		currentNode = currentNode->next;
	}
	if (idx > count)
		return (NULL);
	return (newNode);

}
