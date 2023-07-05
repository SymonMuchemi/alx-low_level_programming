#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to the head node
 * @idx: index
 * @n: data to hold
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *newNode, *nthNode, *currentNode;

    newNode = (listint_t *)malloc(sizeof(listint_t));
    if (newNode == NULL)
        return (NULL);

    newNode->n = n;

    if (idx == 0)
    {
        newNode->next = *head;
        *head = newNode;
        return (newNode);
    }

    nthNode = get_nodeint_at_index(*head, idx - 1);
    if (nthNode == NULL)
    {
        free(newNode);
        return (NULL);
    }

    currentNode = nthNode->next;
    nthNode->next = newNode;
    newNode->next = currentNode;

    return (newNode);
}
