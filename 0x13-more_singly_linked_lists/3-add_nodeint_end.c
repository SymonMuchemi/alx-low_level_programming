#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: the head of the list
 * @n: the integer data element of the new node
 * Return: pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* new node creation*/
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	/* check if list is empty*/
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	temp = *head;

	/* Traverser the list to the end*/
	while (temp->next)
	{
		temp = temp->next;
	}

	/* point the last node to the new node*/
	temp->next = newNode;

	return (newNode);
}
