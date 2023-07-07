#include "main.h"
/**
 * flip_bits - returns the number of bits you would 
 * need to flip to get from one number to another.
 * @n: first decimal
 * @m: second decimal
 * Return: number of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int mxrn;
    int bit, count = 0;

    if (n == m)
        return (0);
    
    mxrn = m ^ n;
    
    while (mxrn)
    {
        bit = get_bit(mxrn, 0);
        if (bit == 1)
            count++;
        
        mxrn /= 2;
    }
    return (count);
}
