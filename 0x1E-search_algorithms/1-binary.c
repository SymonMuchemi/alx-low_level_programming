#include "search_algos.h"

/**
 * binary_search - searches for an element using the binary search alg
 * @array: the sequence of integer elements
 * @size: the number of elements to look at in the array
 * @value: the element being searched
 * Return: the first index the element appears or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = ((int) size) - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_subarray(array, left, right);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
/**
 * print_subarray - prints out a part of an array
 * @arr: the parent array
 * @left: the first index
 * @right: the last index
 * Return: nothing, just printing
 */
void print_subarray(int arr[], int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", i);
}
