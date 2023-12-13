#include "lists.h"

/**
 * print_listint - prints all the elements of a listint list
 * @h: the head node of the list
 * Return: number of nodes traversed
*/
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
