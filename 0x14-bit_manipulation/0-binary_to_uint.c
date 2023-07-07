#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to 
 * unsigned int
 * @b: binary rep of number
 * Return: decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    unsigned int i = 0;

    if (b == NULL)
        return (0);

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        num = num * 2 + (b[i] - '0');
        i++;
    }

    return num;
}
