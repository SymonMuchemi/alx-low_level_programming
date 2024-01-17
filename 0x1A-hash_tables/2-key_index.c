#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key
 * @size: the size of the hash table
 * Return: the index of the key or 0
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL || size == 0)
		return (0);

	index = hash_djb2(key) % size;
	return (index);
}
