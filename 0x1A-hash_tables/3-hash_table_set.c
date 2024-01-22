#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key string, unique to each element
 * @value: the value to be referenced by the key
 * Return: 1 on success or 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *new_node, *current;

	if (strcmp(key, "") == 0 || ht == NULL || strcmp(value, "") == 0)
	{
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* populate data to the new node*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}

	/* incase of a collision */
	current = ht->array[index];

	/* if the keys are the same, replace nodes*/
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		new_node->next = current->next;
		ht->array[index] = new_node;
		free_node(current);
		return (1);
	}

	/* search for node with same key in the index*/
	while (current->next != NULL && strcmp(current->next->key, key) != 0)
	{
		current = current->next;
	}

	/* if node with same key is found, replace*/
	if (strcmp(current->key, key) == 0)
	{
		new_node->next = current->next->next;
		free_node(current->next);
		current->next = new_node;
		return (1);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
