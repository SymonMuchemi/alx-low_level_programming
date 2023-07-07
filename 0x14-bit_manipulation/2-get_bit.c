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

    if (index >= sizeof(unsigned long int) * 8)
        return (-1);
    
    x = (x & (1 << index)) >> index;

    return (x);
}

