#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: pointer to the created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	hash_node_t *array = malloc(sizeof(hash_node_t) * size);

	if (hash_table == NULL || array == NULL)
	{
		free(hash_table);
		free(array);
		return (NULL);
	}

	hash_table->array = &array;
	hash_table->size = size;

	return (hash_table);
}
