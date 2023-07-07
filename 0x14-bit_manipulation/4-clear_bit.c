#include "main.h"
/**
 * clear_bit - sets the value of a bit
 * to 0
 * @n: pointer to a decimal number
 * @index: position to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}
