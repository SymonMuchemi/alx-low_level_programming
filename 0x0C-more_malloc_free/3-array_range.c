#include "main.h"
/**
 * array_range(min, max) - creates an array of integers
 * @min: lowest value
 * @max: highest value
 * Return: pointer to the array created
*/
int *array_range(int min, int max)
{
    int size, i, j = 0;
    int *array;

    if (min > max)
        return (NULL);
    
    size = max - min + 1;

    array = malloc(sizeof(int) * size);
    if (array == NULL)
        return (NULL);
    
    /*Initialize elements*/
    for (i = min; i <= max; i++)
    {
        array[j] = i;
        j++;
    }

    return (array);
}