#include "hash_tables.h"


/**
 * hash_djb2 - hash function implementing the djb2 algorith
 * @str: a tring input
 * Return: a hash cpde
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5281;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c*/
	}

	return (hash);
}
