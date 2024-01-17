#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: pointer to head of the list
 * @n: the integer data of the new node
 * Return: the address of the new element or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	/* Creating the new node*/
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if ((*head) == NULL)
		return (newNode);

	while ((*head) != NULL)
	{
		(*head) = (*head)->next;
	}

	(*head)->next = newNode;
	newNode->prev = (*head);

	return (newNode);
}
