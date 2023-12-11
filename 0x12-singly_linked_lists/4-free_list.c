#include "lists.h"

/**
 * free_list - Free all malloced spaced of a list
 * @head: Pointer to the start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
