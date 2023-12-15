#include "lists.h"

/**
 * print_dlistint - prints all elements in a dilistint_t list
 * @h: the head of the list
 * Return: the number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nodeCount = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		nodeCount++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (nodeCount);
}
