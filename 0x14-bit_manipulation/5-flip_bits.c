#include "main.h"
/**
 * flip_bits - returns number of bits needed to get from one number to another
 * @n: the first number
 * @m: the other numbber
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int count = 0;

	xor = n ^ m;

	while (xor != 0)
	{
		if ((xor & 1) == 1)
			count++;

		xor = xor >> 1;
	}

	return (count);
}
