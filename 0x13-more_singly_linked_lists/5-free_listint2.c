#include "lists.h"

/**
 * free_listint2 - frees nodes in a list and set head to NULL
 * @head: pointer to the head node
 * Return: nothing
*/
void free_listint2(listint_t **head)
{

	listint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
