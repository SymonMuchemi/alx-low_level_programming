#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: the head of the list
 * @n: the integer data element of the new node
 * Return: a pointer to the new node(head)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* new node creation*/
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
