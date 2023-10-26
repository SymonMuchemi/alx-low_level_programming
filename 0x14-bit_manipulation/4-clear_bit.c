#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 given an index
 * @n: pointer to a number
 * @index: bit position
 * Return: 1 on success and -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n = *n & ~(1 << index);

	return (1);
}
