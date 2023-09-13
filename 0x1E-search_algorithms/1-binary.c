#include "search_algos.h"

/**
 * binary_search - search within a sorted array
 * @array: points to first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 if not found || index of value found
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int y;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching through the array: ");
		for (y = low; y <= high; x++)
			printf("%i%s", array[y], y == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
