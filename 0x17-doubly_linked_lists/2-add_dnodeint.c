#include "lists.h"

/**
 * add_dnodeint - add a node at the start of the list
 * @head: pointer to the head of the list
 * @n: the new node's integer data element
 * Return: address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	/* creating the node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = (*head);

	if ((*head) != NULL)
		(*head)->prev = newNode;

	(*head) = newNode;

	return (newNode);
}
