#include "function_pointers.h"
/**
 * array_iterator - performs specific functions 
 * on array elments
 * @arry: pointer to the array
 * @size: size of the array
 * @action: what to perform
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i = 0;

    if(array == NULL || action == NULL)
        return;

    while (i < size)
    {
        action(array[i]);
        i++;
    }
}