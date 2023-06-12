#include "main.h"
/**
 * *create_array(unsigned int size, char c) - creates an array of chars, and initializes it with a specific char.
 * @size: the size of the array
 * @c: character to set
 * Return: NULL if size is 0 or failure,
 *  pointer to array if success
*/
char *create_array(unsigned int size, char c)
{
    char *myArray;
    unsigned int i;

    if (size <= 0)
        return (NULL);
    else
    {
        myArray = malloc(size);

        for (i = 0; i < size; i++)
        {
            myArray[i] = c;
        }
        myArray[size] = '\0';
    }

    return (myArray);
}