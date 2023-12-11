#include "lists.h"

/**
 * list_len - returns the number of nodes in a list
 * @h: the head node
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h)
	{
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
