#include "search_algos.h"

/**
 * linear_search - function that implements the linear search alg
 * @array: pointer to the array of elements
 * @size: the number of element to search in
 * @value: the element to look for
 * Return: position of value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
