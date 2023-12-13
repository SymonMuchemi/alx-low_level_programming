#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the nth node in a list
 * @head: the first node on the list
 * @index: the node's position
 * Return: pointer to the node or null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (i == index)
		return (head);

	while (i <= index)
	{
		head = head->next;
		i++;
		if (i == index)
			return (head);
	}

	return (NULL);

}
