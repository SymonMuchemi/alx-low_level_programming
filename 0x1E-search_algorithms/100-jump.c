#include "search_algos.h"

/**
 * jump_search - searches for a value using jump search alg
 * @array: pointer to a sorted array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index of value or -1
*/
int jump_search(int *array, size_t size, int value)
{
	int i, j, k, len;

	if (!array)
		return (-1);

	j = (int)sqrt(size);
	len = (int)size - 1;

	for (i = 0; i < len; i += j)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", i, i - j);

	for (k = i - j; k < len; k++)
	{
		printf("Value checked array[%d] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return k;
	}

	return (-1);
}
