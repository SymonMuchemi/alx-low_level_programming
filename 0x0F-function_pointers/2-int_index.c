#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: compare action
 * Return: nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (array == NULL || cmp == NULL)
        return (-1);
    
    while (i < size)
    {
        if (cmp(array[i]) == true)
            return (i);

        i++;
    }
    return (-1);
}