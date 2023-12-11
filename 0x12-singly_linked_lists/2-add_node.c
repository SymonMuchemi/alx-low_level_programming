#include "lists.h"

/**
 * add_node - add a new node at the beginning of the list
 * @head: pointer to the head node
 * @str: string value data
 * Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	/* Allocating memory*/
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	/* Setting data*/
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	/* Pointing next of newNode to head*/
	newNode->next = *head;

	/* Updating head of list to point to new node*/
	*head = newNode;

	return (*head);
}
