#include "search_algos.h"

/**
 * jump_list - implements jump search algorithm in a singly linked list
 * @list: a list_int list
 * @size: number of nodes in the linked list
 * @value: the item to search for
 * Return: pointer to the node whose n is equal to value or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr, *prev;
	int step, i;

	if (list == NULL || size == 0)
		return (NULL);

	step = (int) sqrt(size);
	while (curr->next && curr->index < size && curr->n < value)
	{
		prev = curr;
		for (i = 0; i < step && curr->next; i++)
			curr = curr->next;
	}

	while (prev && prev->index <= curr->index)
	{
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
