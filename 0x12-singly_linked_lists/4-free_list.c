#include "lists.h"

/**
 * free_list - frees all nodes in the list
 * @head: pointer to the head node
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
