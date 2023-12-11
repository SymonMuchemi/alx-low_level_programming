#include "lists.h"

/**
 * print_list - prints all linked lists elements
 * @h: point to the head node
 * Return: the number of node traversed
*/
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		nodeCount++;
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}

	return (nodeCount);
}
