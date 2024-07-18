#include "search_algos.h"

/**
 * advanced_binary - impoved version of the binary search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: the element being searched
 * Return: index of first occurence of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (bin_srch_recursive(array, 0, size - 1, value));
}

/**
 * bin_srch_recursive - recursive version of binary search
 * @array: pointer to the first element in the array
 * @low: the first element
 * @high: the last element
 * @value: the element being searched
 * Return: index of first occurence of value, else -1
 */
int bin_srch_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = low + (high - low) / 2;

	if (mid == 0 || (array[mid - 1] < value && array[mid] == value))
		return (mid);

	if (array[mid] >= value)
		return (bin_srch_recursive(array, low, mid, value));

	return (bin_srch_recursive(array, mid + 1, high, value));
}
