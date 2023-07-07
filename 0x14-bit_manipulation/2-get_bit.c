#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: decimal number
 * @index: index to check
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int x = n;
    
    x = (x & (1 << index)) >> index;

    return (x);
}

