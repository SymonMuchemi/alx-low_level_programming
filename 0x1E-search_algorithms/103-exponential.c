#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array using
 * interpolation search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: the search value
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, left, right;

	if (array == NULL)
		return (-1);

	while (bound < (int) size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = (bound / 2);
	right = (bound < (int) size) ? bound : (int) size - 1;

	return (binary_srch(array, left, right, value));
}

/**
 * binary_srch - searches for a value in a sorted array using
 * binary search algorithm
 * @array: pointer to the first element in the array
 * @left: the beginning of search
 * @right: the last element to check
 * @value: the search value
 * Return: index of value or -1
 */
int binary_srch(int *array, int left, int right, int value)
{
	int mid, i;

	if (array == NULL)
		return (-1);

	printf("Value found between indexes [%d] and [%d]\n", left, right);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", i);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	return (-1);
}
