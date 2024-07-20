#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search alg
 * @array: the sequence of numbers
 * @size: the number of elements to search from
 * @value: the value to look for
 * Return: the first index of the value element or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
	}

	return (-1);
}
