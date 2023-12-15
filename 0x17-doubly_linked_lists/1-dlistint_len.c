#include "lists.h"

/**
 * dlistint_len - calculates the size of a dlistint_t list
 * @h: the head of the list
 * Return: number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
