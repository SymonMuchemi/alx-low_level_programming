#include "lists.h"

/**
 * sum_listint - sum all the data in the list
 * @head: the head of the list
 * Return: the summation of list data or 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
