#include "search_algos.h"

/**
 * linear_search - searches for an integer in an array
 * @array: points to first element of the array
 * @size: number of elements in the array
 * @value: value to be searched for
 * Return: index of value found || -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t y = 0;

	if (array == NULL)
		return (-1);

	for (y = 0; y < size; y++)
	{
		printf("Value checked array[%lu] = [%d]\n", y, array[y]);

		if (array[y] == value)
			return (y);
	}
	return (-1);
}
