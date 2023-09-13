#include "search_algos.h"

/**
 * interpolation_search - searches through a sorted array
 * @array: points to first element of the array
 * @size:  number of elements in an array
 * @value: the value to be search for
 * Return: first index where value has been located at
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t y, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		y = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (y < size)
			printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", y);
			break;
		}

		if (array[y] == value)
			return (y);
		if (array[y] > value)
			r = y - 1;
		else
			l = y + 1;
	}

	return (-1);
}
