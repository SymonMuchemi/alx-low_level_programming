#include "search_algos.h"

/**
 * interpolation_search - searches for a value using the interpolation search
 * algorithm
 * @array: pointer to a sequence of integers
 * @size: the number of elements in array
 * @value: the value to search
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, mul;
	size_t pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = (int) size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		mul = (value - array[low]);
		pos = low + (((double)(high - low) / (array[high] - array[low])) * mul);
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
