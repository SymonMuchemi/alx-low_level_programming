#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: the first node of the list
 * @str: a string value data for the new node
 * Return: address of the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;

	/* creating the new node*/
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	/*check if head exists*/
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	/* traverse the list till the end*/
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	return (newNode);
}
