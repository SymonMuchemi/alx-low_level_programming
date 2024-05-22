#include "search_algos.h"

/**
 * binary_search - implements the binary search algorithm
 * @array: pointer to a sorted array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: The index of @value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
