#include "lists.h"

/**
 * free_listint - frees all nodes in the list
 * @head: the head of the node
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
