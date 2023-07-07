#include "main.h"
/**
 * print_binary - prinnts the binary representation
 * of a number
 * @n: the decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1);
    
    _putchar((n & 1) ? '1': '0');
}
