#include "main.h"
/**
 * set_bit - sets a bit to 1
 * @n: decimal number
 * @index: bit's position
 * Return: 1 on success or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    int x;

    if (index >= sizeof(unsigned long int) * 8)
        return (-1);
    
    x = *n | (1 << index);

    return (x);
}
