#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key string, unique to each element
 * @value: the value to be referenced by the key
 * Return: 1 on success or 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	/* creating a new hash node to store key-value*/
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node || ht == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* chack for collision*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
