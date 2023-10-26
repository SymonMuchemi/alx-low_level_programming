#include "main.h"
/**
 * get_bit - returns the bit value of a number at a given index
 * @n: the number
 * @index: the bit position
 * Return: the bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= n)
		return (-1);

	if ((n & 1 << index) == 0)
		return (0);
	else
		return (1);
}
