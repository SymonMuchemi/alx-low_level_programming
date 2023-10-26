#include "main.h"
/**
 * set_bit - sets a bit to 1
 * @n: pointer to a number
 * @index: bit positionn
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8 - 1))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
