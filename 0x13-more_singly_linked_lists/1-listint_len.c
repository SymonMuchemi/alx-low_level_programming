#include "lists.h"

/**
 * listint_len - finds the length of a listint_t list
 * @h: the head of the list
 * Return: the length of the list
*/
size_t listint_len(const listint_t *h)
{
	size_t list_length = 0;

	if (!h)
		return (0);

	while (h)
	{
		list_length++;
	}

	return (list_length);
}
