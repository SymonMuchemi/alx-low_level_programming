#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	char *c;
    int bit = 1;

	c = (char *) & bit;

	return ((int)*c);
}
