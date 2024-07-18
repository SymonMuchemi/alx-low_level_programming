#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches using the jump search algorithm
 * @array: the sequence of elements
 * @size: the number of elements to search for in the array
 * @value: the number to look for in the array
 * Return: index of the value element or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int len = (int) size - 1;
	int j = (int) sqrt(size);
	int i, k;

	if (!array)
		return (-1);

	for (i = 0; i <= len; i += j)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - j, i);
			break;
		}
	}

	if (i > len)
		printf("Value found between indexes [%d] and [%d]\n", i - j, i);


	for (k = i - j; k <= len; k++)
	{
		printf("Value checked array[%d] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}

	return (-1);
}
